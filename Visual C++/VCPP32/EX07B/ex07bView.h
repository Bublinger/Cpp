// ex07bView.h : Schnittstelle der Klasse CEx07bView
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_EX07BVIEW_H__C9B91B4C_D871_11D0_A68E_00009290A263__INCLUDED_)
#define AFX_EX07BVIEW_H__C9B91B4C_D871_11D0_A68E_00009290A263__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

class CEx07bView : public CView
{
protected: // Nur aus Serialisierung erzeugen
	CEx07bView();
	DECLARE_DYNCREATE(CEx07bView)

// Attribute
public:
	CEx07bDoc* GetDocument();

// Operationen
public:

// Überladungen
	// Vom Klassenassistenten generierte Überladungen virtueller Funktionen
	//{{AFX_VIRTUAL(CEx07bView)
	public:
	virtual void OnDraw(CDC* pDC);  // überladen zum Zeichnen dieser Ansicht
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementierung
public:
	virtual ~CEx07bView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generierte Message-Map-Funktionen
protected:
	//{{AFX_MSG(CEx07bView)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Testversion in ex07bView.cpp
inline CEx07bDoc* CEx07bView::GetDocument()
   { return (CEx07bDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio fügt zusätzliche Deklarationen unmittelbar vor der vorhergehenden Zeile ein.

#endif // !defined(AFX_EX07BVIEW_H__C9B91B4C_D871_11D0_A68E_00009290A263__INCLUDED_)
