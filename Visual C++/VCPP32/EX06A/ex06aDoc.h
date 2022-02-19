// ex06aDoc.h : Schnittstelle der Klasse CEx06aDoc
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_EX06ADOC_H__FC361A6A_D4CE_11D0_A68E_00009290A263__INCLUDED_)
#define AFX_EX06ADOC_H__FC361A6A_D4CE_11D0_A68E_00009290A263__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000


class CEx06aDoc : public CDocument
{
protected: // Nur aus Serialisierung erzeugen
	CEx06aDoc();
	DECLARE_DYNCREATE(CEx06aDoc)

// Attribute
public:

// Operationen
public:

// Überladungen
	// Vom Klassenassistenten generierte Überladungen virtueller Funktionen
	//{{AFX_VIRTUAL(CEx06aDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementierung
public:
	virtual ~CEx06aDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generierte Message-Map-Funktionen
protected:
	//{{AFX_MSG(CEx06aDoc)
		// HINWEIS - An dieser Stelle werden Member-Funktionen vom Klassen-Assistenten eingefügt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VERÄNDERN!
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio fügt zusätzliche Deklarationen unmittelbar vor der vorhergehenden Zeile ein.

#endif // !defined(AFX_EX06ADOC_H__FC361A6A_D4CE_11D0_A68E_00009290A263__INCLUDED_)
