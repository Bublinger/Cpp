// ex06bDoc.cpp :  Implementierung der Klasse CEx06bDoc 
//

#include "stdafx.h"
#include "ex06b.h"

#include "ex06bDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEx06bDoc

IMPLEMENT_DYNCREATE(CEx06bDoc, CDocument)

BEGIN_MESSAGE_MAP(CEx06bDoc, CDocument)
	//{{AFX_MSG_MAP(CEx06bDoc)
		// HINWEIS - Hier werden Mapping-Makros vom Klassen-Assistenten eingef�gt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VER�NDERN!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEx06bDoc Konstruktion/Destruktion

CEx06bDoc::CEx06bDoc()
{
	// ZU ERLEDIGEN: Hier Code f�r One-Time-Konstruktion einf�gen

}

CEx06bDoc::~CEx06bDoc()
{
}

BOOL CEx06bDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// ZU ERLEDIGEN: Hier Code zur Reinitialisierung einf�gen
	// (SDI-Dokumente verwenden dieses Dokument)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CEx06bDoc Serialisierung
void CEx06bDoc::Serialize(CArchive& ar)
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
// CEx06bDoc Diagnose

#ifdef _DEBUG
void CEx06bDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CEx06bDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEx06bDoc Befehle
