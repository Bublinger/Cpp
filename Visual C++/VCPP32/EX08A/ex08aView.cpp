// ex08aView.cpp : Implementierung der Klasse CEx08aView
//

#include "stdafx.h"
#include "ex08a.h"

#include "ex08aDoc.h"
#include "ex08aView.h"
#include "ActiveXDialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEx08aView

IMPLEMENT_DYNCREATE(CEx08aView, CView)

BEGIN_MESSAGE_MAP(CEx08aView, CView)
	//{{AFX_MSG_MAP(CEx08aView)
	ON_WM_LBUTTONDOWN()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEx08aView Konstruktion/Destruktion

CEx08aView::CEx08aView()
{
	// ZU ERLEDIGEN: Hier Code zur Konstruktion einfügen,

}

CEx08aView::~CEx08aView()
{
}

BOOL CEx08aView::PreCreateWindow(CREATESTRUCT& cs)
{
	// ZU ERLEDIGEN: Ändern Sie hier die Fensterklasse oder das Erscheinungsbild, indem Sie
	//  CREATESTRUCT cs modifizieren.

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CEx08aView Zeichnen

void CEx08aView::OnDraw(CDC* pDC)
{
	pDC->TextOut(0, 0, "Drücken Sie hier die linke Maustaste.");
}

/////////////////////////////////////////////////////////////////////////////
// CEx08aView Diagnose

#ifdef _DEBUG
void CEx08aView::AssertValid() const
{
	CView::AssertValid();
}

void CEx08aView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEx08aDoc* CEx08aView::GetDocument() // Die endgültige (nicht zur Fehlersuche kompilierte) Version ist Inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEx08aDoc)));
	return (CEx08aDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEx08aView Nachrichten-Handler

void CEx08aView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	CActiveXDialog dlg;
	dlg.m_BackColor = RGB(255, 251, 240); // hellgelb
	COleDateTime today = COleDateTime::GetCurrentTime();
	dlg.m_varValue = COleDateTime(today.GetYear(), today.GetMonth(),today.GetDay(), 0, 0, 0);
	if (dlg.DoModal() == IDOK) {
		COleDateTime date(dlg.m_varValue);
		AfxMessageBox(date.Format("%B %d, %Y"));
	}
}
