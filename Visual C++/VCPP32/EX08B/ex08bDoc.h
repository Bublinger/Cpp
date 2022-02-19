// ex08bDoc.h : Schnittstelle der Klasse CEx08bDoc
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_EX08BDOC_H__D7A96B3D_3FE9_11D2_A4E4_00403394CA84__INCLUDED_)
#define AFX_EX08BDOC_H__D7A96B3D_3FE9_11D2_A4E4_00403394CA84__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CEx08bDoc : public CDocument
{
protected: // Nur aus Serialisierung erzeugen
	CEx08bDoc();
	DECLARE_DYNCREATE(CEx08bDoc)

// Attribute
public:

// Operationen
public:

// Überladungen
	// Vom Klassenassistenten generierte Überladungen virtueller Funktionen
	//{{AFX_VIRTUAL(CEx08bDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementierung
public:
	virtual ~CEx08bDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generierte Message-Map-Funktionen
protected:
	//{{AFX_MSG(CEx08bDoc)
		// HINWEIS - An dieser Stelle werden Member-Funktionen vom Klassen-Assistenten eingefügt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VERÄNDERN!
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ fügt unmittelbar vor der vorhergehenden Zeile zusätzliche Deklarationen ein.

#endif // !defined(AFX_EX08BDOC_H__D7A96B3D_3FE9_11D2_A4E4_00403394CA84__INCLUDED_)
