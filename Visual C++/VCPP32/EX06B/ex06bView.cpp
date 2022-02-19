// ex06bView.cpp :  Implementierung der Klasse CEx06bView 
//

#include "stdafx.h"
#include "ex06b.h"

#include "ex06bDoc.h"
#include "ex06bView.h"
#include "ex06bDialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEx06bView

IMPLEMENT_DYNCREATE(CEx06bView, CView)

BEGIN_MESSAGE_MAP(CEx06bView, CView)
	//{{AFX_MSG_MAP(CEx06bView)
	ON_WM_LBUTTONDOWN()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEx06bView Konstruktion/Destruktion

CEx06bView::CEx06bView()
{
	// ZU ERLEDIGEN: Hier Code zur Konstruktion einfügen,

}

CEx06bView::~CEx06bView()
{
}

BOOL CEx06bView::PreCreateWindow(CREATESTRUCT& cs)
{
	// ZU ERLEDIGEN: Ändern Sie hier die Fensterklasse oder das Erscheinungsbild, indem Sie
	//  CREATESTRUCT cs modifizieren.

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CEx06bView Zeichnen

void CEx06bView::OnDraw(CDC* pDC)
{
	pDC->TextOut(0, 0, "Drücken Sie hier die linke Maustaste.");
}

/////////////////////////////////////////////////////////////////////////////
// CEx06bView Diagnose

#ifdef _DEBUG
void CEx06bView::AssertValid() const
{
	CView::AssertValid();
}

void CEx06bView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEx06bDoc* CEx06bView::GetDocument() // Die endgültige (nicht zur Fehlersuche kompilierte) Version ist Inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEx06bDoc)));
	return (CEx06bDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEx06bView Nachrichten-Handler

void CEx06bView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	CEx06bDialog dlg;

	dlg.m_nTrackbar1 = 20;
	dlg.m_nTrackbar2 = 2; // Index für 8.0
	dlg.m_nProgress = 70; // schreibgeschützt
	dlg.m_dSpin = 3.2;

	dlg.DoModal();
}
