// SpecFileDlg.cpp: Implementierungsdatei
//

#include "stdafx.h"
#include "ex07b.h"
#include "SpecFileDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Dialogfeld CSpecialFileDialog 


CSpecialFileDialog::CSpecialFileDialog(BOOL bOpenFileDialog,
		LPCTSTR lpszDefExt, LPCTSTR lpszFileName, DWORD dwFlags,
		LPCTSTR lpszFilter, CWnd* pParentWnd)
	: CFileDialog(bOpenFileDialog, lpszDefExt, lpszFileName,
		dwFlags, lpszFilter, pParentWnd)
{
	//{{AFX_DATA_INIT(CSpecialFileDialog)
		// HINWEIS: Der Klassen-Assistent f�gt hier Elementinitialisierung ein
	//}}AFX_DATA_INIT
	m_ofn.Flags |= OFN_ENABLETEMPLATE;
	m_ofn.lpTemplateName = MAKEINTRESOURCE(IDD_FILESPECIAL);
	m_ofn.lpstrTitle = "Datei l�schen";
	m_bDeleteAll = FALSE;
}


void CSpecialFileDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CSpecialFileDialog)
		// HINWEIS: Der Klassen-Assistent f�gt hier DDX- und DDV-Aufrufe ein
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CSpecialFileDialog, CDialog)
	//{{AFX_MSG_MAP(CSpecialFileDialog)
	ON_BN_CLICKED(IDC_DELETE, OnDelete)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Behandlungsroutinen f�r Nachrichten CSpecialFileDialog 
BOOL CSpecialFileDialog::OnInitDialog() 
{
	BOOL bRet = CFileDialog::OnInitDialog();
	if (bRet == TRUE) {
		GetParent()->GetDlgItem(IDOK)->SetWindowText("L�schen");
	}
	return bRet;
}

void CSpecialFileDialog::OnDelete() 
{
	m_bDeleteAll = TRUE;
	// 0x480 ist die Fenster-ID des Eingabefelds Dateiname
	//  (gem�� SPYXX)
	GetParent()->GetDlgItem(0x480)->GetWindowText(m_strFilename);
	GetParent()->SendMessage(WM_COMMAND, IDCANCEL);
}

