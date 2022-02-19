// ex08bView.cpp : Implementierung der Klasse CEx08bView
//

#include "stdafx.h"
#include "ex08b.h"

#include "ex08bDoc.h"
#include "ex08bView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEx08bView


const char CEx08bView::s_engineAltavista[] =
	"http://altavista.digital.com/";

IMPLEMENT_DYNCREATE(CEx08bView, CView)

BEGIN_MESSAGE_MAP(CEx08bView, CView)
	//{{AFX_MSG_MAP(CEx08bView)
	ON_WM_CREATE()
	ON_WM_SIZE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEx08bView Konstruktion/Destruktion

CEx08bView::CEx08bView()
{
	// ZU ERLEDIGEN: Hier Code zur Konstruktion einfügen,

}

CEx08bView::~CEx08bView()
{
}

BOOL CEx08bView::PreCreateWindow(CREATESTRUCT& cs)
{
	// ZU ERLEDIGEN: Ändern Sie hier die Fensterklasse oder das Erscheinungsbild, indem Sie
	//  CREATESTRUCT cs modifizieren.

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CEx08bView Zeichnen

void CEx08bView::OnDraw(CDC* pDC)
{
	CEx08bDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// ZU ERLEDIGEN: Hier Code zum Zeichnen der ursprünglichen Daten hinzufügen
}

/////////////////////////////////////////////////////////////////////////////
// CEx08bView Diagnose

#ifdef _DEBUG
void CEx08bView::AssertValid() const
{
	CView::AssertValid();
}

void CEx08bView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEx08bDoc* CEx08bView::GetDocument() // Die endgültige (nicht zur Fehlersuche kompilierte) Version ist Inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEx08bDoc)));
	return (CEx08bDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEx08bView Nachrichten-Handler

int CEx08bView::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
	if (CView::OnCreate(lpCreateStruct) == -1)
		return -1;

	DWORD dwStyle = WS_VISIBLE | WS_CHILD;	
	if (m_search.Create(NULL, dwStyle, CRect(0, 0, 100, 100),
	                    this, ID_BROWSER_SEARCH) == 0) {
		AfxMessageBox("Suchsteuerelement kann nicht erstellt werden!\n");
		return -1;
	}
	m_search.Navigate(s_engineAltavista, NULL, NULL, NULL, NULL);

	if (m_target.Create(NULL, dwStyle, CRect(0, 0, 100, 100),
	                    this, ID_BROWSER_TARGET) == 0) {
		AfxMessageBox("Zielsteuerelement kann nicht erstellt werden!\n");
		return -1;
	}
	m_target.GoHome(); // Einstellungen von IE4 übernehmen
	
	return 0;
}

void CEx08bView::OnSize(UINT nType, int cx, int cy) 
{
	CView::OnSize(nType, cx, cy);
	
	CRect rectClient;
	GetClientRect(rectClient);
	CRect rectBrowse(rectClient);
	rectBrowse.right = rectClient.right / 2;
	CRect rectSearch(rectClient);
	rectSearch.left = rectClient.right / 2;

	m_target.SetWidth(rectBrowse.right - rectBrowse.left);
	m_target.SetHeight(rectBrowse.bottom - rectBrowse.top);
	m_target.UpdateWindow();

	m_search.SetLeft(rectSearch.left);
	m_search.SetWidth(rectSearch.right - rectSearch.left);
	m_search.SetHeight(rectSearch.bottom - rectSearch.top);
	m_search.UpdateWindow();	
}


BEGIN_EVENTSINK_MAP(CEx08bView, CView)
	ON_EVENT(CEx08bView, ID_BROWSER_SEARCH, 101, OnBeforeNavigateExplorer1, VTS_BSTR VTS_I4 VTS_BSTR VTS_PVARIANT VTS_BSTR VTS_PBOOL)
	ON_EVENT(CEx08bView, ID_BROWSER_TARGET, 102, OnTitleChangeExplorer2, VTS_BSTR)
END_EVENTSINK_MAP()

void CEx08bView::OnBeforeNavigateExplorer1(LPCTSTR URL,
	long Flags, LPCTSTR TargetFrameName,
	VARIANT FAR* PostData, LPCTSTR Headers, BOOL FAR* Cancel)
{
	TRACE("CEx08bView::OnBeforeNavigateExplorer1 -- URL = %s\n", URL);

	if (!strnicmp(URL, s_engineAltavista, strlen(s_engineAltavista))) {
		return;
	}
	m_target.Navigate(URL, NULL, NULL, PostData, NULL);
	*Cancel = TRUE;
}

void CEx08bView::OnTitleChangeExplorer2(LPCTSTR Text)
{
	// Vorsichdt! Ereignis kann ausgelöst werden, bevor wir darauf reagieren können.
	CWnd* pWnd = AfxGetApp()->m_pMainWnd;
	if (pWnd != NULL) {
		if (::IsWindow(pWnd->m_hWnd)) {
			pWnd->SetWindowText(Text);
		}
	}
}
