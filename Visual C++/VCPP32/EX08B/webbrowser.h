#if !defined(AFX_WEBBROWSER_H__D7A96B47_3FE9_11D2_A4E4_00403394CA84__INCLUDED_)
#define AFX_WEBBROWSER_H__D7A96B47_3FE9_11D2_A4E4_00403394CA84__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// Mit Microsoft Visual C++ automatisch erstellte IDispatch-Kapselungsklasse(n). 

// HINWEIS: Die Inhalte dieser Datei nicht ändern. Wenn Microsoft Visual C++
// diese Klasse erneuert, werden Ihre Änderungen überschrieben.

/////////////////////////////////////////////////////////////////////////////
// Wrapper-Klasse CWebBrowser 

class CWebBrowser : public CWnd
{
protected:
	DECLARE_DYNCREATE(CWebBrowser)
public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0x8856f961, 0x340a, 0x11d0, { 0xa9, 0x6b, 0x0, 0xc0, 0x4f, 0xd7, 0x5, 0xa2 } };
		return clsid;
	}
	virtual BOOL Create(LPCTSTR lpszClassName,
		LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect,
		CWnd* pParentWnd, UINT nID,
		CCreateContext* pContext = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID); }

    BOOL Create(LPCTSTR lpszWindowName, DWORD dwStyle,
		const RECT& rect, CWnd* pParentWnd, UINT nID,
		CFile* pPersist = NULL, BOOL bStorage = FALSE,
		BSTR bstrLicKey = NULL)
	{ return CreateControl(GetClsid(), lpszWindowName, dwStyle, rect, pParentWnd, nID,
		pPersist, bStorage, bstrLicKey); }

// Attribute
public:

// Operationen
public:
	void GoBack();
	void GoForward();
	void GoHome();
	void GoSearch();
	void Navigate(LPCTSTR URL, VARIANT* Flags, VARIANT* TargetFrameName, VARIANT* PostData, VARIANT* Headers);
	void Refresh();
	void Refresh2(VARIANT* Level);
	void Stop();
	LPDISPATCH GetApplication();
	LPDISPATCH GetParent();
	LPDISPATCH GetContainer();
	LPDISPATCH GetDocument();
	BOOL GetTopLevelContainer();
	CString GetType();
	long GetLeft();
	void SetLeft(long nNewValue);
	long GetTop();
	void SetTop(long nNewValue);
	long GetWidth();
	void SetWidth(long nNewValue);
	long GetHeight();
	void SetHeight(long nNewValue);
	CString GetLocationName();
	CString GetLocationURL();
	BOOL GetBusy();
	void Quit();
	void ClientToWindow(long* pcx, long* pcy);
	void PutProperty(LPCTSTR Property_, const VARIANT& vtValue);
	VARIANT GetProperty_(LPCTSTR Property_);
	CString GetName();
	long GetHwnd();
	CString GetFullName();
	CString GetPath();
	BOOL GetVisible();
	void SetVisible(BOOL bNewValue);
	BOOL GetStatusBar();
	void SetStatusBar(BOOL bNewValue);
	CString GetStatusText();
	void SetStatusText(LPCTSTR lpszNewValue);
	long GetToolBar();
	void SetToolBar(long nNewValue);
	BOOL GetMenuBar();
	void SetMenuBar(BOOL bNewValue);
	BOOL GetFullScreen();
	void SetFullScreen(BOOL bNewValue);
	void Navigate2(VARIANT* URL, VARIANT* Flags, VARIANT* TargetFrameName, VARIANT* PostData, VARIANT* Headers);
	long QueryStatusWB(long cmdID);
	void ExecWB(long cmdID, long cmdexecopt, VARIANT* pvaIn, VARIANT* pvaOut);
	void ShowBrowserBar(VARIANT* pvaClsid, VARIANT* pvarShow, VARIANT* pvarSize);
	long GetReadyState();
	BOOL GetOffline();
	void SetOffline(BOOL bNewValue);
	BOOL GetSilent();
	void SetSilent(BOOL bNewValue);
	BOOL GetRegisterAsBrowser();
	void SetRegisterAsBrowser(BOOL bNewValue);
	BOOL GetRegisterAsDropTarget();
	void SetRegisterAsDropTarget(BOOL bNewValue);
	BOOL GetTheaterMode();
	void SetTheaterMode(BOOL bNewValue);
	BOOL GetAddressBar();
	void SetAddressBar(BOOL bNewValue);
	BOOL GetResizable();
	void SetResizable(BOOL bNewValue);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ fügt unmittelbar vor der vorhergehenden Zeile zusätzliche Deklarationen ein.

#endif // AFX_WEBBROWSER_H__D7A96B47_3FE9_11D2_A4E4_00403394CA84__INCLUDED_
