// ex04aDoc.cpp : Implementierung der Klasse CEx04aDoc
//

#include "stdafx.h"
#include "ex04a.h"

#include "ex04aDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEx04aDoc

IMPLEMENT_DYNCREATE(CEx04aDoc, CDocument)

BEGIN_MESSAGE_MAP(CEx04aDoc, CDocument)
	//{{AFX_MSG_MAP(CEx04aDoc)
		// HINWEIS - Hier werden Mapping-Makros vom Klassen-Assistenten eingefügt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VERÄNDERN!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEx04aDoc Konstruktion/Destruktion

CEx04aDoc::CEx04aDoc()
{
	// ZU ERLEDIGEN: Hier Code für One-Time-Konstruktion einfügen

}

CEx04aDoc::~CEx04aDoc()
{
}

BOOL CEx04aDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// ZU ERLEDIGEN: Hier Code zur Reinitialisierung einfügen
	// (SDI-Dokumente verwenden dieses Dokument)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CEx04aDoc Serialisierung

void CEx04aDoc::Serialize(CArchive& ar)
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
// CEx04aDoc Diagnose

#ifdef _DEBUG
void CEx04aDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CEx04aDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEx04aDoc Befehle
