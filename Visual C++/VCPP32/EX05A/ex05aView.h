// ex05aView.h : Schnittstelle der Klasse CEx05aView
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_EX05AVIEW_H__B6485BAC_BC08_11D0_A42B_444553540000__INCLUDED_)
#define AFX_EX05AVIEW_H__B6485BAC_BC08_11D0_A42B_444553540000__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

class CEx05aView : public CView
{
protected: // Nur aus Serialisierung erzeugen
	CEx05aView();
	DECLARE_DYNCREATE(CEx05aView)

// Attribute
public:
	CEx05aDoc* GetDocument();

// Operationen
public:

// Überladungen
	// Vom Klassenassistenten generierte Überladungen virtueller Funktionen
	//{{AFX_VIRTUAL(CEx05aView)
	public:
	virtual void OnDraw(CDC* pDC);  // überladen zum Zeichnen dieser Ansicht
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	virtual void OnPrepareDC(CDC* pDC, CPrintInfo* pInfo = NULL);
	//}}AFX_VIRTUAL

// Implementierung
public:
	virtual ~CEx05aView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

private:
	void ShowFont(CDC* pDC, int& nPos, int nPoints);

// Generierte Message-Map-Funktionen
protected:
	//{{AFX_MSG(CEx05aView)
		// HINWEIS - An dieser Stelle werden Member-Funktionen vom Klassen-Assistenten eingefügt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VERÄNDERN!
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Testversion in ex05aView.cpp
inline CEx05aDoc* CEx05aView::GetDocument()
   { return (CEx05aDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio fügt zusätzliche Deklarationen unmittelbar vor der vorhergehenden Zeile ein.

#endif // !defined(AFX_EX05AVIEW_H__B6485BAC_BC08_11D0_A42B_444553540000__INCLUDED_)
