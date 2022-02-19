// ex04cDoc.h : Schnittstelle der Klasse CEx04cDoc
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_EX04CDOC_H__9BBE5BBC_D48F_11D0_A68E_00009290A263__INCLUDED_)
#define AFX_EX04CDOC_H__9BBE5BBC_D48F_11D0_A68E_00009290A263__INCLUDED_

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000


class CEx04cDoc : public CDocument
{
protected: // Nur aus Serialisierung erzeugen
	CEx04cDoc();
	DECLARE_DYNCREATE(CEx04cDoc)

// Attribute
public:

// Operationen
public:

// Überladungen
	// Vom Klassenassistenten generierte Überladungen virtueller Funktionen
	//{{AFX_VIRTUAL(CEx04cDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementierung
public:
	virtual ~CEx04cDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generierte Message-Map-Funktionen
protected:
	//{{AFX_MSG(CEx04cDoc)
		// HINWEIS - An dieser Stelle werden Member-Funktionen vom Klassen-Assistenten eingefügt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VERÄNDERN!
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio fügt zusätzliche Deklarationen unmittelbar vor der vorhergehenden Zeile ein.

#endif // !defined(AFX_EX04CDOC_H__9BBE5BBC_D48F_11D0_A68E_00009290A263__INCLUDED_)
