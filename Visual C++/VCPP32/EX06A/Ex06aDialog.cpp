// Ex06aDialog.cpp: Implementierungsdatei
//

#include "stdafx.h"
#include "ex06a.h"
#include "Ex06aDialog.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Dialogfeld CEx06aDialog 


CEx06aDialog::CEx06aDialog(CWnd* pParent /*=NULL*/)
	: CDialog(CEx06aDialog::IDD, pParent)
{
	//{{AFX_DATA_INIT(CEx06aDialog)
	m_strBio = _T("");
	m_nCat = -1;
	m_strDept = _T("");
	m_bInsDis = FALSE;
	m_strEduc = _T("");
	m_bInsLife = FALSE;
	m_strLang = _T("");
	m_nLoyal = 0;
	m_bInsMed = FALSE;
	m_strName = _T("");
	m_nRely = 0;
	m_strSkill = _T("");
	m_nSsn = 0;
	//}}AFX_DATA_INIT
}


void CEx06aDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CEx06aDialog)
	DDX_Text(pDX, IDC_BIO, m_strBio);
	DDX_Radio(pDX, IDC_CAT, m_nCat);
	DDX_LBString(pDX, IDC_DEPT, m_strDept);
	DDX_Check(pDX, IDC_DIS, m_bInsDis);
	DDX_CBString(pDX, IDC_EDUC, m_strEduc);
	DDX_Check(pDX, IDC_LIFE, m_bInsLife);
	DDX_CBString(pDX, IDC_LANG, m_strLang);
	DDX_Scroll(pDX, IDC_LOYAL, m_nLoyal);
	DDX_Check(pDX, IDC_MED, m_bInsMed);
	DDX_Text(pDX, IDC_NAME, m_strName);
	DDX_Scroll(pDX, IDC_RELY, m_nRely);
	DDX_CBString(pDX, IDC_SKILL, m_strSkill);
	DDX_Text(pDX, IDC_SSN, m_nSsn);
	DDV_MinMaxInt(pDX, m_nSsn, 0, 999999999);
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CEx06aDialog, CDialog)
	//{{AFX_MSG_MAP(CEx06aDialog)
	ON_BN_CLICKED(IDC_SPECIAL, OnSpecial)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Behandlungsroutinen für Nachrichten CEx06aDialog 

void CEx06aDialog::OnSpecial() 
{
	TRACE("CEx06aDialog::OnSpecial\n");	
}

BOOL CEx06aDialog::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
    // Beachten Sie, daß CDialog::OnInitDialog in dieser
    // Funktion nur einmal aufgerufen werden darf
    CListBox* pLB = (CListBox*) GetDlgItem(IDC_DEPT);
    pLB->InsertString(-1, "Dokumentation");
    pLB->InsertString(-1, "Buchhaltung");
    pLB->InsertString(-1, "Personalabteilung");
    pLB->InsertString(-1, "Sicherheitsdienst");

    // Aufruf nach Initialisierung
    return CDialog::OnInitDialog();
	
	return TRUE;  // TRUE zurückgeben, sofern kein Steuerelement den Fokus erhält
	              // EXCEPTION: OCX-Eigenschaftenseiten sollten FALSE zurückgeben
}

