// ex11dView.cpp : Implementierung der Klasse CEx11dView
//

#include "stdafx.h"
#include "ex11d.h"

#include "ex11dDoc.h"
#include "ex11dView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEx11dView

IMPLEMENT_DYNCREATE(CEx11dView, CView)

BEGIN_MESSAGE_MAP(CEx11dView, CView)
	//{{AFX_MSG_MAP(CEx11dView)
		// HINWEIS - Hier werden Mapping-Makros vom Klassen-Assistenten eingef�gt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VER�NDERN!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEx11dView Konstruktion/Destruktion

CEx11dView::CEx11dView()
{
	// ZU ERLEDIGEN: Hier Code zur Konstruktion einf�gen,

}

CEx11dView::~CEx11dView()
{
}

BOOL CEx11dView::PreCreateWindow(CREATESTRUCT& cs)
{
	// ZU ERLEDIGEN: �ndern Sie hier die Fensterklasse oder das Erscheinungsbild, indem Sie
	//  CREATESTRUCT cs modifizieren.

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CEx11dView Zeichnen

void CEx11dView::OnDraw(CDC* pDC)
{
	pDC->TextOut(0, 0, "W�hlen Sie 'Info' aus dem Men� 'Hilfe'.");
}

/////////////////////////////////////////////////////////////////////////////
// CEx11dView Diagnose

#ifdef _DEBUG
void CEx11dView::AssertValid() const
{
	CView::AssertValid();
}

void CEx11dView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEx11dDoc* CEx11dView::GetDocument() // Die endg�ltige (nicht zur Fehlersuche kompilierte) Version ist Inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEx11dDoc)));
	return (CEx11dDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEx11dView Nachrichten-Handler
