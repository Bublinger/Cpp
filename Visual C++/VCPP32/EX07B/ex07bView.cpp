// ex07bView.cpp : Implementierung der Klasse CEx07bView
//

#include "stdafx.h"
#include "ex07b.h"

#include "ex07bDoc.h"
#include "ex07bView.h"
#include "SpecFileDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEx07bView

IMPLEMENT_DYNCREATE(CEx07bView, CView)

BEGIN_MESSAGE_MAP(CEx07bView, CView)
	//{{AFX_MSG_MAP(CEx07bView)
	ON_WM_LBUTTONDOWN()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEx07bView Konstruktion/Destruktion

CEx07bView::CEx07bView()
{
	// ZU ERLEDIGEN: Hier Code zur Konstruktion einfügen,

}

CEx07bView::~CEx07bView()
{
}

BOOL CEx07bView::PreCreateWindow(CREATESTRUCT& cs)
{
	// ZU ERLEDIGEN: Ändern Sie hier die Fensterklasse oder das Erscheinungsbild, indem Sie
	//  CREATESTRUCT cs modifizieren.

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CEx07bView Zeichnen

void CEx07bView::OnDraw(CDC* pDC)
{
	pDC->TextOut(0, 0, "Hier linke Maustaste drücken.");
}

/////////////////////////////////////////////////////////////////////////////
// CEx07bView Diagnose

#ifdef _DEBUG
void CEx07bView::AssertValid() const
{
	CView::AssertValid();
}

void CEx07bView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEx07bDoc* CEx07bView::GetDocument() // Die endgültige (nicht zur Fehlersuche kompilierte) Version ist Inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEx07bDoc)));
	return (CEx07bDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEx07bView Nachrichten-Handler

void CEx07bView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	CSpecialFileDialog dlgFile(TRUE, NULL, "*.obj");
	CString strMessage;
	int nModal = dlgFile.DoModal();
	if ((nModal == IDCANCEL) && (dlgFile.m_bDeleteAll)) {
		strMessage.Format(
			"Sollen wirklich alle %s-Dateien gelöscht werden?",
			dlgFile.m_strFilename);
		if (AfxMessageBox(strMessage, MB_YESNO) == IDYES) {
			HANDLE h;
			WIN32_FIND_DATA fData;
			while((h = ::FindFirstFile(dlgFile.m_strFilename, &fData))
			        != (HANDLE) 0xFFFFFFFF) { // kein MFC-Äquivalent
				if (::DeleteFile(fData.cFileName) == FALSE) {
					strMessage.Format("Löschen der Datei %s nicht möglich\n",
						fData.cFileName);
					AfxMessageBox(strMessage);
					break;
				}
			}
		}
	}
	else if (nModal == IDOK) {
		CString strSingleFilename = dlgFile.GetPathName();
		strMessage.Format(
			"Soll die Datei %s wirklich gelöscht werden?", strSingleFilename);
		if (AfxMessageBox(strMessage, MB_YESNO) == IDYES) {
			CFile::Remove(strSingleFilename);
		}
	}
}
