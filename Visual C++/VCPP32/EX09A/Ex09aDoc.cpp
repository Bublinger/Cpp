// Ex09aDoc.cpp : Implementierung der Klasse CEx09aDoc
//

#include "stdafx.h"
#include "Ex09a.h"

#include "Ex09aDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEx09aDoc

IMPLEMENT_DYNCREATE(CEx09aDoc, CDocument)

BEGIN_MESSAGE_MAP(CEx09aDoc, CDocument)
	//{{AFX_MSG_MAP(CEx09aDoc)
		// HINWEIS - Hier werden Mapping-Makros vom Klassen-Assistenten eingef�gt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VER�NDERN!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEx09aDoc Konstruktion/Destruktion

CEx09aDoc::CEx09aDoc()
{
	// ZU ERLEDIGEN: Hier Code f�r One-Time-Konstruktion einf�gen

}

CEx09aDoc::~CEx09aDoc()
{
}

BOOL CEx09aDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// ZU ERLEDIGEN: Hier Code zur Reinitialisierung einf�gen
	// (SDI-Dokumente verwenden dieses Dokument)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CEx09aDoc Serialisierung

void CEx09aDoc::Serialize(CArchive& ar)
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
// CEx09aDoc Diagnose

#ifdef _DEBUG
void CEx09aDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CEx09aDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEx09aDoc Befehle
