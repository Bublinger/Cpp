// ex12aView.h : Schnittstelle der Klasse CEx12aView
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_EX12AVIEW_H__C8A7A858_40FD_11D2_A4E4_00403394CA84__INCLUDED_)
#define AFX_EX12AVIEW_H__C8A7A858_40FD_11D2_A4E4_00403394CA84__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CEx12aView : public CView
{
protected: // Nur aus Serialisierung erzeugen
	CEx12aView();
	DECLARE_DYNCREATE(CEx12aView)

// Attribute
public:
	CEx12aDoc* GetDocument();

// Operationen
public:

// Überladungen
	// Vom Klassenassistenten generierte Überladungen virtueller Funktionen
	//{{AFX_VIRTUAL(CEx12aView)
	public:
	virtual void OnDraw(CDC* pDC);  // überladen zum Zeichnen dieser Ansicht
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementierung
public:
	virtual ~CEx12aView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generierte Message-Map-Funktionen
protected:
	//{{AFX_MSG(CEx12aView)
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Testversion in ex12aView.cpp
inline CEx12aDoc* CEx12aView::GetDocument()
   { return (CEx12aDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ fügt unmittelbar vor der vorhergehenden Zeile zusätzliche Deklarationen ein.

#endif // !defined(AFX_EX12AVIEW_H__C8A7A858_40FD_11D2_A4E4_00403394CA84__INCLUDED_)
