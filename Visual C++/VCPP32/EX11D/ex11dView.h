// ex11dView.h : Schnittstelle der Klasse CEx11dView
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_EX11DVIEW_H__C8A7A82B_40FD_11D2_A4E4_00403394CA84__INCLUDED_)
#define AFX_EX11DVIEW_H__C8A7A82B_40FD_11D2_A4E4_00403394CA84__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CEx11dView : public CView
{
protected: // Nur aus Serialisierung erzeugen
	CEx11dView();
	DECLARE_DYNCREATE(CEx11dView)

// Attribute
public:
	CEx11dDoc* GetDocument();

// Operationen
public:

// Überladungen
	// Vom Klassenassistenten generierte Überladungen virtueller Funktionen
	//{{AFX_VIRTUAL(CEx11dView)
	public:
	virtual void OnDraw(CDC* pDC);  // überladen zum Zeichnen dieser Ansicht
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementierung
public:
	virtual ~CEx11dView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generierte Message-Map-Funktionen
protected:
	//{{AFX_MSG(CEx11dView)
		// HINWEIS - An dieser Stelle werden Member-Funktionen vom Klassen-Assistenten eingefügt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VERÄNDERN!
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // Testversion in ex11dView.cpp
inline CEx11dDoc* CEx11dView::GetDocument()
   { return (CEx11dDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ fügt unmittelbar vor der vorhergehenden Zeile zusätzliche Deklarationen ein.

#endif // !defined(AFX_EX11DVIEW_H__C8A7A82B_40FD_11D2_A4E4_00403394CA84__INCLUDED_)
