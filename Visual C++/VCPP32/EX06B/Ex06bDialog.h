#ifndef __EX06BDIALOG_H__
#define __EX06BDIALOG_H__

#if _MSC_VER >= 1000
#pragma once
#endif // _MSC_VER >= 1000

// Ex06bDialog.h :Header-Datei
//

/////////////////////////////////////////////////////////////////////////////
// Dialogfeld CEx06bDialog 

class CEx06bDialog : public CDialog
{
// Konstruktion
public:
	int m_nTrackbar2;
	int m_nTrackbar1;
	int m_nProgress;
	CEx06bDialog(CWnd* pParent = NULL);   // Standardkonstruktor

// Dialogfelddaten
	//{{AFX_DATA(CEx06bDialog)
	enum { IDD = IDD_DIALOG1 };
	double	m_dSpin;
	//}}AFX_DATA


// �berladungen
	// Vom Klassenassistenten generierte �berladungen virtueller Funktionen
	//{{AFX_VIRTUAL(CEx06bDialog)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV-Unterst�tzung
	//}}AFX_VIRTUAL

// Implementierung
protected:

	// Generierte Nachrichtenzuordnungsfunktionen
	//{{AFX_MSG(CEx06bDialog)
	virtual BOOL OnInitDialog();
	afx_msg void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg void OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	afx_msg void OnItemchangedListview1(NMHDR* pNMHDR, LRESULT* pResult);
	afx_msg void OnSelchangedTreeview1(NMHDR* pNMHDR, LRESULT* pResult);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
private:
	static double dValue[];
	CImageList m_imageList;
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Developer Studio f�gt zus�tzliche Deklarationen unmittelbar vor der vorhergehenden Zeile ein.

#endif // __EX06BDIALOG_H__
