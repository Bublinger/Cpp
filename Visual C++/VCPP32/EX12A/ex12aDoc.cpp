// ex12aDoc.cpp : Implementierung der Klasse CEx12aDoc
//

#include "stdafx.h"
#include "ex12a.h"

#include "ex12aDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEx12aDoc

IMPLEMENT_DYNCREATE(CEx12aDoc, CDocument)

BEGIN_MESSAGE_MAP(CEx12aDoc, CDocument)
	//{{AFX_MSG_MAP(CEx12aDoc)
		// HINWEIS - Hier werden Mapping-Makros vom Klassen-Assistenten eingef�gt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VER�NDERN!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEx12aDoc Konstruktion/Destruktion

CEx12aDoc::CEx12aDoc()
{
	// ZU ERLEDIGEN: Hier Code f�r One-Time-Konstruktion einf�gen

}

CEx12aDoc::~CEx12aDoc()
{
}

BOOL CEx12aDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// ZU ERLEDIGEN: Hier Code zur Reinitialisierung einf�gen
	// (SDI-Dokumente verwenden dieses Dokument)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CEx12aDoc Serialisierung

void CEx12aDoc::Serialize(CArchive& ar)
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
// CEx12aDoc Diagnose

#ifdef _DEBUG
void CEx12aDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CEx12aDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEx12aDoc Befehle
