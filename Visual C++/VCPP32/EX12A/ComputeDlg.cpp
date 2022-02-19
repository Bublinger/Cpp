// ComputeDlg.cpp: Implementierungsdatei
//

#include "stdafx.h"
#include "ex12a.h"
#include "ComputeDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// Dialogfeld CComputeDlg 


CComputeDlg::CComputeDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CComputeDlg::IDD, pParent)
{
	m_nCount =0;
	//{{AFX_DATA_INIT(CComputeDlg)
		// HINWEIS: Der Klassen-Assistent fügt hier Elementinitialisierung ein
	//}}AFX_DATA_INIT
}


void CComputeDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CComputeDlg)
		// HINWEIS: Der Klassen-Assistent fügt hier DDX- und DDV-Aufrufe ein
	//}}AFX_DATA_MAP
}


BEGIN_MESSAGE_MAP(CComputeDlg, CDialog)
	//{{AFX_MSG_MAP(CComputeDlg)
	ON_WM_TIMER()
	ON_BN_CLICKED(IDC_START, OnStart)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// Behandlungsroutinen für Nachrichten CComputeDlg 

void CComputeDlg::OnTimer(UINT nIDEvent) 
{
	CProgressCtrl* pBar = (CProgressCtrl*) GetDlgItem(IDC_PROGRESS1);
	pBar->SetPos(m_nCount * 100 / nMaxCount);
}

void CComputeDlg::OnStart() 
{
	MSG message;

	m_nTimer = SetTimer(1, 100, NULL); // 1/10 Sekunde
	ASSERT(m_nTimer != 0);
	GetDlgItem(IDC_START)->EnableWindow(FALSE);
	volatile int nTemp;
	for (m_nCount = 0; m_nCount < nMaxCount; m_nCount++) {
		for (nTemp = 0; nTemp < 10000; nTemp++) {
			// verbraucht CPU-Zyklen
		}
		if (::PeekMessage(&message, NULL, 0, 0, PM_REMOVE)) {
			::TranslateMessage(&message);
			::DispatchMessage(&message);
		}
	}
	CDialog::OnOK();
}

void CComputeDlg::OnCancel() 
{

	TRACE("Eintritt CComputeDlg::OnCancel\n");
	if (m_nCount == 0) {      // vor Schaltfläche Start
		CDialog::OnCancel();
	}
	else {                    // Berechnung läuft
		m_nCount = nMaxCount; // Beenden von OnStart erzwingen
	}
}
