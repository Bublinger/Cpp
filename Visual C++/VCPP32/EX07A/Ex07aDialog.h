#ifndef AFX_EX07ADIALOG_H__BF8B4254_EBBF_11D0_A68E_00009290A263__INCLUDED_
#define AFX_EX07ADIALOG_H__BF8B4254_EBBF_11D0_A68E_00009290A263__INCLUDED_

// Ex07aDialog.h : Header-Datei
//

/////////////////////////////////////////////////////////////////////////////
// Dialogfeld CEx07aDialog 

#define WM_GOODBYE WM_USER + 5

class CEx07aDialog : public CDialog
{
private:
	CView* m_pView;
public:
	CEx07aDialog(CView* pView);
	BOOL Create();

// Konstruktion
public:
	CEx07aDialog(CWnd* pParent = NULL);   // Standardkonstruktor

// Dialogfelddaten
	//{{AFX_DATA(CEx07aDialog)
	enum { IDD = IDD_DIALOG1 };
	CString	m_strEdit1;
	//}}AFX_DATA


// Überschreibungen
	// Vom Klassen-Assistenten generierte virtuelle Funktionsüberschreibungen
	//{{AFX_VIRTUAL(CEx07aDialog)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV-Unterstützung
	//}}AFX_VIRTUAL

// Implementierung
protected:

	// Generierte Nachrichtenzuordnungsfunktionen
	//{{AFX_MSG(CEx07aDialog)
	virtual void OnCancel();
	virtual void OnOK();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio fügt zusätzliche Deklarationen unmittelbar vor der vorhergehenden Zeile ein.

#endif // AFX_EX07ADIALOG_H__BF8B4254_EBBF_11D0_A68E_00009290A263__INCLUDED_
