// ex12aView.cpp : Implementierung der Klasse CEx12aView
//

#include "stdafx.h"
#include "ex12a.h"

#include "ex12aDoc.h"
#include "ex12aView.h"
#include "ComputeDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEx12aView

IMPLEMENT_DYNCREATE(CEx12aView, CView)

BEGIN_MESSAGE_MAP(CEx12aView, CView)
	//{{AFX_MSG_MAP(CEx12aView)
	ON_WM_LBUTTONDOWN()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEx12aView Konstruktion/Destruktion

CEx12aView::CEx12aView()
{
	// ZU ERLEDIGEN: Hier Code zur Konstruktion einfügen,

}

CEx12aView::~CEx12aView()
{
}

BOOL CEx12aView::PreCreateWindow(CREATESTRUCT& cs)
{
	// ZU ERLEDIGEN: Ändern Sie hier die Fensterklasse oder das Erscheinungsbild, indem Sie
	//  CREATESTRUCT cs modifizieren.

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CEx12aView Zeichnen

void CEx12aView::OnDraw(CDC* pDC)
{
	pDC->TextOut(0, 0, "Hier linke Maustaste drücken.");
}

/////////////////////////////////////////////////////////////////////////////
// CEx12aView Diagnose

#ifdef _DEBUG
void CEx12aView::AssertValid() const
{
	CView::AssertValid();
}

void CEx12aView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEx12aDoc* CEx12aView::GetDocument() // Die endgültige (nicht zur Fehlersuche kompilierte) Version ist Inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEx12aDoc)));
	return (CEx12aDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEx12aView Nachrichten-Handler

void CEx12aView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	CComputeDlg dlg;
	dlg.DoModal();
}
