// ex11dDoc.cpp : Implementierung der Klasse CEx11dDoc
//

#include "stdafx.h"
#include "ex11d.h"

#include "ex11dDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEx11dDoc

IMPLEMENT_DYNCREATE(CEx11dDoc, CDocument)

BEGIN_MESSAGE_MAP(CEx11dDoc, CDocument)
	//{{AFX_MSG_MAP(CEx11dDoc)
		// HINWEIS - Hier werden Mapping-Makros vom Klassen-Assistenten eingef�gt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VER�NDERN!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEx11dDoc Konstruktion/Destruktion

CEx11dDoc::CEx11dDoc()
{
	// ZU ERLEDIGEN: Hier Code f�r One-Time-Konstruktion einf�gen

}

CEx11dDoc::~CEx11dDoc()
{
}

BOOL CEx11dDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// ZU ERLEDIGEN: Hier Code zur Reinitialisierung einf�gen
	// (SDI-Dokumente verwenden dieses Dokument)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CEx11dDoc Serialisierung

void CEx11dDoc::Serialize(CArchive& ar)
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
// CEx11dDoc Diagnose

#ifdef _DEBUG
void CEx11dDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CEx11dDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEx11dDoc Befehle
