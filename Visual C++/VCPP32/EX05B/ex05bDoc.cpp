// ex05bDoc.cpp : Implementierung der Klasse CEx05bDoc
//

#include "stdafx.h"
#include "ex05b.h"

#include "ex05bDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEx05bDoc

IMPLEMENT_DYNCREATE(CEx05bDoc, CDocument)

BEGIN_MESSAGE_MAP(CEx05bDoc, CDocument)
	//{{AFX_MSG_MAP(CEx05bDoc)
		// HINWEIS - Hier werden Mapping-Makros vom Klassen-Assistenten eingef�gt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VER�NDERN!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEx05bDoc Konstruktion/Destruktion

CEx05bDoc::CEx05bDoc()
{
	// ZU ERLEDIGEN: Hier Code f�r One-Time-Konstruktion einf�gen

}

CEx05bDoc::~CEx05bDoc()
{
}

BOOL CEx05bDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// ZU ERLEDIGEN: Hier Code zur Reinitialisierung einf�gen
	// (SDI-Dokumente verwenden dieses Dokument)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CEx05bDoc Serialisierung

void CEx05bDoc::Serialize(CArchive& ar)
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
// CEx05bDoc Diagnose

#ifdef _DEBUG
void CEx05bDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CEx05bDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEx05bDoc Befehle
