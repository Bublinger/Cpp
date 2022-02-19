// ex06aView.cpp : Implementierung der Klasse CEx06aView
//

#include "stdafx.h"
#include "ex06a.h"

#include "ex06aDoc.h"
#include "ex06aDialog.h"
#include "ex06aView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEx06aView

IMPLEMENT_DYNCREATE(CEx06aView, CView)

BEGIN_MESSAGE_MAP(CEx06aView, CView)
	//{{AFX_MSG_MAP(CEx06aView)
	ON_WM_LBUTTONDOWN()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEx06aView Konstruktion/Destruktion

CEx06aView::CEx06aView()
{
	// ZU ERLEDIGEN: Hier Code zur Konstruktion einfügen,

}

CEx06aView::~CEx06aView()
{
}

BOOL CEx06aView::PreCreateWindow(CREATESTRUCT& cs)
{
	// ZU ERLEDIGEN: Ändern Sie hier die Fensterklasse oder das Erscheinungsbild, indem Sie
	//  CREATESTRUCT cs modifizieren.

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CEx06aView Zeichnen

void CEx06aView::OnDraw(CDC* pDC)
{
  pDC->TextOut(0, 0, "Drücken Sie hier die linke Maustaste.");
}

/////////////////////////////////////////////////////////////////////////////
// CEx06aView Diagnose

#ifdef _DEBUG
void CEx06aView::AssertValid() const
{
	CView::AssertValid();
}

void CEx06aView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEx06aDoc* CEx06aView::GetDocument() // Die endgültige (nicht zur Fehlersuche kompilierte) Version ist Inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEx06aDoc)));
	return (CEx06aDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEx06aView Nachrichten-Handler

void CEx06aView::OnLButtonDown(UINT nFlags, CPoint point) 
{
    CEx06aDialog dlg;
    dlg.m_strName  = "Shakespeare, William";
    dlg.m_nSsn     = 307806636;
    dlg.m_nCat     = 1;  // 0 = Stundenhonorar, 1 = Gehalt
    dlg.m_strBio   = "Diese Person ist als technischer Autor kaum geeignet.";
    dlg.m_bInsLife = TRUE;
    dlg.m_bInsDis  = FALSE;
    dlg.m_bInsMed  = TRUE;
    dlg.m_strDept  = "Dokumentation";
    dlg.m_strSkill = "Autor";
    dlg.m_strLang  = "Englisch";
    dlg.m_strEduc  = "Universität";
    dlg.m_nLoyal   = dlg.m_nRely = 50;
    int ret = dlg.DoModal();
    TRACE("DoModal-Rückgabe= %d\n", ret);
    TRACE("Name = %s, ssn = %d, Kat = %d\n",
          dlg.m_strName, dlg.m_nSsn, dlg.m_nCat);
    TRACE("Abt. = %s, Fert = %s, Spr = %s, Ausb = %s\n",
          dlg.m_strDept, dlg.m_strSkill, dlg.m_strLang, dlg.m_strEduc);
    TRACE("Leben = %d, Unfall = %d, Krankheit = %d, Bio = %s\n",
          dlg.m_bInsLife, dlg.m_bInsDis, dlg.m_bInsMed, dlg.m_strBio);
    TRACE("Loyalität = %d, Zuverlässigkeit = %d\n",
          dlg.m_nLoyal, dlg.m_nRely);
	
	CView::OnLButtonDown(nFlags, point);
}
