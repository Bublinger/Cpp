// Mit Microsoft Visual C++ automatisch erstellte IDispatch-Kapselungsklasse(n). 

// HINWEIS: Die Inhalte dieser Datei nicht ändern. Wenn Microsoft Visual C++
// diese Klasse erneuert, werden Ihre Änderungen überschrieben.


// Dispatch-Schnittstellen, auf die von dieser Schnittstelle verwiesen wird
class COleFont;

/////////////////////////////////////////////////////////////////////////////
// Wrapper-Klasse CCalendar 

class CCalendar : public CWnd
{
protected:
	DECLARE_DYNCREATE(CCalendar)

protected:
	afx_msg BOOL OnHelpInfo(HELPINFO* pHelpInfo);
	DECLARE_MESSAGE_MAP()

public:
	CLSID const& GetClsid()
	{
		static CLSID const clsid
			= { 0x8e27c92b, 0x1264, 0x101c, { 0x8a, 0x2f, 0x4, 0x2, 0x24, 0x0, 0x9c, 0x2 } };
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
	unsigned long GetHintergrundfarbe();
	void SetHintergrundfarbe(unsigned long newValue);
	short GetTag();
	void SetTag(short nNewValue);
	COleFont GetTagSchriftart();
	void SetTagSchriftart(LPDISPATCH newValue);
	unsigned long GetTagSchriftfarbe();
	void SetTagSchriftfarbe(unsigned long newValue);
	short GetLngeDesTages_1();	// GetLängeDesTages
	void SetLngeDesTages_2(short nNewValue);	// SetLängeDesTages
	short GetErsterTag();
	void SetErsterTag(short nNewValue);
	long GetRastereffekt();
	void SetRastereffekt(long nNewValue);
	COleFont GetGitterSchriftart();
	void SetGitterSchriftart(LPDISPATCH newValue);
	unsigned long GetGitterSchriftfarbe();
	void SetGitterSchriftfarbe(unsigned long newValue);
	unsigned long GetGitterZeilenfarbe();
	void SetGitterZeilenfarbe(unsigned long newValue);
	short GetMonat();
	void SetMonat(short nNewValue);
	short GetMonatLnge_3();	// GetMonatLänge
	void SetMonatLnge_4(short nNewValue);	// SetMonatLänge
	BOOL GetDatumsmarkierer();
	void SetDatumsmarkierer(BOOL bNewValue);
	BOOL GetTageAnzeigen();
	void SetTageAnzeigen(BOOL bNewValue);
	BOOL GetHorizontalesRaster();
	void SetHorizontalesRaster(BOOL bNewValue);
	BOOL GetTitelAnzeigen();
	void SetTitelAnzeigen(BOOL bNewValue);
	BOOL GetVertikalesRaster();
	void SetVertikalesRaster(BOOL bNewValue);
	COleFont GetTitelSchriftart();
	void SetTitelSchriftart(LPDISPATCH newValue);
	unsigned long GetTitelSchriftfarbe();
	void SetTitelSchriftfarbe(unsigned long newValue);
	VARIANT GetWert();
	void SetWert(const VARIANT& newValue);
	BOOL GetWertIstNull();
	void SetWertIstNull(BOOL bNewValue);
	short GetJahr();
	void SetJahr(short nNewValue);
	void NextDay();
	void NextMonth();
	void NextWeek();
	void NextYear();
	void PreviousDay();
	void PreviousMonth();
	void PreviousWeek();
	void PreviousYear();
	void Refresh();
	void Today();
	void AboutBox();
};
