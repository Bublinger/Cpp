// ex06aDoc.cpp : Implementierung der Klasse CEx06aDoc
//

#include "stdafx.h"
#include "ex06a.h"

#include "ex06aDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEx06aDoc

IMPLEMENT_DYNCREATE(CEx06aDoc, CDocument)

BEGIN_MESSAGE_MAP(CEx06aDoc, CDocument)
	//{{AFX_MSG_MAP(CEx06aDoc)
		// HINWEIS - Hier werden Mapping-Makros vom Klassen-Assistenten eingefügt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VERÄNDERN!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEx06aDoc Konstruktion/Destruktion

CEx06aDoc::CEx06aDoc()
{
	// ZU ERLEDIGEN: Hier Code für One-Time-Konstruktion einfügen

}

CEx06aDoc::~CEx06aDoc()
{
}

BOOL CEx06aDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// ZU ERLEDIGEN: Hier Code zur Reinitialisierung einfügen
	// (SDI-Dokumente verwenden dieses Dokument)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CEx06aDoc Serialisierung

void CEx06aDoc::Serialize(CArchive& ar)
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
// CEx06aDoc Diagnose

#ifdef _DEBUG
void CEx06aDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CEx06aDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEx06aDoc Befehle
