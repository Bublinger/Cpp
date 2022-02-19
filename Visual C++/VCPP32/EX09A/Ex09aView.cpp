// Ex09aView.cpp : Implementierung der Klasse CEx09aView
//

#include "stdafx.h"
#include "Ex09a.h"

#include "Ex09aDoc.h"
#include "Ex09aView.h"

#include "Dialog1.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEx09aView

IMPLEMENT_DYNCREATE(CEx09aView, CView)

BEGIN_MESSAGE_MAP(CEx09aView, CView)
	//{{AFX_MSG_MAP(CEx09aView)
	ON_WM_LBUTTONDOWN()
	//}}AFX_MSG_MAP
	// Standard-Druckbefehle
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEx09aView Konstruktion/Destruktion

CEx09aView::CEx09aView()
{
	// ZU ERLEDIGEN: Hier Code zur Konstruktion einfügen,

}

CEx09aView::~CEx09aView()
{
}

BOOL CEx09aView::PreCreateWindow(CREATESTRUCT& cs)
{
	// ZU ERLEDIGEN: Ändern Sie hier die Fensterklasse oder das Erscheinungsbild, indem Sie
	//  CREATESTRUCT cs modifizieren.

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CEx09aView Zeichnen

void CEx09aView::OnDraw(CDC* pDC)
{
 	CEx09aDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	pDC->TextOut(0, 0, "Drücken Sie hier die linke Maustaste.");
}

/////////////////////////////////////////////////////////////////////////////
// CEx09aView Drucken

BOOL CEx09aView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Standardvorbereitung
	return DoPreparePrinting(pInfo);
}

void CEx09aView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// ZU ERLEDIGEN: Zusätzliche Initialisierung vor dem Drucken hier einfügen
}

void CEx09aView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// ZU ERLEDIGEN: Hier Bereinigungsarbeiten nach dem Drucken einfügen
}

/////////////////////////////////////////////////////////////////////////////
// CEx09aView Diagnose

#ifdef _DEBUG
void CEx09aView::AssertValid() const
{
	CView::AssertValid();
}

void CEx09aView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEx09aDoc* CEx09aView::GetDocument() // Die endgültige (nicht zur Fehlersuche kompilierte) Version ist Inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEx09aDoc)));
	return (CEx09aDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEx09aView Nachrichten-Handler

void CEx09aView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	CDialog1 dlg;
	dlg.DoModal();
}
