// ex11bDoc.cpp : Implementierung der Klasse CEx11bDoc
//

#include "stdafx.h"
#include "ex11b.h"

#include "ex11bDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEx11bDoc

IMPLEMENT_DYNCREATE(CEx11bDoc, CDocument)

BEGIN_MESSAGE_MAP(CEx11bDoc, CDocument)
	//{{AFX_MSG_MAP(CEx11bDoc)
		// HINWEIS - Hier werden Mapping-Makros vom Klassen-Assistenten eingef�gt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VER�NDERN!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEx11bDoc Konstruktion/Destruktion

CEx11bDoc::CEx11bDoc()
{
	// ZU ERLEDIGEN: Hier Code f�r One-Time-Konstruktion einf�gen

}

CEx11bDoc::~CEx11bDoc()
{
}

BOOL CEx11bDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// ZU ERLEDIGEN: Hier Code zur Reinitialisierung einf�gen
	// (SDI-Dokumente verwenden dieses Dokument)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CEx11bDoc Serialisierung

void CEx11bDoc::Serialize(CArchive& ar)
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
// CEx11bDoc Diagnose

#ifdef _DEBUG
void CEx11bDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CEx11bDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEx11bDoc Befehle
