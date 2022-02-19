// ex05bView.h : Schnittstelle der Klasse CEx05bView
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_EX05BVIEW_H__B6485BBE_BC08_11D0_A42B_444553540000__INCLUDED_)
#define AFX_EX05BVIEW_H__B6485BBE_BC08_11D0_A42B_444553540000__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

class CEx05bView : public CView
{
protected: // Nur aus Serialisierung erzeugen
	CEx05bView();
	DECLARE_DYNCREATE(CEx05bView)

// Attribute
public:
	CEx05bDoc* GetDocument();

// Operationen
public:

// Überladungen
	// Vom Klassenassistenten generierte Überladungen virtueller Funktionen
	//{{AFX_VIRTUAL(CEx05bView)
	public:
	virtual void OnDraw(CDC* pDC);  // überladen zum Zeichnen dieser Ansicht
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual void OnPrepareDC(CDC* pDC, CPrintInfo* pInfo = NULL);
	//}}AFX_VIRTUAL

// Implementierung
public:
	virtual ~CEx05bView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

private:
    void TraceMetrics(CDC* pDC);


// Generierte Message-Map-Funktionen
protected:
	//{{AFX_MSG(CEx05bView)
		// HINWEIS - An dieser Stelle werden Member-Funktionen vom Klassen-Assistenten eingefügt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VERÄNDERN!
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Testversion in ex05bView.cpp
inline CEx05bDoc* CEx05bView::GetDocument()
   { return (CEx05bDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio fügt zusätzliche Deklarationen unmittelbar vor der vorhergehenden Zeile ein.

#endif // !defined(AFX_EX05BVIEW_H__B6485BBE_BC08_11D0_A42B_444553540000__INCLUDED_)
