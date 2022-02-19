// ex11cView.cpp : Implementierung der Klasse CEx11cView
//

#include "stdafx.h"
#include "ex11c.h"

#include "ex11cDoc.h"
#include "ex11cView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEx11cView

IMPLEMENT_DYNCREATE(CEx11cView, CScrollView)

BEGIN_MESSAGE_MAP(CEx11cView, CScrollView)
	//{{AFX_MSG_MAP(CEx11cView)
	ON_WM_LBUTTONDOWN()
	//}}AFX_MSG_MAP
	// Standard-Druckbefehle
	ON_COMMAND(ID_FILE_PRINT, CScrollView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, CScrollView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, CScrollView::OnFilePrintPreview)
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEx11cView Konstruktion/Destruktion

CEx11cView::CEx11cView()
{
	// ZU ERLEDIGEN: Hier Code zur Konstruktion einfügen,

}

CEx11cView::~CEx11cView()
{
}

BOOL CEx11cView::PreCreateWindow(CREATESTRUCT& cs)
{
	// ZU ERLEDIGEN: Ändern Sie hier die Fensterklasse oder das Erscheinungsbild, indem Sie
	//  CREATESTRUCT cs modifizieren.

	return CScrollView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CEx11cView Zeichnen

void CEx11cView::OnDraw(CDC* pDC)
{
    BeginWaitCursor();
    m_dibResource.UsePalette(pDC); //  sollte eigentlich nicht hier
    m_dibFile.UsePalette(pDC);     //  geschehen, sondern in den
                 //  Behandlungsroutinen für die Palettennachrichten
    pDC->TextOut(0, 0, 
        "Klicken Sie die linke Maustaste, um eine Datei zu laden.");
    CSize sizeResourceDib = m_dibResource.GetDimensions();
    sizeResourceDib.cx *= 30;
    sizeResourceDib.cy *= -30;
    m_dibResource.Draw(pDC, CPoint(0, -800), sizeResourceDib);
    CSize sizeFileDib = m_dibFile.GetDimensions();
    sizeFileDib.cx *= 30;
    sizeFileDib.cy *= -30;
    m_dibFile.Draw(pDC, CPoint(1800, -800), sizeFileDib);
    EndWaitCursor();
}

void CEx11cView::OnInitialUpdate()
{
    CScrollView::OnInitialUpdate();
    CSize sizeTotal(30000, 40000); // 30 mal 40 cm
    CSize sizeLine = CSize(sizeTotal.cx / 100, sizeTotal.cy / 100);
    SetScrollSizes(MM_HIMETRIC, sizeTotal, sizeTotal, sizeLine);

    LPVOID lpvResource = (LPVOID) ::LoadResource(NULL,
        ::FindResource(NULL, MAKEINTRESOURCE(IDB_REDBLOCKS),
        RT_BITMAP));
    m_dibResource.AttachMemory(lpvResource); // ::LockResource 
                                             // nicht erforderlich
    CClientDC dc(this);
    TRACE("Bits pro Pixel = %d\n", dc.GetDeviceCaps(BITSPIXEL));
}

/////////////////////////////////////////////////////////////////////////////
// CEx11cView Drucken

BOOL CEx11cView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Standardvorbereitung
	return DoPreparePrinting(pInfo);
}

void CEx11cView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// ZU ERLEDIGEN: Zusätzliche Initialisierung vor dem Drucken hier einfügen
}

void CEx11cView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// ZU ERLEDIGEN: Hier Bereinigungsarbeiten nach dem Drucken einfügen
}

/////////////////////////////////////////////////////////////////////////////
// CEx11cView Diagnose

#ifdef _DEBUG
void CEx11cView::AssertValid() const
{
	CScrollView::AssertValid();
}

void CEx11cView::Dump(CDumpContext& dc) const
{
	CScrollView::Dump(dc);
}

CEx11cDoc* CEx11cView::GetDocument() // Die endgültige (nicht zur Fehlersuche kompilierte) Version ist Inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEx11cDoc)));
	return (CEx11cDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEx11cView Nachrichten-Handler

#define MEMORY_MAPPED_FILES
void CEx11cView::OnLButtonDown(UINT nFlags, CPoint point) 
{
    CFileDialog dlg(TRUE, "bmp", "*.bmp");
    if (dlg.DoModal() != IDOK) {
        return;
    }
#ifdef MEMORY_MAPPED_FILES
    if (m_dibFile.AttachMapFile(dlg.GetPathName(),
            TRUE) == TRUE) { // gemeinsamer Zugriff
        Invalidate();
    }
#else
    CFile file;
    file.Open(dlg.GetPathName(), CFile::modeRead);
    if (m_dibFile.Read(&file) == TRUE) {
        Invalidate();
    }
#endif // MEMORY_MAPPED_FILES
    CClientDC dc(this);
    m_dibFile.SetSystemPalette(&dc);
}
