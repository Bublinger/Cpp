// ex07aView.h : Schnittstelle der Klasse CEx07aView
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_EX07AVIEW_H__BF8B424C_EBBF_11D0_A68E_00009290A263__INCLUDED_)
#define AFX_EX07AVIEW_H__BF8B424C_EBBF_11D0_A68E_00009290A263__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

class CEx07aDialog;

class CEx07aView : public CView
{
private:
	CEx07aDialog* m_pDlg;
protected: // Nur aus Serialisierung erzeugen
	CEx07aView();
	DECLARE_DYNCREATE(CEx07aView)

// Attribute
public:
	CEx07aDoc* GetDocument();

// Operationen
public:

// Überladungen
	// Vom Klassenassistenten generierte Überladungen virtueller Funktionen
	//{{AFX_VIRTUAL(CEx07aView)
	public:
	virtual void OnDraw(CDC* pDC);  // überladen zum Zeichnen dieser Ansicht
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementierung
public:
	virtual ~CEx07aView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generierte Message-Map-Funktionen
protected:
	//{{AFX_MSG(CEx07aView)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	afx_msg LRESULT OnGoodbye(WPARAM wParam, LPARAM lParam);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Testversion in ex07aView.cpp
inline CEx07aDoc* CEx07aView::GetDocument()
   { return (CEx07aDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio fügt zusätzliche Deklarationen unmittelbar vor der vorhergehenden Zeile ein.

#endif // !defined(AFX_EX07AVIEW_H__BF8B424C_EBBF_11D0_A68E_00009290A263__INCLUDED_)
