// ex11aView.cpp : Implementierung der Klasse CEx11aView
//

#include "stdafx.h"
#include "ex11a.h"

#include "ex11aDoc.h"
#include "ex11aView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEx11aView

IMPLEMENT_DYNCREATE(CEx11aView, CScrollView)

BEGIN_MESSAGE_MAP(CEx11aView, CScrollView)
	//{{AFX_MSG_MAP(CEx11aView)
		// HINWEIS - Hier werden Mapping-Makros vom Klassen-Assistenten eingefügt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VERÄNDERN!
	//}}AFX_MSG_MAP
	// Standard-Druckbefehle
	ON_COMMAND(ID_FILE_PRINT, CScrollView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CScrollView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CScrollView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEx11aView Konstruktion/Destruktion

CEx11aView::CEx11aView()
{
   m_pdcMemory = new CDC;
   m_pBitmap = new CBitmap;

}

CEx11aView::~CEx11aView()
{
    // räumt Speicher-Gerätekontext und Bitmap auf
    delete m_pdcMemory; // hebt Auswahl des Bitmap auf
    delete m_pBitmap;
}

BOOL CEx11aView::PreCreateWindow(CREATESTRUCT& cs)
{
	// ZU ERLEDIGEN: Ändern Sie hier die Fensterklasse oder das Erscheinungsbild, indem Sie
	//  CREATESTRUCT cs modifizieren.

	return CScrollView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CEx11aView Zeichnen

void CEx11aView::OnDraw(CDC* pDC)
{
    pDC->SetStretchBltMode(COLORONCOLOR);
    pDC->StretchBlt(20, -20, m_sizeDest.cx, -m_sizeDest.cy,
        m_pdcMemory, 0, 0,
        m_sizeSource.cx, m_sizeSource.cy, SRCCOPY);

    pDC->StretchBlt(350, -20, m_sizeSource.cx, -m_sizeSource.cy,
        m_pdcMemory, 0, 0,
        m_sizeSource.cx, m_sizeSource.cy, SRCCOPY);
}

void CEx11aView::OnInitialUpdate()
{
	CScrollView::OnInitialUpdate();
    CSize sizeTotal(800, 1050); // 8 mal 10.5 Zoll
    CSize sizeLine = CSize(sizeTotal.cx / 100, sizeTotal.cy / 100);
    SetScrollSizes(MM_LOENGLISH, sizeTotal, sizeTotal, sizeLine);

    BITMAP bm; // Windows-Datenstruktur. Siehe Online-Hilfe zu Win32
    if (m_pdcMemory->GetSafeHdc() == NULL) {
        CClientDC dc(this);
        OnPrepareDC(&dc); // notwendig
        m_pBitmap->LoadBitmap(IDB_GOLDWEAVE);
        m_pdcMemory->CreateCompatibleDC(&dc);
        m_pdcMemory->SelectObject(m_pBitmap);
        m_pBitmap->GetObject(sizeof(bm), &bm);
        m_sizeSource.cx = bm.bmWidth;
        m_sizeSource.cy = bm.bmHeight;
        m_sizeDest = m_sizeSource;
        dc.DPtoLP(&m_sizeDest);
    }
}

/////////////////////////////////////////////////////////////////////////////
// CEx11aView Drucken

BOOL CEx11aView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Standardvorbereitung
	return DoPreparePrinting(pInfo);
}

void CEx11aView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// ZU ERLEDIGEN: Zusätzliche Initialisierung vor dem Drucken hier einfügen
}

void CEx11aView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// ZU ERLEDIGEN: Hier Bereinigungsarbeiten nach dem Drucken einfügen
}

/////////////////////////////////////////////////////////////////////////////
// CEx11aView Diagnose

#ifdef _DEBUG
void CEx11aView::AssertValid() const
{
	CScrollView::AssertValid();
}

void CEx11aView::Dump(CDumpContext& dc) const
{
	CScrollView::Dump(dc);
}

CEx11aDoc* CEx11aView::GetDocument() // Die endgültige (nicht zur Fehlersuche kompilierte) Version ist Inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEx11aDoc)));
	return (CEx11aDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEx11aView Nachrichten-Handler
