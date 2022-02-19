#ifndef AFX_EX06ADIALOG_H__FC361A74_D4CE_11D0_A68E_00009290A263__INCLUDED_
#define AFX_EX06ADIALOG_H__FC361A74_D4CE_11D0_A68E_00009290A263__INCLUDED_

// Ex06aDialog.h : Header-Datei
//

/////////////////////////////////////////////////////////////////////////////
// Dialogfeld CEx06aDialog 

class CEx06aDialog : public CDialog
{
// Konstruktion
public:
	CEx06aDialog(CWnd* pParent = NULL);   // Standardkonstruktor

// Dialogfelddaten
	//{{AFX_DATA(CEx06aDialog)
	enum { IDD = IDD_DIALOG1 };
	CString	m_strBio;
	int		m_nCat;
	CString	m_strDept;
	BOOL	m_bInsDis;
	CString	m_strEduc;
	BOOL	m_bInsLife;
	CString	m_strLang;
	int		m_nLoyal;
	BOOL	m_bInsMed;
	CString	m_strName;
	int		m_nRely;
	CString	m_strSkill;
	int		m_nSsn;
	//}}AFX_DATA


// Überschreibungen
	// Vom Klassen-Assistenten generierte virtuelle Funktionsüberschreibungen
	//{{AFX_VIRTUAL(CEx06aDialog)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV-Unterstützung
	//}}AFX_VIRTUAL

// Implementierung
protected:

	// Generierte Nachrichtenzuordnungsfunktionen
	//{{AFX_MSG(CEx06aDialog)
	virtual BOOL OnInitDialog();
	afx_msg void OnSpecial();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio fügt zusätzliche Deklarationen unmittelbar vor der vorhergehenden Zeile ein.

#endif // AFX_EX06ADIALOG_H__FC361A74_D4CE_11D0_A68E_00009290A263__INCLUDED_
