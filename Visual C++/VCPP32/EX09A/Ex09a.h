// Ex09a.h : Haupt-Header-Datei f�r die Anwendung EX09A
//

#if !defined(AFX_EX09A_H__61CB9EEA_2F96_11D2_A4E4_00403394CA84__INCLUDED_)
#define AFX_EX09A_H__61CB9EEA_2F96_11D2_A4E4_00403394CA84__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // Hauptsymbole

/////////////////////////////////////////////////////////////////////////////
// CEx09aApp:
// Siehe Ex09a.cpp f�r die Implementierung dieser Klasse
//

class CEx09aApp : public CWinApp
{
public:
	CEx09aApp();

// �berladungen
	// Vom Klassenassistenten generierte �berladungen virtueller Funktionen
	//{{AFX_VIRTUAL(CEx09aApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementierung
	//{{AFX_MSG(CEx09aApp)
	afx_msg void OnAppAbout();
		// HINWEIS - An dieser Stelle werden Member-Funktionen vom Klassen-Assistenten eingef�gt und entfernt.
		//    Innerhalb dieser generierten Quelltextabschnitte NICHTS VER�NDERN!
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ f�gt unmittelbar vor der vorhergehenden Zeile zus�tzliche Deklarationen ein.

#endif // !defined(AFX_EX09A_H__61CB9EEA_2F96_11D2_A4E4_00403394CA84__INCLUDED_)
