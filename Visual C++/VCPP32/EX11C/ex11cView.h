// ex11cView.h : Schnittstelle der Klasse CEx11cView
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_EX11CVIEW_H__2EFAF7BE_40C5_11D2_A4E4_00403394CA84__INCLUDED_)
#define AFX_EX11CVIEW_H__2EFAF7BE_40C5_11D2_A4E4_00403394CA84__INCLUDED_

#include "cdib.h"	// Hinzugefügt von der Klassenansicht
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CEx11cView : public CScrollView
{
protected: // Nur aus Serialisierung erzeugen
	CEx11cView();
	DECLARE_DYNCREATE(CEx11cView)

// Attribute
public:
	CEx11cDoc* GetDocument();

// Operationen
public:

// Überladungen
	// Vom Klassenassistenten generierte Überladungen virtueller Funktionen
	//{{AFX_VIRTUAL(CEx11cView)
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
	virtual ~CEx11cView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generierte Message-Map-Funktionen
protected:
	//{{AFX_MSG(CEx11cView)
		afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	CDib m_dibFile;
	CDib m_dibResource;
};

#ifndef _DEBUG  // Testversion in ex11cView.cpp
inline CEx11cDoc* CEx11cView::GetDocument()
   { return (CEx11cDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ fügt unmittelbar vor der vorhergehenden Zeile zusätzliche Deklarationen ein.

#endif // !defined(AFX_EX11CVIEW_H__2EFAF7BE_40C5_11D2_A4E4_00403394CA84__INCLUDED_)
