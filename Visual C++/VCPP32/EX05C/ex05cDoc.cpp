// ex05cDoc.cpp : Implementierung der Klasse CEx05cDoc
//

#include "stdafx.h"
#include "ex05c.h"

#include "ex05cDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEx05cDoc

IMPLEMENT_DYNCREATE(CEx05cDoc, CDocument)

BEGIN_MESSAGE_MAP(CEx05cDoc, CDocument)
	//{{AFX_MSG_MAP(CEx05cDoc)
		// HINWEIS - Hier werden Mapping-Makros vom Klassen-Assistenten eingef�gt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VER�NDERN!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEx05cDoc Konstruktion/Destruktion

CEx05cDoc::CEx05cDoc()
{
	// ZU ERLEDIGEN: Hier Code f�r One-Time-Konstruktion einf�gen

}

CEx05cDoc::~CEx05cDoc()
{
}

BOOL CEx05cDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// ZU ERLEDIGEN: Hier Code zur Reinitialisierung einf�gen
	// (SDI-Dokumente verwenden dieses Dokument)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CEx05cDoc Serialisierung

void CEx05cDoc::Serialize(CArchive& ar)
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
// CEx05cDoc Diagnose

#ifdef _DEBUG
void CEx05cDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CEx05cDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEx05cDoc Befehle
