// ex11aDoc.cpp : Implementierung der Klasse CEx11aDoc
//

#include "stdafx.h"
#include "ex11a.h"

#include "ex11aDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEx11aDoc

IMPLEMENT_DYNCREATE(CEx11aDoc, CDocument)

BEGIN_MESSAGE_MAP(CEx11aDoc, CDocument)
	//{{AFX_MSG_MAP(CEx11aDoc)
		// HINWEIS - Hier werden Mapping-Makros vom Klassen-Assistenten eingefügt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VERÄNDERN!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEx11aDoc Konstruktion/Destruktion

CEx11aDoc::CEx11aDoc()
{
	// ZU ERLEDIGEN: Hier Code für One-Time-Konstruktion einfügen

}

CEx11aDoc::~CEx11aDoc()
{
}

BOOL CEx11aDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// ZU ERLEDIGEN: Hier Code zur Reinitialisierung einfügen
	// (SDI-Dokumente verwenden dieses Dokument)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CEx11aDoc Serialisierung

void CEx11aDoc::Serialize(CArchive& ar)
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
// CEx11aDoc Diagnose

#ifdef _DEBUG
void CEx11aDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CEx11aDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEx11aDoc Befehle
