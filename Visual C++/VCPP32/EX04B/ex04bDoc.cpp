// ex04bDoc.cpp : Implementierung der Klasse CEx04bDoc
//

#include "stdafx.h"
#include "ex04b.h"

#include "ex04bDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEx04bDoc

IMPLEMENT_DYNCREATE(CEx04bDoc, CDocument)

BEGIN_MESSAGE_MAP(CEx04bDoc, CDocument)
	//{{AFX_MSG_MAP(CEx04bDoc)
		// HINWEIS - Hier werden Mapping-Makros vom Klassen-Assistenten eingef�gt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VER�NDERN!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEx04bDoc Konstruktion/Destruktion

CEx04bDoc::CEx04bDoc()
{
	// ZU ERLEDIGEN: Hier Code f�r One-Time-Konstruktion einf�gen

}

CEx04bDoc::~CEx04bDoc()
{
}

BOOL CEx04bDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// ZU ERLEDIGEN: Hier Code zur Reinitialisierung einf�gen
	// (SDI-Dokumente verwenden dieses Dokument)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CEx04bDoc Serialisierung

void CEx04bDoc::Serialize(CArchive& ar)
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
// CEx04bDoc Diagnose

#ifdef _DEBUG
void CEx04bDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CEx04bDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEx04bDoc Befehle
