#pragma once
#if !defined(PINUPPLAYERPINDISPLAY_C_H__INCLUDED_)
#define PINUPPLAYERPINDISPLAY_C_H__INCLUDED_

#pragma GCC visibility push(hidden)

#include "pinupplayer_i.h"

class PinUpPlayerPinDisplay :
   public IDispatchImpl<IPinDisplay, &IID_IPinDisplay, &LIBID_PinUpPlayer>,
   public CComObjectRoot,
   public CComCoClass<PinUpPlayerPinDisplay, &CLSID_PinDisplay>
{
public:
   STDMETHOD(GetIDsOfNames)(REFIID /*riid*/, LPOLESTR* rgszNames, UINT cNames, LCID lcid,DISPID* rgDispId);
   STDMETHOD(Invoke)(DISPID dispIdMember, REFIID /*riid*/, LCID lcid, WORD wFlags, DISPPARAMS* pDispParams, VARIANT* pVarResult, EXCEPINFO* pExcepInfo, UINT* puArgErr);
   STDMETHOD(GetDocumentation)(INT index, BSTR *pBstrName, BSTR *pBstrDocString, DWORD *pdwHelpContext, BSTR *pBstrHelpFile);

public:
   PinUpPlayerPinDisplay();
   ~PinUpPlayerPinDisplay();

   BEGIN_COM_MAP(PinUpPlayerPinDisplay)
      COM_INTERFACE_ENTRY(IPinDisplay)
      COM_INTERFACE_ENTRY(IDispatch)
   END_COM_MAP()

   STDMETHOD(Init)(LONG ScreenNum, BSTR RootDir);
   STDMETHOD(playlistadd)(LONG ScreenNum, BSTR folder, LONG sort, LONG restSeconds);
   STDMETHOD(playlistplay)(LONG ScreenNum, BSTR playlist);
   STDMETHOD(playlistplayex)(LONG ScreenNum, BSTR playlist, BSTR playfilename, LONG volume, LONG forceplay);
   STDMETHOD(play)(LONG ScreenNum, BSTR playlist, BSTR playfilename);
   STDMETHOD(setWidth)(LONG ScreenNum, LONG width);
   STDMETHOD(setHeight)(LONG ScreenNum, LONG Height);
   STDMETHOD(setPosX)(LONG ScreenNum, LONG Posx);
   STDMETHOD(setPosY)(LONG ScreenNum, LONG PosY);
   STDMETHOD(setAspect)(LONG ScreenNum, LONG aspectWide, LONG aspectHigh);
   STDMETHOD(setVolume)(LONG ScreenNum, LONG vol);
   STDMETHOD(playpause)(LONG ScreenNum);
   STDMETHOD(playresume)(LONG ScreenNum);
   STDMETHOD(playstop)(LONG ScreenNum);
   STDMETHOD(CloseApp)();
   STDMETHOD(get_isPlaying)(LONG ScreenNum, LONG *Value);
   STDMETHOD(put_isPlaying)(LONG ScreenNum, LONG Value);
   STDMETHOD(SetLength)(LONG ScreenNum, LONG StopSecs);
   STDMETHOD(SetLoop)(LONG ScreenNum, LONG LoopState);
   STDMETHOD(SetBackGround)(LONG ScreenNum, LONG Mode);
   STDMETHOD(BlockPlay)(LONG ScreenNum, LONG Mode);
   STDMETHOD(SetScreen)(LONG ScreenNum);
   STDMETHOD(SetScreenEx)(LONG ScreenNum, LONG xpos, LONG ypos, LONG swidth, LONG sheight, LONG popup);
   STDMETHOD(get_SN)(LONG *Value);
   STDMETHOD(put_SN)(LONG Value);
   STDMETHOD(B2SData)(BSTR tIndex, int Value);
   STDMETHOD(get_B2SFilter)(BSTR *Value);
   STDMETHOD(put_B2SFilter)(BSTR Value);
   STDMETHOD(Show)(LONG ScreenNum);
   STDMETHOD(Hide)(LONG ScreenNum);
   STDMETHOD(B2SInit)(BSTR TName, BSTR RomName);
   STDMETHOD(SendMSG)(BSTR cMSG);
   STDMETHOD(LabelNew)(LONG ScreenNum, BSTR LabelName, BSTR FontName, LONG Size, LONG Color, LONG Angle, LONG xAlign, LONG yAlign, LONG xMargin, LONG yMargin, LONG PageNum, LONG Visible);
   STDMETHOD(LabelSet)(LONG ScreenNum, BSTR LabelName, BSTR Caption, LONG Visible, BSTR Special);
   STDMETHOD(LabelSetEx)();
   STDMETHOD(LabelShowPage)(LONG ScreenNum, LONG PageNum, LONG Seconds, BSTR Special);
   STDMETHOD(LabelInit)(LONG ScreenNum);
   STDMETHOD(get_GetGame)(BSTR *Value);
   STDMETHOD(put_GetGame)(BSTR Value);
   STDMETHOD(get_GetRoot)(BSTR *Value);
   STDMETHOD(put_GetRoot)(BSTR Value);
   STDMETHOD(SoundAdd)(BSTR sname, BSTR fname, LONG svol, double sX, double sy, BSTR SP);
   STDMETHOD(SoundPlay)(BSTR sname);
   STDMETHOD(PuPSound)(BSTR sname, LONG sX, LONG sy, LONG sz, LONG vol, BSTR SP);
   STDMETHOD(InitPuPMenu)(LONG Param1);
   STDMETHOD(get_B2SDisplays)(BSTR *Value);
   STDMETHOD(setVolumeCurrent)(LONG ScreenNum, LONG vol);
   STDMETHOD(get_GameUpdate)(BSTR GameTitle, LONG Func, LONG FuncData, BSTR Extra, LONG *Value);
};

#pragma GCC visibility pop

#endif // !defined(PINUPPLAYERPINDISPLAY_C_H__INCLUDED_)
