// ex03aDoc.cpp : Implementierung der Klasse CEx03aDoc
//

#include "stdafx.h"
#include "ex03a.h"

#include "ex03aDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEx03aDoc

IMPLEMENT_DYNCREATE(CEx03aDoc, CDocument)

BEGIN_MESSAGE_MAP(CEx03aDoc, CDocument)
	//{{AFX_MSG_MAP(CEx03aDoc)
		// HINWEIS - Hier werden Mapping-Makros vom Klassen-Assistenten eingefügt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VERÄNDERN!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEx03aDoc Konstruktion/Destruktion

CEx03aDoc::CEx03aDoc()
{
	// ZU ERLEDIGEN: Hier Code für One-Time-Konstruktion einfügen

}

CEx03aDoc::~CEx03aDoc()
{
}

BOOL CEx03aDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// ZU ERLEDIGEN: Hier Code zur Reinitialisierung einfügen
	// (SDI-Dokumente verwenden dieses Dokument)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CEx03aDoc Serialisierung

void CEx03aDoc::Serialize(CArchive& ar)
{
	if (ar.IsStoring())
	{
		// ZU ERLEDIGEN: Hier Code zum Speichern einfügen
	}
	else
	{
		// ZU ERLEDIGEN: Hier Code zum Laden einfügen
	}
}

/////////////////////////////////////////////////////////////////////////////
// CEx03aDoc Diagnose

#ifdef _DEBUG
void CEx03aDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CEx03aDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEx03aDoc Befehle
