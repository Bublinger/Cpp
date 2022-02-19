// ex06bView.h : Schnittstelle der Klasse CEx06bView
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_EX06BVIEW_H__6F45AD99_561B_11D0_8FCF_00C04FC2A0C2__INCLUDED_)
#define AFX_EX06BVIEW_H__6F45AD99_561B_11D0_8FCF_00C04FC2A0C2__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

class CEx06bView : public CView
{
protected: // Nur aus Serialisierung erzeugen
	CEx06bView();
	DECLARE_DYNCREATE(CEx06bView)

// Attribute
public:
	CEx06bDoc* GetDocument();

// Operationen
public:

// Überladungen
	// Vom Klassenassistenten generierte Überladungen virtueller Funktionen
	//{{AFX_VIRTUAL(CEx06bView)
	public:
	virtual void OnDraw(CDC* pDC);  // überladen zum Zeichnen dieser Ansicht
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementierung
public:
	virtual ~CEx06bView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated Message-Map-Funktionen
protected:
	//{{AFX_MSG(CEx06bView)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Testversion in ex06bView.cpp
inline CEx06bDoc* CEx06bView::GetDocument()
   { return (CEx06bDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio fügt zusätzliche Deklarationen unmittelbar vor der vorhergehenden Zeile ein.

#endif // !defined(AFX_EX06BVIEW_H__6F45AD99_561B_11D0_8FCF_00C04FC2A0C2__INCLUDED_)
