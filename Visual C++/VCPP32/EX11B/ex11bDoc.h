// ex11bDoc.h : Schnittstelle der Klasse CEx11bDoc
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_EX11BDOC_H__2EFAF7AA_40C5_11D2_A4E4_00403394CA84__INCLUDED_)
#define AFX_EX11BDOC_H__2EFAF7AA_40C5_11D2_A4E4_00403394CA84__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CEx11bDoc : public CDocument
{
protected: // Nur aus Serialisierung erzeugen
	CEx11bDoc();
	DECLARE_DYNCREATE(CEx11bDoc)

// Attribute
public:

// Operationen
public:

// Überladungen
	// Vom Klassenassistenten generierte Überladungen virtueller Funktionen
	//{{AFX_VIRTUAL(CEx11bDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementierung
public:
	virtual ~CEx11bDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generierte Message-Map-Funktionen
protected:
	//{{AFX_MSG(CEx11bDoc)
		// HINWEIS - An dieser Stelle werden Member-Funktionen vom Klassen-Assistenten eingefügt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VERÄNDERN!
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ fügt unmittelbar vor der vorhergehenden Zeile zusätzliche Deklarationen ein.

#endif // !defined(AFX_EX11BDOC_H__2EFAF7AA_40C5_11D2_A4E4_00403394CA84__INCLUDED_)
