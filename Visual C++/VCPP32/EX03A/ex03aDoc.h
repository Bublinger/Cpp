// ex03aDoc.h : Schnittstelle der Klasse CEx03aDoc
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_EX03ADOC_H__301D8D8A_3CC6_11D2_A4E4_00403394CA84__INCLUDED_)
#define AFX_EX03ADOC_H__301D8D8A_3CC6_11D2_A4E4_00403394CA84__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CEx03aDoc : public CDocument
{
protected: // Nur aus Serialisierung erzeugen
	CEx03aDoc();
	DECLARE_DYNCREATE(CEx03aDoc)

// Attribute
public:

// Operationen
public:

// �berladungen
	// Vom Klassenassistenten generierte �berladungen virtueller Funktionen
	//{{AFX_VIRTUAL(CEx03aDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementierung
public:
	virtual ~CEx03aDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generierte Message-Map-Funktionen
protected:
	//{{AFX_MSG(CEx03aDoc)
		// HINWEIS - An dieser Stelle werden Member-Funktionen vom Klassen-Assistenten eingef�gt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VER�NDERN!
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ f�gt unmittelbar vor der vorhergehenden Zeile zus�tzliche Deklarationen ein.

#endif // !defined(AFX_EX03ADOC_H__301D8D8A_3CC6_11D2_A4E4_00403394CA84__INCLUDED_)
