// ex05cView.h : Schnittstelle der Klasse CEx05cView
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_EX05CVIEW_H__B6485BE2_BC08_11D0_A42B_444553540000__INCLUDED_)
#define AFX_EX05CVIEW_H__B6485BE2_BC08_11D0_A42B_444553540000__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

class CEx05cView : public CScrollView
{
private:
    const CSize m_sizeEllipse; // logische Koordinaten
    CPoint m_pointTopLeft; // logische Koordinaten, obere linke Ecke
						   // des die Ellipse umgebenden Rechtecks
    CSize  m_sizeOffset;   // Gerätekoordinaten, obere linke Ecke bis Mausklick
    BOOL   m_bCaptured;

protected: // Nur aus Serialisierung erzeugen
	CEx05cView();
	DECLARE_DYNCREATE(CEx05cView)

// Attribute
public:
	CEx05cDoc* GetDocument();

// Operationen
public:

// Überladungen
	// Vom Klassenassistenten generierte Überladungen virtueller Funktionen
	//{{AFX_VIRTUAL(CEx05cView)
	public:
	virtual void OnDraw(CDC* pDC);  // überladen zum Zeichnen dieser Ansicht
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void OnInitialUpdate(); // das erste mal nach der Konstruktion aufgerufen
	//}}AFX_VIRTUAL

// Implementierung
public:
	virtual ~CEx05cView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generierte Message-Map-Funktionen
protected:
	//{{AFX_MSG(CEx05cView)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Testversion in ex05cView.cpp
inline CEx05cDoc* CEx05cView::GetDocument()
   { return (CEx05cDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio fügt zusätzliche Deklarationen unmittelbar vor der vorhergehenden Zeile ein.

#endif // !defined(AFX_EX05CVIEW_H__B6485BE2_BC08_11D0_A42B_444553540000__INCLUDED_)
