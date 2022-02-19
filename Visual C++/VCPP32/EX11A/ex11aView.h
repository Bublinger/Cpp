// ex11aView.h : Schnittstelle der Klasse CEx11aView
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_EX11AVIEW_H__C28C441F_401C_11D2_A4E4_00403394CA84__INCLUDED_)
#define AFX_EX11AVIEW_H__C28C441F_401C_11D2_A4E4_00403394CA84__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CEx11aView : public CScrollView
{
private:
	CSize m_sizeDest;
	CSize m_sizeSource;
	CBitmap* m_pBitmap;
	CDC* m_pdcMemory;
protected: // Nur aus Serialisierung erzeugen
	CEx11aView();
	DECLARE_DYNCREATE(CEx11aView)

// Attribute
public:
	CEx11aDoc* GetDocument();

// Operationen
public:

// Überladungen
	// Vom Klassenassistenten generierte Überladungen virtueller Funktionen
	//{{AFX_VIRTUAL(CEx11aView)
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
	virtual ~CEx11aView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generierte Message-Map-Funktionen
protected:
	//{{AFX_MSG(CEx11aView)
		// HINWEIS - An dieser Stelle werden Member-Funktionen vom Klassen-Assistenten eingefügt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VERÄNDERN!
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

};

#ifndef _DEBUG  // Testversion in ex11aView.cpp
inline CEx11aDoc* CEx11aView::GetDocument()
   { return (CEx11aDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ fügt unmittelbar vor der vorhergehenden Zeile zusätzliche Deklarationen ein.

#endif // !defined(AFX_EX11AVIEW_H__C28C441F_401C_11D2_A4E4_00403394CA84__INCLUDED_)
