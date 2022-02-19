// ex08bView.h : Schnittstelle der Klasse CEx08bView
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_EX08BVIEW_H__D7A96B3F_3FE9_11D2_A4E4_00403394CA84__INCLUDED_)
#define AFX_EX08BVIEW_H__D7A96B3F_3FE9_11D2_A4E4_00403394CA84__INCLUDED_

#include "webbrowser.h"	// Hinzugefügt von der Klassenansicht
#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CEx08bView : public CView
{
private:
	static const char s_engineAltavista[];
protected: // Nur aus Serialisierung erzeugen
	CEx08bView();
	DECLARE_DYNCREATE(CEx08bView)

// Attribute
public:
	CEx08bDoc* GetDocument();

// Operationen
public:

// Überladungen
	// Vom Klassenassistenten generierte Überladungen virtueller Funktionen
	//{{AFX_VIRTUAL(CEx08bView)
	public:
	virtual void OnDraw(CDC* pDC);  // überladen zum Zeichnen dieser Ansicht
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
	protected:
	//}}AFX_VIRTUAL

// Implementierung
	virtual ~CEx08bView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generierte Message-Map-Funktionen
protected:
	//{{AFX_MSG(CEx08bView)
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()

protected:
	afx_msg void OnBeforeNavigateExplorer1(LPCTSTR URL,
		long Flags, LPCTSTR TargetFrameName,
		VARIANT FAR* PostData, LPCTSTR Headers, BOOL FAR* Cancel);
	afx_msg void OnTitleChangeExplorer2(LPCTSTR Text);
	DECLARE_EVENTSINK_MAP()

private:
	CWebBrowser m_search;
	CWebBrowser m_target;
};

#ifndef _DEBUG  // Testversion in ex08bView.cpp
inline CEx08bDoc* CEx08bView::GetDocument()
   { return (CEx08bDoc*)m_pDocument; }
#endif

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ fügt unmittelbar vor der vorhergehenden Zeile zusätzliche Deklarationen ein.

#endif // !defined(AFX_EX08BVIEW_H__D7A96B3F_3FE9_11D2_A4E4_00403394CA84__INCLUDED_)
