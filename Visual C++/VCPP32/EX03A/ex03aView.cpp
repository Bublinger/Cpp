// ex03aView.cpp : Implementierung der Klasse CEx03aView
//

#include "stdafx.h"
#include "ex03a.h"

#include "ex03aDoc.h"
#include "ex03aView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEx03aView

IMPLEMENT_DYNCREATE(CEx03aView, CView)

BEGIN_MESSAGE_MAP(CEx03aView, CView)
	//{{AFX_MSG_MAP(CEx03aView)
		// HINWEIS - Hier werden Mapping-Makros vom Klassen-Assistenten eingefügt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VERÄNDERN!
	//}}AFX_MSG_MAP
	// Standard-Druckbefehle
	ON_COMMAND(ID_FILE_PRINT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEx03aView Konstruktion/Destruktion

CEx03aView::CEx03aView()
{
	// ZU ERLEDIGEN: Hier Code zur Konstruktion einfügen,

}

CEx03aView::~CEx03aView()
{
}

BOOL CEx03aView::PreCreateWindow(CREATESTRUCT& cs)
{
	// ZU ERLEDIGEN: Ändern Sie hier die Fensterklasse oder das Erscheinungsbild, indem Sie
	//  CREATESTRUCT cs modifizieren.

	return CView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CEx03aView Zeichnen

void CEx03aView::OnDraw(CDC* pDC)
{
	CEx03aDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	// ZU ERLEDIGEN: Hier Code zum Zeichnen der ursprünglichen Daten hinzufügen
}

/////////////////////////////////////////////////////////////////////////////
// CEx03aView Drucken

BOOL CEx03aView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Standardvorbereitung
	return DoPreparePrinting(pInfo);
}

void CEx03aView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// ZU ERLEDIGEN: Zusätzliche Initialisierung vor dem Drucken hier einfügen
}

void CEx03aView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// ZU ERLEDIGEN: Hier Bereinigungsarbeiten nach dem Drucken einfügen
}

/////////////////////////////////////////////////////////////////////////////
// CEx03aView Diagnose

#ifdef _DEBUG
void CEx03aView::AssertValid() const
{
	CView::AssertValid();
}

void CEx03aView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CEx03aDoc* CEx03aView::GetDocument() // Die endgültige (nicht zur Fehlersuche kompilierte) Version ist Inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEx03aDoc)));
	return (CEx03aDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEx03aView Nachrichten-Handler
