// ex08aView.h : Schnittstelle der Klasse CEx08aView
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_EX08AVIEW_H__659ED86D_3F78_11D2_A4E4_00403394CA84__INCLUDED_)
#define AFX_EX08AVIEW_H__659ED86D_3F78_11D2_A4E4_00403394CA84__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CEx08aView : public CView
{
protected: // Nur aus Serialisierung erzeugen
	CEx08aView();
	DECLARE_DYNCREATE(CEx08aView)

// Attribute
public:
	CEx08aDoc* GetDocument();

// Operationen
public:

// Überladungen
	// Vom Klassenassistenten generierte Überladungen virtueller Funktionen
	//{{AFX_VIRTUAL(CEx08aView)
	public:
	virtual void OnDraw(CDC* pDC);  // überladen zum Zeichnen dieser Ansicht
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementierung
public:
	virtual ~CEx08aView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generierte Message-Map-Funktionen
protected:
	//{{AFX_MSG(CEx08aView)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Testversion in ex08aView.cpp
inline CEx08aDoc* CEx08aView::GetDocument()
   { return (CEx08aDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ fügt unmittelbar vor der vorhergehenden Zeile zusätzliche Deklarationen ein.

#endif // !defined(AFX_EX08AVIEW_H__659ED86D_3F78_11D2_A4E4_00403394CA84__INCLUDED_)
