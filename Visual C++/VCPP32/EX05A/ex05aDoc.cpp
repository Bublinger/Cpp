// ex05aDoc.cpp : Implementierung der Klasse CEx05aDoc
//

#include "stdafx.h"
#include "ex05a.h"

#include "ex05aDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEx05aDoc

IMPLEMENT_DYNCREATE(CEx05aDoc, CDocument)

BEGIN_MESSAGE_MAP(CEx05aDoc, CDocument)
	//{{AFX_MSG_MAP(CEx05aDoc)
		// HINWEIS - Hier werden Mapping-Makros vom Klassen-Assistenten eingef�gt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VER�NDERN!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEx05aDoc Konstruktion/Destruktion

CEx05aDoc::CEx05aDoc()
{
	// ZU ERLEDIGEN: Hier Code f�r One-Time-Konstruktion einf�gen

}

CEx05aDoc::~CEx05aDoc()
{
}

BOOL CEx05aDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// ZU ERLEDIGEN: Hier Code zur Reinitialisierung einf�gen
	// (SDI-Dokumente verwenden dieses Dokument)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CEx05aDoc Serialisierung

void CEx05aDoc::Serialize(CArchive& ar)
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
// CEx05aDoc Diagnose

#ifdef _DEBUG
void CEx05aDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CEx05aDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEx05aDoc Befehle
