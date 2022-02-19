// ex07aView.cpp : Implementierung der Klasse CEx07aView
//

#include "stdafx.h"
#include "ex07a.h"

#include "ex07aDoc.h"
#include "ex07aView.h"
#include "ex07aDialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEx07aView

IMPLEMENT_DYNCREATE(CEx07aView, CView)

BEGIN_MESSAGE_MAP(CEx07aView, CView)
	ON_MESSAGE(WM_GOODBYE, OnGoodbye)
	//{{AFX_MSG_MAP(CEx07aView)
	ON_WM_LBUTTONDOWN()
	ON_WM_RBUTTONDOWN()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEx07aView Konstruktion/Destruktion

CEx07aView::CEx07aView()
{
	m_pDlg = new CEx07aDialog(this);
}

CEx07aView::~CEx07aView()
{
		delete m_pDlg; // löscht Fenster, falls dieses nichts bereits gelöscht ist
}

BOOL CEx07aView::PreCreateWindow(CREATESTRUCT& cs)
{
	// ZU ERLEDIGEN: Ändern Sie hier die Fensterklasse oder das Erscheinungsbild, indem Sie
	//  CREATESTRUCT cs modifizieren.

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CEx07aView Zeichnen

void CEx07aView::OnDraw(CDC* pDC)
{
	pDC->TextOut(0, 0, "Hier linke Maustaste drücken.");
}

/////////////////////////////////////////////////////////////////////////////
// CEx07aView Diagnose

#ifdef _DEBUG
void CEx07aView::AssertValid() const
{
	CView::AssertValid();
}

void CEx07aView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEx07aDoc* CEx07aView::GetDocument() // Die endgültige (nicht zur Fehlersuche kompilierte) Version ist Inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEx07aDoc)));
	return (CEx07aDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEx07aView Nachrichten-Handler

void CEx07aView::OnLButtonDown(UINT nFlags, CPoint point) 
{
	// Dialogfeld erstellen, falls nicht vorhanden
	if (m_pDlg->GetSafeHwnd() == 0) {
		m_pDlg->Create(); // Dialogfeld anzeigen
	}
}

void CEx07aView::OnRButtonDown(UINT nFlags, CPoint point) 
{
	m_pDlg->DestroyWindow();
	// unproblematisch, wenn Fenster bereits gelöscht ist	
}

LRESULT CEx07aView::OnGoodbye(WPARAM wParam, LPARAM lParam)
{
	// Nachrichten von Schaltflächen OK und Abbrechen
	//  im nichtmodalen Dialogfeld
	TRACE("CEx07aView::OnGoodbye %x, %lx\n", wParam, lParam);
	TRACE("Inhalt des Eingabefelds = %s\n",
	      (const char*) m_pDlg->m_strEdit1);
	m_pDlg->DestroyWindow();
	return 0L;
}
