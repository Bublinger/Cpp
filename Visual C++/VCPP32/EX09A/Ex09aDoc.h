// Ex09aDoc.h : Schnittstelle der Klasse CEx09aDoc
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_EX09ADOC_H__61CB9EF0_2F96_11D2_A4E4_00403394CA84__INCLUDED_)
#define AFX_EX09ADOC_H__61CB9EF0_2F96_11D2_A4E4_00403394CA84__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CEx09aDoc : public CDocument
{
protected: // Nur aus Serialisierung erzeugen
	CEx09aDoc();
	DECLARE_DYNCREATE(CEx09aDoc)

// Attribute
public:

// Operationen
public:

// Überladungen
	// Vom Klassenassistenten generierte Überladungen virtueller Funktionen
	//{{AFX_VIRTUAL(CEx09aDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementierung
public:
	virtual ~CEx09aDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generierte Message-Map-Funktionen
protected:
	//{{AFX_MSG(CEx09aDoc)
		// HINWEIS - An dieser Stelle werden Member-Funktionen vom Klassen-Assistenten eingefügt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VERÄNDERN!
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ fügt unmittelbar vor der vorhergehenden Zeile zusätzliche Deklarationen ein.

#endif // !defined(AFX_EX09ADOC_H__61CB9EF0_2F96_11D2_A4E4_00403394CA84__INCLUDED_)
