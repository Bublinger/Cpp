#if !defined(AFX_COMPUTEDLG_H__C8A7A860_40FD_11D2_A4E4_00403394CA84__INCLUDED_)
#define AFX_COMPUTEDLG_H__C8A7A860_40FD_11D2_A4E4_00403394CA84__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// ComputeDlg.h : Header-Datei
//

/////////////////////////////////////////////////////////////////////////////
// Dialogfeld CComputeDlg 

class CComputeDlg : public CDialog
{
// Konstruktion
public:
	CComputeDlg(CWnd* pParent = NULL);   // Standardkonstruktor

private:
	int m_nTimer;
	int m_nCount;
	enum { nMaxCount = 10000 };

	// Dialogfelddaten
	//{{AFX_DATA(CComputeDlg)
	enum { IDD = IDD_COMPUTE };
		// HINWEIS: Der Klassen-Assistent fügt hier Datenelemente ein
	//}}AFX_DATA


// Überschreibungen
	// Vom Klassen-Assistenten generierte virtuelle Funktionsüberschreibungen
	//{{AFX_VIRTUAL(CComputeDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV-Unterstützung
	//}}AFX_VIRTUAL

// Implementierung
protected:

	// Generierte Nachrichtenzuordnungsfunktionen
	//{{AFX_MSG(CComputeDlg)
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg void OnStart();
	virtual void OnCancel();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ fügt unmittelbar vor der vorhergehenden Zeile zusätzliche Deklarationen ein.

#endif // AFX_COMPUTEDLG_H__C8A7A860_40FD_11D2_A4E4_00403394CA84__INCLUDED_
