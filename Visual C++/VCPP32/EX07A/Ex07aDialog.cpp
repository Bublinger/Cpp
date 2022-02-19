// Ex07aDialog.cpp: Implementierungsdatei
//

#include "stdafx.h"
#include "ex07a.h"
#include "Ex07aDialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Dialogfeld CEx07aDialog 


CEx07aDialog::CEx07aDialog(CWnd* pParent /*=NULL*/)
	: CDialog(CEx07aDialog::IDD, pParent)
{
	//{{AFX_DATA_INIT(CEx07aDialog)
	m_strEdit1 = _T("");
	//}}AFX_DATA_INIT
	m_pView = NULL;
}

CEx07aDialog::CEx07aDialog(CView* pView) // nichtmodaler Konstruktor
{
	m_pView = pView;
}

BOOL CEx07aDialog::Create()
{
	return CDialog::Create(CEx07aDialog::IDD);
}

void CEx07aDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CEx07aDialog)
	DDX_Text(pDX, IDC_EDIT1, m_strEdit1);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CEx07aDialog, CDialog)
	//{{AFX_MSG_MAP(CEx07aDialog)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Behandlungsroutinen für Nachrichten CEx07aDialog 

void CEx07aDialog::OnCancel() // keine eigentliche Nachrichtenbehandlungsroutine
{
{
	if (m_pView != NULL) {
		// nichmodal -- Basisklassenfunktion OnCancel nicht aufrufen
		m_pView->PostMessage(WM_GOODBYE, IDCANCEL);
	}
	else {
		CDialog::OnCancel(); // modal
	}
}

}

void CEx07aDialog::OnOK() //keine eigentliche Nachrichtenbehandlungsroutine
{
	if (m_pView != NULL) {
		// nichtmodal -- Basisklassenfunktion OnOK nicht aufrufen
		UpdateData(TRUE);
		m_pView->PostMessage(WM_GOODBYE, IDOK);
	}
	else {
		CDialog::OnOK(); // modal 
	}
}