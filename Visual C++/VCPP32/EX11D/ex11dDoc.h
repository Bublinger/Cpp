// ex11dDoc.h : Schnittstelle der Klasse CEx11dDoc
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_EX11DDOC_H__C8A7A829_40FD_11D2_A4E4_00403394CA84__INCLUDED_)
#define AFX_EX11DDOC_H__C8A7A829_40FD_11D2_A4E4_00403394CA84__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CEx11dDoc : public CDocument
{
protected: // Nur aus Serialisierung erzeugen
	CEx11dDoc();
	DECLARE_DYNCREATE(CEx11dDoc)

// Attribute
public:

// Operationen
public:

// Überladungen
	// Vom Klassenassistenten generierte Überladungen virtueller Funktionen
	//{{AFX_VIRTUAL(CEx11dDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementierung
public:
	virtual ~CEx11dDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generierte Message-Map-Funktionen
protected:
	//{{AFX_MSG(CEx11dDoc)
		// HINWEIS - An dieser Stelle werden Member-Funktionen vom Klassen-Assistenten eingefügt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VERÄNDERN!
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ fügt unmittelbar vor der vorhergehenden Zeile zusätzliche Deklarationen ein.

#endif // !defined(AFX_EX11DDOC_H__C8A7A829_40FD_11D2_A4E4_00403394CA84__INCLUDED_)
