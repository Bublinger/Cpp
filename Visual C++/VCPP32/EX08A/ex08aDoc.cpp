// ex08aDoc.cpp : Implementierung der Klasse CEx08aDoc
//

#include "stdafx.h"
#include "ex08a.h"

#include "ex08aDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEx08aDoc

IMPLEMENT_DYNCREATE(CEx08aDoc, CDocument)

BEGIN_MESSAGE_MAP(CEx08aDoc, CDocument)
	//{{AFX_MSG_MAP(CEx08aDoc)
		// HINWEIS - Hier werden Mapping-Makros vom Klassen-Assistenten eingef�gt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VER�NDERN!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEx08aDoc Konstruktion/Destruktion

CEx08aDoc::CEx08aDoc()
{
	// ZU ERLEDIGEN: Hier Code f�r One-Time-Konstruktion einf�gen

}

CEx08aDoc::~CEx08aDoc()
{
}

BOOL CEx08aDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// ZU ERLEDIGEN: Hier Code zur Reinitialisierung einf�gen
	// (SDI-Dokumente verwenden dieses Dokument)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CEx08aDoc Serialisierung

void CEx08aDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// ZU ERLEDIGEN: Hier Code zum Speichern einf�gen
	}
	else
	{
		// ZU ERLEDIGEN: Hier Code zum Laden einf�gen
	}
}

/////////////////////////////////////////////////////////////////////////////
// CEx08aDoc Diagnose

#ifdef _DEBUG
void CEx08aDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CEx08aDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEx08aDoc Befehle
