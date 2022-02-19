// ex04aView.h : Schnittstelle der Klasse CEx04aView
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_EX04AVIEW_H__C9F80CCC_D352_11D0_A68E_00009290A263__INCLUDED_)
#define AFX_EX04AVIEW_H__C9F80CCC_D352_11D0_A68E_00009290A263__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

class CEx04aView : public CView
{
protected: // Nur aus Serialisierung erzeugen
	CEx04aView();
	DECLARE_DYNCREATE(CEx04aView)

// Attribute
public:
	CEx04aDoc* GetDocument();

// Operationen
public:

// Überladungen
	// Vom Klassenassistenten generierte Überladungen virtueller Funktionen
	//{{AFX_VIRTUAL(CEx04aView)
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
	virtual ~CEx04aView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generierte Message-Map-Funktionen
protected:
	//{{AFX_MSG(CEx04aView)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	CRect m_rectEllipse;
	int m_nColor;
};

#ifndef _DEBUG  // Testversion in ex04aView.cpp
inline CEx04aDoc* CEx04aView::GetDocument()
   { return (CEx04aDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio fügt zusätzliche Deklarationen unmittelbar vor der vorhergehenden Zeile ein.

#endif // !defined(AFX_EX04AVIEW_H__C9F80CCC_D352_11D0_A68E_00009290A263__INCLUDED_)
