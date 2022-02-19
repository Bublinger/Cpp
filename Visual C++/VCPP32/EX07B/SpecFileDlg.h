#ifndef AFX_SPECFILEDLG_H__C9B91B54_D871_11D0_A68E_00009290A263__INCLUDED_
#define AFX_SPECFILEDLG_H__C9B91B54_D871_11D0_A68E_00009290A263__INCLUDED_

// SpecFileDlg.h : Header-Datei
//

/////////////////////////////////////////////////////////////////////////////
// Dialogfeld CSpecialFileDialog 

class CSpecialFileDialog : public CFileDialog
{
public:
	CString m_strFilename;
	BOOL m_bDeleteAll;

// Konstruktion
public:
	CSpecialFileDialog(BOOL bOpenFileDialog, // TRUE f�r FileOpen, FALSE f�r FileSaveAs
		LPCTSTR lpszDefExt = NULL,
		LPCTSTR lpszFileName = NULL,
		DWORD dwFlags = OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT,
		LPCTSTR lpszFilter = NULL,
		CWnd* pParentWnd = NULL);


// Dialogfelddaten
	//{{AFX_DATA(CSpecialFileDialog)
	enum { IDD = IDD_FILESPECIAL };
		// HINWEIS: Der Klassen-Assistent f�gt hier Datenelemente ein
	//}}AFX_DATA


// �berschreibungen
	// Vom Klassen-Assistenten generierte virtuelle Funktions�berschreibungen
	//{{AFX_VIRTUAL(CSpecialFileDialog)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV-Unterst�tzung
	//}}AFX_VIRTUAL

// Implementierung
protected:

	// Generierte Nachrichtenzuordnungsfunktionen
	//{{AFX_MSG(CSpecialFileDialog)
	virtual BOOL OnInitDialog();
	afx_msg void OnDelete();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio f�gt zus�tzliche Deklarationen unmittelbar vor der vorhergehenden Zeile ein.

#endif // AFX_SPECFILEDLG_H__C9B91B54_D871_11D0_A68E_00009290A263__INCLUDED_
