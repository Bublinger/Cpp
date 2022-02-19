// ex08bDoc.cpp : Implementierung der Klasse CEx08bDoc
//

#include "stdafx.h"
#include "ex08b.h"

#include "ex08bDoc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CEx08bDoc

IMPLEMENT_DYNCREATE(CEx08bDoc, CDocument)

BEGIN_MESSAGE_MAP(CEx08bDoc, CDocument)
	//{{AFX_MSG_MAP(CEx08bDoc)
		// HINWEIS - Hier werden Mapping-Makros vom Klassen-Assistenten eingefügt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VERÄNDERN!
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CEx08bDoc Konstruktion/Destruktion

CEx08bDoc::CEx08bDoc()
{
	// ZU ERLEDIGEN: Hier Code für One-Time-Konstruktion einfügen

}

CEx08bDoc::~CEx08bDoc()
{
}

BOOL CEx08bDoc::OnNewDocument()
{
	if (!CDocument::OnNewDocument())
		return FALSE;

	// ZU ERLEDIGEN: Hier Code zur Reinitialisierung einfügen
	// (SDI-Dokumente verwenden dieses Dokument)

	return TRUE;
}



/////////////////////////////////////////////////////////////////////////////
// CEx08bDoc Serialisierung

void CEx08bDoc::Serialize(CArchive& ar)
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
// CEx08bDoc Diagnose

#ifdef _DEBUG
void CEx08bDoc::AssertValid() const
{
	CDocument::AssertValid();
}

void CEx08bDoc::Dump(CDumpContext& dc) const
{
	CDocument::Dump(dc);
}
#endif //_DEBUG

/////////////////////////////////////////////////////////////////////////////
// CEx08bDoc Befehle
