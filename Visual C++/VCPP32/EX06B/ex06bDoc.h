// ex06bDoc.h : Schnittstelle der Klasse CEx06bDoc
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_EX06BDOC_H__6F45AD97_561B_11D0_8FCF_00C04FC2A0C2__INCLUDED_)
#define AFX_EX06BDOC_H__6F45AD97_561B_11D0_8FCF_00C04FC2A0C2__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000


class CEx06bDoc : public CDocument
{
protected: // Nur aus Serialisierung erzeugen
	CEx06bDoc();
	DECLARE_DYNCREATE(CEx06bDoc)

// Attribute
public:

// Operationen
public:

// Überladungen
	// Vom Klassenassistenten generierte Überladungen virtueller Funktionen
	//{{AFX_VIRTUAL(CEx06bDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementierung
public:
	virtual ~CEx06bDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generierte Message-Map-Funktionen
protected:
	//{{AFX_MSG(CEx06bDoc)
		// HINWEIS - An dieser Stelle werden Member-Funktionen vom Klassen-Assistenten eingefügt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VERÄNDERN!
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio fügt zusätzliche Deklarationen unmittelbar vor der vorhergehenden Zeile ein.

#endif // !defined(AFX_EX06BDOC_H__6F45AD97_561B_11D0_8FCF_00C04FC2A0C2__INCLUDED_)
