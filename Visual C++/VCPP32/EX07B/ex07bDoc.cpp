// ex07bDoc.cpp : Implementierung der Klasse CEx07bDoc
//

#include "stdafx.h"
#include "ex07b.h"

#include "ex07bDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEx07bDoc

IMPLEMENT_DYNCREATE(CEx07bDoc, CDocument)

BEGIN_MESSAGE_MAP(CEx07bDoc, CDocument)
	//{{AFX_MSG_MAP(CEx07bDoc)
		// HINWEIS - Hier werden Mapping-Makros vom Klassen-Assistenten eingef�gt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VER�NDERN!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEx07bDoc Konstruktion/Destruktion

CEx07bDoc::CEx07bDoc()
{
	// ZU ERLEDIGEN: Hier Code f�r One-Time-Konstruktion einf�gen

}

CEx07bDoc::~CEx07bDoc()
{
}

BOOL CEx07bDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// ZU ERLEDIGEN: Hier Code zur Reinitialisierung einf�gen
	// (SDI-Dokumente verwenden dieses Dokument)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CEx07bDoc Serialisierung

void CEx07bDoc::Serialize(CArchive& ar)
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
// CEx07bDoc Diagnose

#ifdef _DEBUG
void CEx07bDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CEx07bDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEx07bDoc Befehle
