// ex11bView.h : Schnittstelle der Klasse CEx11bView
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_EX11BVIEW_H__2EFAF7AC_40C5_11D2_A4E4_00403394CA84__INCLUDED_)
#define AFX_EX11BVIEW_H__2EFAF7AC_40C5_11D2_A4E4_00403394CA84__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CEx11bView : public CScrollView
{
protected: // Nur aus Serialisierung erzeugen
	CEx11bView();
	DECLARE_DYNCREATE(CEx11bView)


	// Attribute
public:
	CEx11bDoc* GetDocument();

// Operationen
public:

// Überladungen
	// Vom Klassenassistenten generierte Überladungen virtueller Funktionen
	//{{AFX_VIRTUAL(CEx11bView)
	public:
	virtual void OnDraw(CDC* pDC);  // überladen zum Zeichnen dieser Ansicht
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual void OnInitialUpdate(); // das erste mal nach der Konstruktion aufgerufen
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementierung
public:
	virtual ~CEx11bView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

private:
    const CSize m_sizeEllipse;
    CPoint   m_pointTopLeft;
    BOOL     m_bCaptured;
    CSize    m_sizeOffset;
    CDC*     m_pdcMemory;
    CBitmap* m_pBitmap;

	// Generierte Message-Map-Funktionen
protected:
	//{{AFX_MSG(CEx11bView)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnPaint();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Testversion in ex11bView.cpp
inline CEx11bDoc* CEx11bView::GetDocument()
   { return (CEx11bDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ fügt unmittelbar vor der vorhergehenden Zeile zusätzliche Deklarationen ein.

#endif // !defined(AFX_EX11BVIEW_H__2EFAF7AC_40C5_11D2_A4E4_00403394CA84__INCLUDED_)
