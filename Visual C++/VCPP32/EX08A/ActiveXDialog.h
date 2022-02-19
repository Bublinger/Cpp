//{{AFX_INCLUDES()
#include "calendar.h"
//}}AFX_INCLUDES
#if !defined(AFX_ACTIVEXDIALOG_H__659ED877_3F78_11D2_A4E4_00403394CA84__INCLUDED_)
#define AFX_ACTIVEXDIALOG_H__659ED877_3F78_11D2_A4E4_00403394CA84__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ActiveXDialog.h : Header-Datei
//

/////////////////////////////////////////////////////////////////////////////
// Dialogfeld CActiveXDialog 

class CActiveXDialog : public CDialog
{
// Konstruktion
public:
	CActiveXDialog(CWnd* pParent = NULL);   // Standardkonstruktor

// Dialogfelddaten
	//{{AFX_DATA(CActiveXDialog)
	enum { IDD = IDD_ACTIVEXDIALOG };
	short	m_sDay;
	short	m_sMonth;
	short	m_sYear;
	CCalendar	m_calendar;
	//}}AFX_DATA
	COleVariant m_varValue;
	unsigned long m_BackColor;

// Überschreibungen
	// Vom Klassen-Assistenten generierte virtuelle Funktionsüberschreibungen
	//{{AFX_VIRTUAL(CActiveXDialog)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV-Unterstützung
	//}}AFX_VIRTUAL

// Implementierung
protected:

	// Generierte Nachrichtenzuordnungsfunktionen
	//{{AFX_MSG(CActiveXDialog)
	virtual BOOL OnInitDialog();
	afx_msg void OnNewMonthKalender1();
	afx_msg void OnSelectdate();
	afx_msg void OnNextweek();
	virtual void OnOK();
	afx_msg void OnNextWeek();
	DECLARE_EVENTSINK_MAP()
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ fügt unmittelbar vor der vorhergehenden Zeile zusätzliche Deklarationen ein.

#endif // AFX_ACTIVEXDIALOG_H__659ED877_3F78_11D2_A4E4_00403394CA84__INCLUDED_
