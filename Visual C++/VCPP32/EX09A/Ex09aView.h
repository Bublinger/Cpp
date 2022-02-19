// Ex09aView.h : Schnittstelle der Klasse CEx09aView
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_EX09AVIEW_H__61CB9EF2_2F96_11D2_A4E4_00403394CA84__INCLUDED_)
#define AFX_EX09AVIEW_H__61CB9EF2_2F96_11D2_A4E4_00403394CA84__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CEx09aView : public CView
{
protected: // Nur aus Serialisierung erzeugen
	CEx09aView();
	DECLARE_DYNCREATE(CEx09aView)

// Attribute
public:
	CEx09aDoc* GetDocument();

// Operationen
public:

// Überladungen
	// Vom Klassenassistenten generierte Überladungen virtueller Funktionen
	//{{AFX_VIRTUAL(CEx09aView)
	public:
	virtual void OnDraw(CDC* pDC);  // überladen zum Zeichnen dieser Ansicht
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);
	//}}AFX_VIRTUAL

// Implementierung
public:
	virtual ~CEx09aView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generierte Message-Map-Funktionen
protected:
	//{{AFX_MSG(CEx09aView)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Testversion in Ex09aView.cpp
inline CEx09aDoc* CEx09aView::GetDocument()
   { return (CEx09aDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ fügt unmittelbar vor der vorhergehenden Zeile zusätzliche Deklarationen ein.

#endif // !defined(AFX_EX09AVIEW_H__61CB9EF2_2F96_11D2_A4E4_00403394CA84__INCLUDED_)
