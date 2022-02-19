// ex06aView.h : Schnittstelle der Klasse CEx06aView
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_EX06AVIEW_H__FC361A6C_D4CE_11D0_A68E_00009290A263__INCLUDED_)
#define AFX_EX06AVIEW_H__FC361A6C_D4CE_11D0_A68E_00009290A263__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

class CEx06aView : public CView
{
protected: // Nur aus Serialisierung erzeugen
	CEx06aView();
	DECLARE_DYNCREATE(CEx06aView)

// Attribute
public:
	CEx06aDoc* GetDocument();

// Operationen
public:

// Überladungen
	// Vom Klassenassistenten generierte Überladungen virtueller Funktionen
	//{{AFX_VIRTUAL(CEx06aView)
	public:
	virtual void OnDraw(CDC* pDC);  // überladen zum Zeichnen dieser Ansicht
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementierung
public:
	virtual ~CEx06aView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generierte Message-Map-Funktionen
protected:
	//{{AFX_MSG(CEx06aView)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Testversion in ex06aView.cpp
inline CEx06aDoc* CEx06aView::GetDocument()
   { return (CEx06aDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio fügt zusätzliche Deklarationen unmittelbar vor der vorhergehenden Zeile ein.

#endif // !defined(AFX_EX06AVIEW_H__FC361A6C_D4CE_11D0_A68E_00009290A263__INCLUDED_)
