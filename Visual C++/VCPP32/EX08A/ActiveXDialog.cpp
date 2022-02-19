// ActiveXDialog.cpp: Implementierungsdatei
//

#include "stdafx.h"
#include "ex08a.h"

#include "ActiveXDialog.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Dialogfeld CActiveXDialog 


CActiveXDialog::CActiveXDialog(CWnd* pParent /*=NULL*/)
	: CDialog(CActiveXDialog::IDD, pParent)
{
	//{{AFX_DATA_INIT(CActiveXDialog)
	m_sDay = 0;
	m_sMonth = 0;
	m_sYear = 0;
	//}}AFX_DATA_INIT
	m_BackColor = 0x8000000F;
}


void CActiveXDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CActiveXDialog)
	DDX_Text(pDX, IDC_DAY, m_sDay);
	DDX_Text(pDX, IDC_MONTH, m_sMonth);
	DDX_Text(pDX, IDC_YEAR, m_sYear);
	DDX_Control(pDX, IDC_KALENDER1, m_calendar);
	//}}AFX_DATA_MAP
	DDX_OCColor(pDX, IDC_KALENDER1, DISPID_BACKCOLOR, m_BackColor);
}


BEGIN_MESSAGE_MAP(CActiveXDialog, CDialog)
	//{{AFX_MSG_MAP(CActiveXDialog)
	ON_BN_CLICKED(IDC_SELECTDATE, OnSelectdate)
	ON_BN_CLICKED(IDC_NEXTWEEK, OnNextWeek)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Behandlungsroutinen für Nachrichten CActiveXDialog 

BEGIN_EVENTSINK_MAP(CActiveXDialog, CDialog)
    //{{AFX_EVENTSINK_MAP(CActiveXDialog)
	ON_EVENT(CActiveXDialog, IDC_KALENDER1, 2003 /* NewMonth */, OnNewMonthKalender1, VTS_NONE)
	//}}AFX_EVENTSINK_MAP
END_EVENTSINK_MAP()

BOOL CActiveXDialog::OnInitDialog() 
{
	CDialog::OnInitDialog();
	
	m_calendar.SetWert(m_varValue); // kein DDX-Datenaustausch für VARIANT-Werte
	
	return TRUE;   // EXCEPTION: OCX-Eigenschaftenseiten sollten FALSE zurückgeben
}

void CActiveXDialog::OnNewMonthKalender1() 
{
	AfxMessageBox("Ereignis:  CActiveXDialog::OnNewMonthKalender1");
	
}

void CActiveXDialog::OnSelectdate() 
{
	CDataExchange dx(this, TRUE);
	DDX_Text(&dx, IDC_DAY, m_sDay);
	DDX_Text(&dx, IDC_MONTH, m_sMonth);
	DDX_Text(&dx, IDC_YEAR, m_sYear);
	m_calendar.SetTag(m_sDay);
	m_calendar.SetMonat(m_sMonth);
	m_calendar.SetJahr(m_sYear);
}

void CActiveXDialog::OnNextWeek() 
{
	m_calendar.NextWeek();
}

void CActiveXDialog::OnOK() 
{
	CDialog::OnOK();
	m_varValue = m_calendar.GetWert(); // kein DDX-Datenaustausch für VARIANT-Werte
}

