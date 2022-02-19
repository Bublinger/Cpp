// ex05cView.cpp : Implementierung der Klasse CEx05cView
//

#include "stdafx.h"
#include "ex05c.h"

#include "ex05cDoc.h"
#include "ex05cView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEx05cView

IMPLEMENT_DYNCREATE(CEx05cView, CScrollView)

BEGIN_MESSAGE_MAP(CEx05cView, CScrollView)
	//{{AFX_MSG_MAP(CEx05cView)
	ON_WM_LBUTTONDOWN()
	ON_WM_LBUTTONUP()
	ON_WM_MOUSEMOVE()
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEx05cView Konstruktion/Destruktion

CEx05cView::CEx05cView(): m_sizeEllipse(100, -100),
                          m_pointTopLeft(0, 0),
                          m_sizeOffset(0, 0)
{
    m_bCaptured = FALSE;
}

CEx05cView::~CEx05cView()
{
}

BOOL CEx05cView::PreCreateWindow(CREATESTRUCT& cs)
{
	// ZU ERLEDIGEN: ƒndern Sie hier die Fensterklasse oder das Erscheinungsbild, indem Sie
	//  CREATESTRUCT cs modifizieren.

	return CScrollView::PreCreateWindow(cs);
}

/////////////////////////////////////////////////////////////////////////////
// CEx05cView Zeichnen

void CEx05cView::OnDraw(CDC* pDC)
{
    CBrush brushHatch(HS_DIAGCROSS, RGB(255, 0, 0));
    CPoint point(0, 0);                  // logische Koordinaten (0, 0)

    pDC->LPtoDP(&point);                 // Ger‰tekoordinaten,
    pDC->SetBrushOrg(point);             // Pinsel am Fensterursprung 
                                         // ausrichten
    pDC->SelectObject(&brushHatch);
    pDC->Ellipse(CRect(m_pointTopLeft, m_sizeEllipse));
    pDC->SelectStockObject(BLACK_BRUSH); // Auswahl von brushHatch aufheben
    pDC->Rectangle(CRect(100, -100, 200, -200)); // ung¸ltiges Rechteck testen
}

void CEx05cView::OnInitialUpdate()
{
	CScrollView::OnInitialUpdate();

    CSize sizeTotal(800, 1050); // 8 mal 10.5 Zoll
    CSize sizePage(sizeTotal.cx / 2, sizeTotal.cy / 2);
    CSize sizeLine(sizeTotal.cx / 50, sizeTotal.cy / 50);
    SetScrollSizes(MM_LOENGLISH, sizeTotal, sizePage, sizeLine); 
}

/////////////////////////////////////////////////////////////////////////////
// CEx05cView Diagnose

#ifdef _DEBUG
void CEx05cView::AssertValid() const
{
	CScrollView::AssertValid();
}

void CEx05cView::Dump(CDumpContext& dc) const
{
	CScrollView::Dump(dc);
}

CEx05cDoc* CEx05cView::GetDocument() // Die endg¸ltige (nicht zur Fehlersuche kompilierte) Version ist Inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CEx05cDoc)));
	return (CEx05cDoc*)m_pDocument;
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEx05cView Nachrichten-Handler

void CEx05cView::OnLButtonDown(UINT nFlags, CPoint point) 
{
    CRect rectEllipse(m_pointTopLeft, m_sizeEllipse); // noch logische Koordinaten
    CRgn  circle;

    CClientDC dc(this);
    OnPrepareDC(&dc);
    dc.LPtoDP(rectEllipse); // jetzt Ger‰tekoordinaten
    circle.CreateEllipticRgnIndirect(rectEllipse);
    if (circle.PtInRegion(point)) {
        // Einfangen der Maus garantiert, daﬂ LButtonUp-Nachricht folgt
        SetCapture();
        m_bCaptured = TRUE;
        CPoint pointTopLeft(m_pointTopLeft);
        dc.LPtoDP(&pointTopLeft);
        m_sizeOffset = point - pointTopLeft; // Ger‰tekoordinaten
        // Neuer Mauszeiger ist aktiv, w‰hrend die Maus gefangen ist
        ::SetCursor(::LoadCursor(NULL, IDC_CROSS));
    }
}

void CEx05cView::OnLButtonUp(UINT nFlags, CPoint point) 
{
    if (m_bCaptured) {
        ::ReleaseCapture();
        m_bCaptured = FALSE;
    }
}

void CEx05cView::OnMouseMove(UINT nFlags, CPoint point) 
{
    if (m_bCaptured) {
        CClientDC dc(this);
        OnPrepareDC(&dc);
        CRect rectOld(m_pointTopLeft, m_sizeEllipse);
        dc.LPtoDP(rectOld);
        InvalidateRect(rectOld, TRUE);
        m_pointTopLeft = point - m_sizeOffset;
        dc.DPtoLP(&m_pointTopLeft);
        CRect rectNew(m_pointTopLeft, m_sizeEllipse);
        dc.LPtoDP(rectNew);
        InvalidateRect(rectNew, TRUE);
    }
}
