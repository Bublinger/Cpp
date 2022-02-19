// ex07aDoc.cpp : Implementierung der Klasse CEx07aDoc
//

#include "stdafx.h"
#include "ex07a.h"

#include "ex07aDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEx07aDoc

IMPLEMENT_DYNCREATE(CEx07aDoc, CDocument)

BEGIN_MESSAGE_MAP(CEx07aDoc, CDocument)
	//{{AFX_MSG_MAP(CEx07aDoc)
		// HINWEIS - Hier werden Mapping-Makros vom Klassen-Assistenten eingefügt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VERÄNDERN!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEx07aDoc Konstruktion/Destruktion

CEx07aDoc::CEx07aDoc()
{
	// ZU ERLEDIGEN: Hier Code für One-Time-Konstruktion einfügen

}

CEx07aDoc::~CEx07aDoc()
{
}

BOOL CEx07aDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// ZU ERLEDIGEN: Hier Code zur Reinitialisierung einfügen
	// (SDI-Dokumente verwenden dieses Dokument)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CEx07aDoc Serialisierung

void CEx07aDoc::Serialize(CArchive& ar)
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
// CEx07aDoc Diagnose

#ifdef _DEBUG
void CEx07aDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CEx07aDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEx07aDoc Befehle
