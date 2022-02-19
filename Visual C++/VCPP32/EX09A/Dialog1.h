#if !defined(AFX_DIALOG1_H__61CB9EFA_2F96_11D2_A4E4_00403394CA84__INCLUDED_)
#define AFX_DIALOG1_H__61CB9EFA_2F96_11D2_A4E4_00403394CA84__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Dialog1.h : Header-Datei
//

/////////////////////////////////////////////////////////////////////////////
// Dialogfeld CDialog1 

class CDialog1 : public CDialog
{
// Konstruktion
public:
	CDialog1(CWnd* pParent = NULL);   // Standardkonstruktor

// Dialogfelddaten
	//{{AFX_DATA(CDialog1)
	enum { IDD = IDD_DIALOG1 };
	CImageList		m_imageList;
	CMonthCalCtrl	m_MonthCal5;
	CIPAddressCtrl	m_ptrIPCtrl;
	CDateTimeCtrl	m_MonthCal4;
	CDateTimeCtrl	m_MonthCal3;
	CDateTimeCtrl	m_MonthCal2;
	CDateTimeCtrl	m_MonthCal1;
	CString	m_strDate1;
	CString	m_strDate2;
	CString	m_strDate3;
	CString	m_strDate4;
	CString	m_strDate5;
	CString	m_strIPValue;
	CString	m_strComboEx1;
	CString	m_strComboEx2;
	//}}AFX_DATA


// Überschreibungen
	// Vom Klassen-Assistenten generierte virtuelle Funktionsüberschreibungen
	//{{AFX_VIRTUAL(CDialog1)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV-Unterstützung
	//}}AFX_VIRTUAL

// Implementierung
protected:

	// Generierte Nachrichtenzuordnungsfunktionen
	//{{AFX_MSG(CDialog1)
	afx_msg void OnDatetimechangeDatetimepicker1(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnDatetimechangeDatetimepicker2(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnDatetimechangeDatetimepicker3(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnDatetimechangeDatetimepicker4(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnSelchangeMonthcalendar1(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnFieldchangedIpaddress1(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnSelchangeComboboxex1();
	afx_msg void OnSelchangeComboboxex2();
	virtual BOOL OnInitDialog();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ fügt unmittelbar vor der vorhergehenden Zeile zusätzliche Deklarationen ein.

#endif // AFX_DIALOG1_H__61CB9EFA_2F96_11D2_A4E4_00403394CA84__INCLUDED_
