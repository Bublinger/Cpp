// ex04cDoc.cpp : Implementierung der Klasse CEx04cDoc
//

#include "stdafx.h"
#include "ex04c.h"

#include "ex04cDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEx04cDoc

IMPLEMENT_DYNCREATE(CEx04cDoc, CDocument)

BEGIN_MESSAGE_MAP(CEx04cDoc, CDocument)
	//{{AFX_MSG_MAP(CEx04cDoc)
		// HINWEIS - Hier werden Mapping-Makros vom Klassen-Assistenten eingefügt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VERÄNDERN!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEx04cDoc Konstruktion/Destruktion

CEx04cDoc::CEx04cDoc()
{
	// ZU ERLEDIGEN: Hier Code für One-Time-Konstruktion einfügen

}

CEx04cDoc::~CEx04cDoc()
{
}

BOOL CEx04cDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// ZU ERLEDIGEN: Hier Code zur Reinitialisierung einfügen
	// (SDI-Dokumente verwenden dieses Dokument)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CEx04cDoc Serialisierung

void CEx04cDoc::Serialize(CArchive& ar)
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
// CEx04cDoc Diagnose

#ifdef _DEBUG
void CEx04cDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CEx04cDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEx04cDoc Befehle
