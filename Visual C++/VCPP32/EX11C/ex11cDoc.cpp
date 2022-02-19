// ex11cDoc.cpp : Implementierung der Klasse CEx11cDoc
//

#include "stdafx.h"
#include "ex11c.h"

#include "ex11cDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEx11cDoc

IMPLEMENT_DYNCREATE(CEx11cDoc, CDocument)

BEGIN_MESSAGE_MAP(CEx11cDoc, CDocument)
	//{{AFX_MSG_MAP(CEx11cDoc)
		// HINWEIS - Hier werden Mapping-Makros vom Klassen-Assistenten eingefügt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VERÄNDERN!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEx11cDoc Konstruktion/Destruktion

CEx11cDoc::CEx11cDoc()
{
	// ZU ERLEDIGEN: Hier Code für One-Time-Konstruktion einfügen

}

CEx11cDoc::~CEx11cDoc()
{
}

BOOL CEx11cDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// ZU ERLEDIGEN: Hier Code zur Reinitialisierung einfügen
	// (SDI-Dokumente verwenden dieses Dokument)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CEx11cDoc Serialisierung

void CEx11cDoc::Serialize(CArchive& ar)
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
// CEx11cDoc Diagnose

#ifdef _DEBUG
void CEx11cDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CEx11cDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEx11cDoc Befehle
