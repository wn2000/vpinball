/*** Autogenerated by WIDL 8.1 from ../inc/pup/PinUpPlayer.idl - Do not edit ***/

#ifdef _WIN32
#ifndef __REQUIRED_RPCNDR_H_VERSION__
#define __REQUIRED_RPCNDR_H_VERSION__ 475
#endif
#include <rpc.h>
#include <rpcndr.h>
#endif

#ifndef COM_NO_WINDOWS_H
#include <windows.h>
#include <ole2.h>
#endif

#ifndef __pinupplayer_i_h__
#define __pinupplayer_i_h__

#ifndef __WIDL_INLINE
#if defined(__cplusplus) || defined(_MSC_VER)
#define __WIDL_INLINE inline
#elif defined(__GNUC__)
#define __WIDL_INLINE __inline__
#endif
#endif

/* Forward declarations */

#ifndef __IPinDisplay_FWD_DEFINED__
#define __IPinDisplay_FWD_DEFINED__
typedef interface IPinDisplay IPinDisplay;
#ifdef __cplusplus
interface IPinDisplay;
#endif /* __cplusplus */
#endif

#ifndef __PinDisplay_FWD_DEFINED__
#define __PinDisplay_FWD_DEFINED__
#ifdef __cplusplus
typedef class PinDisplay PinDisplay;
#else
typedef struct PinDisplay PinDisplay;
#endif /* defined __cplusplus */
#endif /* defined __PinDisplay_FWD_DEFINED__ */

/* Headers for imported files */

#include <oaidl.h>
#include <ocidl.h>

#ifdef __cplusplus
extern "C" {
#endif

#ifndef __PinUpPlayer_LIBRARY_DEFINED__
#define __PinUpPlayer_LIBRARY_DEFINED__

DEFINE_GUID(LIBID_PinUpPlayer, 0xd50f2477, 0x84e8, 0x4ced, 0x94,0x09, 0x37,0x35,0xca,0x67,0xfd,0xe3);

#ifndef __IPinDisplay_FWD_DEFINED__
#define __IPinDisplay_FWD_DEFINED__
typedef interface IPinDisplay IPinDisplay;
#ifdef __cplusplus
interface IPinDisplay;
#endif /* __cplusplus */
#endif

/*****************************************************************************
 * IPinDisplay interface
 */
#ifndef __IPinDisplay_INTERFACE_DEFINED__
#define __IPinDisplay_INTERFACE_DEFINED__

DEFINE_GUID(IID_IPinDisplay, 0x7a2ccc8d, 0x6aed, 0x43be, 0x8e,0xbd, 0x4d,0x2c,0xd8,0x02,0xf4,0xce);
#if defined(__cplusplus) && !defined(CINTERFACE)
MIDL_INTERFACE("7a2ccc8d-6aed-43be-8ebd-4d2cd802f4ce")
IPinDisplay : public IDispatch
{
    virtual HRESULT STDMETHODCALLTYPE Init(
        LONG ScreenNum,
        BSTR RootDir) = 0;

    virtual HRESULT STDMETHODCALLTYPE playlistadd(
        LONG ScreenNum,
        BSTR folder,
        LONG sort,
        LONG restSeconds) = 0;

    virtual HRESULT STDMETHODCALLTYPE playlistplay(
        LONG ScreenNum,
        BSTR playlist) = 0;

    virtual HRESULT STDMETHODCALLTYPE playlistplayex(
        LONG ScreenNum,
        BSTR playlist,
        BSTR playfilename,
        LONG volume,
        LONG forceplay) = 0;

    virtual HRESULT STDMETHODCALLTYPE play(
        LONG ScreenNum,
        BSTR playlist,
        BSTR playfilename) = 0;

    virtual HRESULT STDMETHODCALLTYPE setWidth(
        LONG ScreenNum,
        LONG width) = 0;

    virtual HRESULT STDMETHODCALLTYPE setHeight(
        LONG ScreenNum,
        LONG Height) = 0;

    virtual HRESULT STDMETHODCALLTYPE setPosX(
        LONG ScreenNum,
        LONG Posx) = 0;

    virtual HRESULT STDMETHODCALLTYPE setPosY(
        LONG ScreenNum,
        LONG PosY) = 0;

    virtual HRESULT STDMETHODCALLTYPE setAspect(
        LONG ScreenNum,
        LONG aspectWide,
        LONG aspectHigh) = 0;

    virtual HRESULT STDMETHODCALLTYPE setVolume(
        LONG ScreenNum,
        LONG vol) = 0;

    virtual HRESULT STDMETHODCALLTYPE playpause(
        LONG ScreenNum) = 0;

    virtual HRESULT STDMETHODCALLTYPE playresume(
        LONG ScreenNum) = 0;

    virtual HRESULT STDMETHODCALLTYPE playstop(
        LONG ScreenNum) = 0;

    virtual HRESULT STDMETHODCALLTYPE CloseApp(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_isPlaying(
        LONG ScreenNum,
        LONG *Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE put_isPlaying(
        LONG ScreenNum,
        LONG Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetLength(
        LONG ScreenNum,
        LONG StopSecs) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetLoop(
        LONG ScreenNum,
        LONG LoopState) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetBackGround(
        LONG ScreenNum,
        LONG Mode) = 0;

    virtual HRESULT STDMETHODCALLTYPE BlockPlay(
        LONG ScreenNum,
        LONG Mode) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetScreen(
        LONG ScreenNum) = 0;

    virtual HRESULT STDMETHODCALLTYPE SetScreenEx(
        LONG ScreenNum,
        LONG xpos,
        LONG ypos,
        LONG swidth,
        LONG sheight,
        LONG popup) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_SN(
        LONG *Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE put_SN(
        LONG Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE B2SData(
        BSTR tIndex,
        int Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_B2SFilter(
        BSTR *Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE put_B2SFilter(
        BSTR Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE Show(
        LONG ScreenNum) = 0;

    virtual HRESULT STDMETHODCALLTYPE Hide(
        LONG ScreenNum) = 0;

    virtual HRESULT STDMETHODCALLTYPE B2SInit(
        BSTR TName,
        BSTR RomName) = 0;

    virtual HRESULT STDMETHODCALLTYPE SendMSG(
        BSTR cMSG) = 0;

    virtual HRESULT STDMETHODCALLTYPE LabelNew(
        LONG ScreenNum,
        BSTR LabelName,
        BSTR FontName,
        LONG Size,
        LONG Color,
        LONG Angle,
        LONG xAlign,
        LONG yAlign,
        LONG xMargin,
        LONG yMargin,
        LONG PageNum,
        LONG Visible) = 0;

    virtual HRESULT STDMETHODCALLTYPE LabelSet(
        LONG ScreenNum,
        BSTR LabelName,
        BSTR Caption,
        LONG Visible,
        BSTR Special) = 0;

    virtual HRESULT STDMETHODCALLTYPE LabelSetEx(
        ) = 0;

    virtual HRESULT STDMETHODCALLTYPE LabelShowPage(
        LONG ScreenNum,
        LONG PageNum,
        LONG Seconds,
        BSTR Special) = 0;

    virtual HRESULT STDMETHODCALLTYPE LabelInit(
        LONG ScreenNum) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_GetGame(
        BSTR *Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE put_GetGame(
        BSTR Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_GetRoot(
        BSTR *Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE put_GetRoot(
        BSTR Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE SoundAdd(
        BSTR sname,
        BSTR fname,
        LONG svol,
        double sX,
        double sy,
        BSTR SP) = 0;

    virtual HRESULT STDMETHODCALLTYPE SoundPlay(
        BSTR sname) = 0;

    virtual HRESULT STDMETHODCALLTYPE PuPSound(
        BSTR sname,
        LONG sX,
        LONG sy,
        LONG sz,
        LONG vol,
        BSTR SP) = 0;

    virtual HRESULT STDMETHODCALLTYPE InitPuPMenu(
        LONG Param1) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_B2SDisplays(
        BSTR *Value) = 0;

    virtual HRESULT STDMETHODCALLTYPE setVolumeCurrent(
        LONG ScreenNum,
        LONG vol) = 0;

    virtual HRESULT STDMETHODCALLTYPE get_GameUpdate(
        BSTR GameTitle,
        LONG Func,
        LONG FuncData,
        BSTR Extra,
        LONG *Value) = 0;

};
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(IPinDisplay, 0x7a2ccc8d, 0x6aed, 0x43be, 0x8e,0xbd, 0x4d,0x2c,0xd8,0x02,0xf4,0xce)
#endif
#else
typedef struct IPinDisplayVtbl {
    BEGIN_INTERFACE

    /*** IUnknown methods ***/
    HRESULT (STDMETHODCALLTYPE *QueryInterface)(
        IPinDisplay *This,
        REFIID riid,
        void **ppvObject);

    ULONG (STDMETHODCALLTYPE *AddRef)(
        IPinDisplay *This);

    ULONG (STDMETHODCALLTYPE *Release)(
        IPinDisplay *This);

    /*** IDispatch methods ***/
    HRESULT (STDMETHODCALLTYPE *GetTypeInfoCount)(
        IPinDisplay *This,
        UINT *pctinfo);

    HRESULT (STDMETHODCALLTYPE *GetTypeInfo)(
        IPinDisplay *This,
        UINT iTInfo,
        LCID lcid,
        ITypeInfo **ppTInfo);

    HRESULT (STDMETHODCALLTYPE *GetIDsOfNames)(
        IPinDisplay *This,
        REFIID riid,
        LPOLESTR *rgszNames,
        UINT cNames,
        LCID lcid,
        DISPID *rgDispId);

    HRESULT (STDMETHODCALLTYPE *Invoke)(
        IPinDisplay *This,
        DISPID dispIdMember,
        REFIID riid,
        LCID lcid,
        WORD wFlags,
        DISPPARAMS *pDispParams,
        VARIANT *pVarResult,
        EXCEPINFO *pExcepInfo,
        UINT *puArgErr);

    /*** IPinDisplay methods ***/
    HRESULT (STDMETHODCALLTYPE *Init)(
        IPinDisplay *This,
        LONG ScreenNum,
        BSTR RootDir);

    HRESULT (STDMETHODCALLTYPE *playlistadd)(
        IPinDisplay *This,
        LONG ScreenNum,
        BSTR folder,
        LONG sort,
        LONG restSeconds);

    HRESULT (STDMETHODCALLTYPE *playlistplay)(
        IPinDisplay *This,
        LONG ScreenNum,
        BSTR playlist);

    HRESULT (STDMETHODCALLTYPE *playlistplayex)(
        IPinDisplay *This,
        LONG ScreenNum,
        BSTR playlist,
        BSTR playfilename,
        LONG volume,
        LONG forceplay);

    HRESULT (STDMETHODCALLTYPE *play)(
        IPinDisplay *This,
        LONG ScreenNum,
        BSTR playlist,
        BSTR playfilename);

    HRESULT (STDMETHODCALLTYPE *setWidth)(
        IPinDisplay *This,
        LONG ScreenNum,
        LONG width);

    HRESULT (STDMETHODCALLTYPE *setHeight)(
        IPinDisplay *This,
        LONG ScreenNum,
        LONG Height);

    HRESULT (STDMETHODCALLTYPE *setPosX)(
        IPinDisplay *This,
        LONG ScreenNum,
        LONG Posx);

    HRESULT (STDMETHODCALLTYPE *setPosY)(
        IPinDisplay *This,
        LONG ScreenNum,
        LONG PosY);

    HRESULT (STDMETHODCALLTYPE *setAspect)(
        IPinDisplay *This,
        LONG ScreenNum,
        LONG aspectWide,
        LONG aspectHigh);

    HRESULT (STDMETHODCALLTYPE *setVolume)(
        IPinDisplay *This,
        LONG ScreenNum,
        LONG vol);

    HRESULT (STDMETHODCALLTYPE *playpause)(
        IPinDisplay *This,
        LONG ScreenNum);

    HRESULT (STDMETHODCALLTYPE *playresume)(
        IPinDisplay *This,
        LONG ScreenNum);

    HRESULT (STDMETHODCALLTYPE *playstop)(
        IPinDisplay *This,
        LONG ScreenNum);

    HRESULT (STDMETHODCALLTYPE *CloseApp)(
        IPinDisplay *This);

    HRESULT (STDMETHODCALLTYPE *get_isPlaying)(
        IPinDisplay *This,
        LONG ScreenNum,
        LONG *Value);

    HRESULT (STDMETHODCALLTYPE *put_isPlaying)(
        IPinDisplay *This,
        LONG ScreenNum,
        LONG Value);

    HRESULT (STDMETHODCALLTYPE *SetLength)(
        IPinDisplay *This,
        LONG ScreenNum,
        LONG StopSecs);

    HRESULT (STDMETHODCALLTYPE *SetLoop)(
        IPinDisplay *This,
        LONG ScreenNum,
        LONG LoopState);

    HRESULT (STDMETHODCALLTYPE *SetBackGround)(
        IPinDisplay *This,
        LONG ScreenNum,
        LONG Mode);

    HRESULT (STDMETHODCALLTYPE *BlockPlay)(
        IPinDisplay *This,
        LONG ScreenNum,
        LONG Mode);

    HRESULT (STDMETHODCALLTYPE *SetScreen)(
        IPinDisplay *This,
        LONG ScreenNum);

    HRESULT (STDMETHODCALLTYPE *SetScreenEx)(
        IPinDisplay *This,
        LONG ScreenNum,
        LONG xpos,
        LONG ypos,
        LONG swidth,
        LONG sheight,
        LONG popup);

    HRESULT (STDMETHODCALLTYPE *get_SN)(
        IPinDisplay *This,
        LONG *Value);

    HRESULT (STDMETHODCALLTYPE *put_SN)(
        IPinDisplay *This,
        LONG Value);

    HRESULT (STDMETHODCALLTYPE *B2SData)(
        IPinDisplay *This,
        BSTR tIndex,
        int Value);

    HRESULT (STDMETHODCALLTYPE *get_B2SFilter)(
        IPinDisplay *This,
        BSTR *Value);

    HRESULT (STDMETHODCALLTYPE *put_B2SFilter)(
        IPinDisplay *This,
        BSTR Value);

    HRESULT (STDMETHODCALLTYPE *Show)(
        IPinDisplay *This,
        LONG ScreenNum);

    HRESULT (STDMETHODCALLTYPE *Hide)(
        IPinDisplay *This,
        LONG ScreenNum);

    HRESULT (STDMETHODCALLTYPE *B2SInit)(
        IPinDisplay *This,
        BSTR TName,
        BSTR RomName);

    HRESULT (STDMETHODCALLTYPE *SendMSG)(
        IPinDisplay *This,
        BSTR cMSG);

    HRESULT (STDMETHODCALLTYPE *LabelNew)(
        IPinDisplay *This,
        LONG ScreenNum,
        BSTR LabelName,
        BSTR FontName,
        LONG Size,
        LONG Color,
        LONG Angle,
        LONG xAlign,
        LONG yAlign,
        LONG xMargin,
        LONG yMargin,
        LONG PageNum,
        LONG Visible);

    HRESULT (STDMETHODCALLTYPE *LabelSet)(
        IPinDisplay *This,
        LONG ScreenNum,
        BSTR LabelName,
        BSTR Caption,
        LONG Visible,
        BSTR Special);

    HRESULT (STDMETHODCALLTYPE *LabelSetEx)(
        IPinDisplay *This);

    HRESULT (STDMETHODCALLTYPE *LabelShowPage)(
        IPinDisplay *This,
        LONG ScreenNum,
        LONG PageNum,
        LONG Seconds,
        BSTR Special);

    HRESULT (STDMETHODCALLTYPE *LabelInit)(
        IPinDisplay *This,
        LONG ScreenNum);

    HRESULT (STDMETHODCALLTYPE *get_GetGame)(
        IPinDisplay *This,
        BSTR *Value);

    HRESULT (STDMETHODCALLTYPE *put_GetGame)(
        IPinDisplay *This,
        BSTR Value);

    HRESULT (STDMETHODCALLTYPE *get_GetRoot)(
        IPinDisplay *This,
        BSTR *Value);

    HRESULT (STDMETHODCALLTYPE *put_GetRoot)(
        IPinDisplay *This,
        BSTR Value);

    HRESULT (STDMETHODCALLTYPE *SoundAdd)(
        IPinDisplay *This,
        BSTR sname,
        BSTR fname,
        LONG svol,
        double sX,
        double sy,
        BSTR SP);

    HRESULT (STDMETHODCALLTYPE *SoundPlay)(
        IPinDisplay *This,
        BSTR sname);

    HRESULT (STDMETHODCALLTYPE *PuPSound)(
        IPinDisplay *This,
        BSTR sname,
        LONG sX,
        LONG sy,
        LONG sz,
        LONG vol,
        BSTR SP);

    HRESULT (STDMETHODCALLTYPE *InitPuPMenu)(
        IPinDisplay *This,
        LONG Param1);

    HRESULT (STDMETHODCALLTYPE *get_B2SDisplays)(
        IPinDisplay *This,
        BSTR *Value);

    HRESULT (STDMETHODCALLTYPE *setVolumeCurrent)(
        IPinDisplay *This,
        LONG ScreenNum,
        LONG vol);

    HRESULT (STDMETHODCALLTYPE *get_GameUpdate)(
        IPinDisplay *This,
        BSTR GameTitle,
        LONG Func,
        LONG FuncData,
        BSTR Extra,
        LONG *Value);

    END_INTERFACE
} IPinDisplayVtbl;

interface IPinDisplay {
    CONST_VTBL IPinDisplayVtbl* lpVtbl;
};

#ifdef COBJMACROS
#ifndef WIDL_C_INLINE_WRAPPERS
/*** IUnknown methods ***/
#define IPinDisplay_QueryInterface(This,riid,ppvObject) (This)->lpVtbl->QueryInterface(This,riid,ppvObject)
#define IPinDisplay_AddRef(This) (This)->lpVtbl->AddRef(This)
#define IPinDisplay_Release(This) (This)->lpVtbl->Release(This)
/*** IDispatch methods ***/
#define IPinDisplay_GetTypeInfoCount(This,pctinfo) (This)->lpVtbl->GetTypeInfoCount(This,pctinfo)
#define IPinDisplay_GetTypeInfo(This,iTInfo,lcid,ppTInfo) (This)->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo)
#define IPinDisplay_GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) (This)->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId)
#define IPinDisplay_Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) (This)->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr)
/*** IPinDisplay methods ***/
#define IPinDisplay_Init(This,ScreenNum,RootDir) (This)->lpVtbl->Init(This,ScreenNum,RootDir)
#define IPinDisplay_playlistadd(This,ScreenNum,folder,sort,restSeconds) (This)->lpVtbl->playlistadd(This,ScreenNum,folder,sort,restSeconds)
#define IPinDisplay_playlistplay(This,ScreenNum,playlist) (This)->lpVtbl->playlistplay(This,ScreenNum,playlist)
#define IPinDisplay_playlistplayex(This,ScreenNum,playlist,playfilename,volume,forceplay) (This)->lpVtbl->playlistplayex(This,ScreenNum,playlist,playfilename,volume,forceplay)
#define IPinDisplay_play(This,ScreenNum,playlist,playfilename) (This)->lpVtbl->play(This,ScreenNum,playlist,playfilename)
#define IPinDisplay_setWidth(This,ScreenNum,width) (This)->lpVtbl->setWidth(This,ScreenNum,width)
#define IPinDisplay_setHeight(This,ScreenNum,Height) (This)->lpVtbl->setHeight(This,ScreenNum,Height)
#define IPinDisplay_setPosX(This,ScreenNum,Posx) (This)->lpVtbl->setPosX(This,ScreenNum,Posx)
#define IPinDisplay_setPosY(This,ScreenNum,PosY) (This)->lpVtbl->setPosY(This,ScreenNum,PosY)
#define IPinDisplay_setAspect(This,ScreenNum,aspectWide,aspectHigh) (This)->lpVtbl->setAspect(This,ScreenNum,aspectWide,aspectHigh)
#define IPinDisplay_setVolume(This,ScreenNum,vol) (This)->lpVtbl->setVolume(This,ScreenNum,vol)
#define IPinDisplay_playpause(This,ScreenNum) (This)->lpVtbl->playpause(This,ScreenNum)
#define IPinDisplay_playresume(This,ScreenNum) (This)->lpVtbl->playresume(This,ScreenNum)
#define IPinDisplay_playstop(This,ScreenNum) (This)->lpVtbl->playstop(This,ScreenNum)
#define IPinDisplay_CloseApp(This) (This)->lpVtbl->CloseApp(This)
#define IPinDisplay_get_isPlaying(This,ScreenNum,Value) (This)->lpVtbl->get_isPlaying(This,ScreenNum,Value)
#define IPinDisplay_put_isPlaying(This,ScreenNum,Value) (This)->lpVtbl->put_isPlaying(This,ScreenNum,Value)
#define IPinDisplay_SetLength(This,ScreenNum,StopSecs) (This)->lpVtbl->SetLength(This,ScreenNum,StopSecs)
#define IPinDisplay_SetLoop(This,ScreenNum,LoopState) (This)->lpVtbl->SetLoop(This,ScreenNum,LoopState)
#define IPinDisplay_SetBackGround(This,ScreenNum,Mode) (This)->lpVtbl->SetBackGround(This,ScreenNum,Mode)
#define IPinDisplay_BlockPlay(This,ScreenNum,Mode) (This)->lpVtbl->BlockPlay(This,ScreenNum,Mode)
#define IPinDisplay_SetScreen(This,ScreenNum) (This)->lpVtbl->SetScreen(This,ScreenNum)
#define IPinDisplay_SetScreenEx(This,ScreenNum,xpos,ypos,swidth,sheight,popup) (This)->lpVtbl->SetScreenEx(This,ScreenNum,xpos,ypos,swidth,sheight,popup)
#define IPinDisplay_get_SN(This,Value) (This)->lpVtbl->get_SN(This,Value)
#define IPinDisplay_put_SN(This,Value) (This)->lpVtbl->put_SN(This,Value)
#define IPinDisplay_B2SData(This,tIndex,Value) (This)->lpVtbl->B2SData(This,tIndex,Value)
#define IPinDisplay_get_B2SFilter(This,Value) (This)->lpVtbl->get_B2SFilter(This,Value)
#define IPinDisplay_put_B2SFilter(This,Value) (This)->lpVtbl->put_B2SFilter(This,Value)
#define IPinDisplay_Show(This,ScreenNum) (This)->lpVtbl->Show(This,ScreenNum)
#define IPinDisplay_Hide(This,ScreenNum) (This)->lpVtbl->Hide(This,ScreenNum)
#define IPinDisplay_B2SInit(This,TName,RomName) (This)->lpVtbl->B2SInit(This,TName,RomName)
#define IPinDisplay_SendMSG(This,cMSG) (This)->lpVtbl->SendMSG(This,cMSG)
#define IPinDisplay_LabelNew(This,ScreenNum,LabelName,FontName,Size,Color,Angle,xAlign,yAlign,xMargin,yMargin,PageNum,Visible) (This)->lpVtbl->LabelNew(This,ScreenNum,LabelName,FontName,Size,Color,Angle,xAlign,yAlign,xMargin,yMargin,PageNum,Visible)
#define IPinDisplay_LabelSet(This,ScreenNum,LabelName,Caption,Visible,Special) (This)->lpVtbl->LabelSet(This,ScreenNum,LabelName,Caption,Visible,Special)
#define IPinDisplay_LabelSetEx(This) (This)->lpVtbl->LabelSetEx(This)
#define IPinDisplay_LabelShowPage(This,ScreenNum,PageNum,Seconds,Special) (This)->lpVtbl->LabelShowPage(This,ScreenNum,PageNum,Seconds,Special)
#define IPinDisplay_LabelInit(This,ScreenNum) (This)->lpVtbl->LabelInit(This,ScreenNum)
#define IPinDisplay_get_GetGame(This,Value) (This)->lpVtbl->get_GetGame(This,Value)
#define IPinDisplay_put_GetGame(This,Value) (This)->lpVtbl->put_GetGame(This,Value)
#define IPinDisplay_get_GetRoot(This,Value) (This)->lpVtbl->get_GetRoot(This,Value)
#define IPinDisplay_put_GetRoot(This,Value) (This)->lpVtbl->put_GetRoot(This,Value)
#define IPinDisplay_SoundAdd(This,sname,fname,svol,sX,sy,SP) (This)->lpVtbl->SoundAdd(This,sname,fname,svol,sX,sy,SP)
#define IPinDisplay_SoundPlay(This,sname) (This)->lpVtbl->SoundPlay(This,sname)
#define IPinDisplay_PuPSound(This,sname,sX,sy,sz,vol,SP) (This)->lpVtbl->PuPSound(This,sname,sX,sy,sz,vol,SP)
#define IPinDisplay_InitPuPMenu(This,Param1) (This)->lpVtbl->InitPuPMenu(This,Param1)
#define IPinDisplay_get_B2SDisplays(This,Value) (This)->lpVtbl->get_B2SDisplays(This,Value)
#define IPinDisplay_setVolumeCurrent(This,ScreenNum,vol) (This)->lpVtbl->setVolumeCurrent(This,ScreenNum,vol)
#define IPinDisplay_get_GameUpdate(This,GameTitle,Func,FuncData,Extra,Value) (This)->lpVtbl->get_GameUpdate(This,GameTitle,Func,FuncData,Extra,Value)
#else
/*** IUnknown methods ***/
static __WIDL_INLINE HRESULT IPinDisplay_QueryInterface(IPinDisplay* This,REFIID riid,void **ppvObject) {
    return This->lpVtbl->QueryInterface(This,riid,ppvObject);
}
static __WIDL_INLINE ULONG IPinDisplay_AddRef(IPinDisplay* This) {
    return This->lpVtbl->AddRef(This);
}
static __WIDL_INLINE ULONG IPinDisplay_Release(IPinDisplay* This) {
    return This->lpVtbl->Release(This);
}
/*** IDispatch methods ***/
static __WIDL_INLINE HRESULT IPinDisplay_GetTypeInfoCount(IPinDisplay* This,UINT *pctinfo) {
    return This->lpVtbl->GetTypeInfoCount(This,pctinfo);
}
static __WIDL_INLINE HRESULT IPinDisplay_GetTypeInfo(IPinDisplay* This,UINT iTInfo,LCID lcid,ITypeInfo **ppTInfo) {
    return This->lpVtbl->GetTypeInfo(This,iTInfo,lcid,ppTInfo);
}
static __WIDL_INLINE HRESULT IPinDisplay_GetIDsOfNames(IPinDisplay* This,REFIID riid,LPOLESTR *rgszNames,UINT cNames,LCID lcid,DISPID *rgDispId) {
    return This->lpVtbl->GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId);
}
static __WIDL_INLINE HRESULT IPinDisplay_Invoke(IPinDisplay* This,DISPID dispIdMember,REFIID riid,LCID lcid,WORD wFlags,DISPPARAMS *pDispParams,VARIANT *pVarResult,EXCEPINFO *pExcepInfo,UINT *puArgErr) {
    return This->lpVtbl->Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr);
}
/*** IPinDisplay methods ***/
static __WIDL_INLINE HRESULT IPinDisplay_Init(IPinDisplay* This,LONG ScreenNum,BSTR RootDir) {
    return This->lpVtbl->Init(This,ScreenNum,RootDir);
}
static __WIDL_INLINE HRESULT IPinDisplay_playlistadd(IPinDisplay* This,LONG ScreenNum,BSTR folder,LONG sort,LONG restSeconds) {
    return This->lpVtbl->playlistadd(This,ScreenNum,folder,sort,restSeconds);
}
static __WIDL_INLINE HRESULT IPinDisplay_playlistplay(IPinDisplay* This,LONG ScreenNum,BSTR playlist) {
    return This->lpVtbl->playlistplay(This,ScreenNum,playlist);
}
static __WIDL_INLINE HRESULT IPinDisplay_playlistplayex(IPinDisplay* This,LONG ScreenNum,BSTR playlist,BSTR playfilename,LONG volume,LONG forceplay) {
    return This->lpVtbl->playlistplayex(This,ScreenNum,playlist,playfilename,volume,forceplay);
}
static __WIDL_INLINE HRESULT IPinDisplay_play(IPinDisplay* This,LONG ScreenNum,BSTR playlist,BSTR playfilename) {
    return This->lpVtbl->play(This,ScreenNum,playlist,playfilename);
}
static __WIDL_INLINE HRESULT IPinDisplay_setWidth(IPinDisplay* This,LONG ScreenNum,LONG width) {
    return This->lpVtbl->setWidth(This,ScreenNum,width);
}
static __WIDL_INLINE HRESULT IPinDisplay_setHeight(IPinDisplay* This,LONG ScreenNum,LONG Height) {
    return This->lpVtbl->setHeight(This,ScreenNum,Height);
}
static __WIDL_INLINE HRESULT IPinDisplay_setPosX(IPinDisplay* This,LONG ScreenNum,LONG Posx) {
    return This->lpVtbl->setPosX(This,ScreenNum,Posx);
}
static __WIDL_INLINE HRESULT IPinDisplay_setPosY(IPinDisplay* This,LONG ScreenNum,LONG PosY) {
    return This->lpVtbl->setPosY(This,ScreenNum,PosY);
}
static __WIDL_INLINE HRESULT IPinDisplay_setAspect(IPinDisplay* This,LONG ScreenNum,LONG aspectWide,LONG aspectHigh) {
    return This->lpVtbl->setAspect(This,ScreenNum,aspectWide,aspectHigh);
}
static __WIDL_INLINE HRESULT IPinDisplay_setVolume(IPinDisplay* This,LONG ScreenNum,LONG vol) {
    return This->lpVtbl->setVolume(This,ScreenNum,vol);
}
static __WIDL_INLINE HRESULT IPinDisplay_playpause(IPinDisplay* This,LONG ScreenNum) {
    return This->lpVtbl->playpause(This,ScreenNum);
}
static __WIDL_INLINE HRESULT IPinDisplay_playresume(IPinDisplay* This,LONG ScreenNum) {
    return This->lpVtbl->playresume(This,ScreenNum);
}
static __WIDL_INLINE HRESULT IPinDisplay_playstop(IPinDisplay* This,LONG ScreenNum) {
    return This->lpVtbl->playstop(This,ScreenNum);
}
static __WIDL_INLINE HRESULT IPinDisplay_CloseApp(IPinDisplay* This) {
    return This->lpVtbl->CloseApp(This);
}
static __WIDL_INLINE HRESULT IPinDisplay_get_isPlaying(IPinDisplay* This,LONG ScreenNum,LONG *Value) {
    return This->lpVtbl->get_isPlaying(This,ScreenNum,Value);
}
static __WIDL_INLINE HRESULT IPinDisplay_put_isPlaying(IPinDisplay* This,LONG ScreenNum,LONG Value) {
    return This->lpVtbl->put_isPlaying(This,ScreenNum,Value);
}
static __WIDL_INLINE HRESULT IPinDisplay_SetLength(IPinDisplay* This,LONG ScreenNum,LONG StopSecs) {
    return This->lpVtbl->SetLength(This,ScreenNum,StopSecs);
}
static __WIDL_INLINE HRESULT IPinDisplay_SetLoop(IPinDisplay* This,LONG ScreenNum,LONG LoopState) {
    return This->lpVtbl->SetLoop(This,ScreenNum,LoopState);
}
static __WIDL_INLINE HRESULT IPinDisplay_SetBackGround(IPinDisplay* This,LONG ScreenNum,LONG Mode) {
    return This->lpVtbl->SetBackGround(This,ScreenNum,Mode);
}
static __WIDL_INLINE HRESULT IPinDisplay_BlockPlay(IPinDisplay* This,LONG ScreenNum,LONG Mode) {
    return This->lpVtbl->BlockPlay(This,ScreenNum,Mode);
}
static __WIDL_INLINE HRESULT IPinDisplay_SetScreen(IPinDisplay* This,LONG ScreenNum) {
    return This->lpVtbl->SetScreen(This,ScreenNum);
}
static __WIDL_INLINE HRESULT IPinDisplay_SetScreenEx(IPinDisplay* This,LONG ScreenNum,LONG xpos,LONG ypos,LONG swidth,LONG sheight,LONG popup) {
    return This->lpVtbl->SetScreenEx(This,ScreenNum,xpos,ypos,swidth,sheight,popup);
}
static __WIDL_INLINE HRESULT IPinDisplay_get_SN(IPinDisplay* This,LONG *Value) {
    return This->lpVtbl->get_SN(This,Value);
}
static __WIDL_INLINE HRESULT IPinDisplay_put_SN(IPinDisplay* This,LONG Value) {
    return This->lpVtbl->put_SN(This,Value);
}
static __WIDL_INLINE HRESULT IPinDisplay_B2SData(IPinDisplay* This,BSTR tIndex,int Value) {
    return This->lpVtbl->B2SData(This,tIndex,Value);
}
static __WIDL_INLINE HRESULT IPinDisplay_get_B2SFilter(IPinDisplay* This,BSTR *Value) {
    return This->lpVtbl->get_B2SFilter(This,Value);
}
static __WIDL_INLINE HRESULT IPinDisplay_put_B2SFilter(IPinDisplay* This,BSTR Value) {
    return This->lpVtbl->put_B2SFilter(This,Value);
}
static __WIDL_INLINE HRESULT IPinDisplay_Show(IPinDisplay* This,LONG ScreenNum) {
    return This->lpVtbl->Show(This,ScreenNum);
}
static __WIDL_INLINE HRESULT IPinDisplay_Hide(IPinDisplay* This,LONG ScreenNum) {
    return This->lpVtbl->Hide(This,ScreenNum);
}
static __WIDL_INLINE HRESULT IPinDisplay_B2SInit(IPinDisplay* This,BSTR TName,BSTR RomName) {
    return This->lpVtbl->B2SInit(This,TName,RomName);
}
static __WIDL_INLINE HRESULT IPinDisplay_SendMSG(IPinDisplay* This,BSTR cMSG) {
    return This->lpVtbl->SendMSG(This,cMSG);
}
static __WIDL_INLINE HRESULT IPinDisplay_LabelNew(IPinDisplay* This,LONG ScreenNum,BSTR LabelName,BSTR FontName,LONG Size,LONG Color,LONG Angle,LONG xAlign,LONG yAlign,LONG xMargin,LONG yMargin,LONG PageNum,LONG Visible) {
    return This->lpVtbl->LabelNew(This,ScreenNum,LabelName,FontName,Size,Color,Angle,xAlign,yAlign,xMargin,yMargin,PageNum,Visible);
}
static __WIDL_INLINE HRESULT IPinDisplay_LabelSet(IPinDisplay* This,LONG ScreenNum,BSTR LabelName,BSTR Caption,LONG Visible,BSTR Special) {
    return This->lpVtbl->LabelSet(This,ScreenNum,LabelName,Caption,Visible,Special);
}
static __WIDL_INLINE HRESULT IPinDisplay_LabelSetEx(IPinDisplay* This) {
    return This->lpVtbl->LabelSetEx(This);
}
static __WIDL_INLINE HRESULT IPinDisplay_LabelShowPage(IPinDisplay* This,LONG ScreenNum,LONG PageNum,LONG Seconds,BSTR Special) {
    return This->lpVtbl->LabelShowPage(This,ScreenNum,PageNum,Seconds,Special);
}
static __WIDL_INLINE HRESULT IPinDisplay_LabelInit(IPinDisplay* This,LONG ScreenNum) {
    return This->lpVtbl->LabelInit(This,ScreenNum);
}
static __WIDL_INLINE HRESULT IPinDisplay_get_GetGame(IPinDisplay* This,BSTR *Value) {
    return This->lpVtbl->get_GetGame(This,Value);
}
static __WIDL_INLINE HRESULT IPinDisplay_put_GetGame(IPinDisplay* This,BSTR Value) {
    return This->lpVtbl->put_GetGame(This,Value);
}
static __WIDL_INLINE HRESULT IPinDisplay_get_GetRoot(IPinDisplay* This,BSTR *Value) {
    return This->lpVtbl->get_GetRoot(This,Value);
}
static __WIDL_INLINE HRESULT IPinDisplay_put_GetRoot(IPinDisplay* This,BSTR Value) {
    return This->lpVtbl->put_GetRoot(This,Value);
}
static __WIDL_INLINE HRESULT IPinDisplay_SoundAdd(IPinDisplay* This,BSTR sname,BSTR fname,LONG svol,double sX,double sy,BSTR SP) {
    return This->lpVtbl->SoundAdd(This,sname,fname,svol,sX,sy,SP);
}
static __WIDL_INLINE HRESULT IPinDisplay_SoundPlay(IPinDisplay* This,BSTR sname) {
    return This->lpVtbl->SoundPlay(This,sname);
}
static __WIDL_INLINE HRESULT IPinDisplay_PuPSound(IPinDisplay* This,BSTR sname,LONG sX,LONG sy,LONG sz,LONG vol,BSTR SP) {
    return This->lpVtbl->PuPSound(This,sname,sX,sy,sz,vol,SP);
}
static __WIDL_INLINE HRESULT IPinDisplay_InitPuPMenu(IPinDisplay* This,LONG Param1) {
    return This->lpVtbl->InitPuPMenu(This,Param1);
}
static __WIDL_INLINE HRESULT IPinDisplay_get_B2SDisplays(IPinDisplay* This,BSTR *Value) {
    return This->lpVtbl->get_B2SDisplays(This,Value);
}
static __WIDL_INLINE HRESULT IPinDisplay_setVolumeCurrent(IPinDisplay* This,LONG ScreenNum,LONG vol) {
    return This->lpVtbl->setVolumeCurrent(This,ScreenNum,vol);
}
static __WIDL_INLINE HRESULT IPinDisplay_get_GameUpdate(IPinDisplay* This,BSTR GameTitle,LONG Func,LONG FuncData,BSTR Extra,LONG *Value) {
    return This->lpVtbl->get_GameUpdate(This,GameTitle,Func,FuncData,Extra,Value);
}
#endif
#endif

#endif


#endif  /* __IPinDisplay_INTERFACE_DEFINED__ */

/*****************************************************************************
 * PinDisplay coclass
 */

DEFINE_GUID(CLSID_PinDisplay, 0x88919fac, 0x00b2, 0x4aa8, 0xb1,0xc7, 0x52,0xad,0x65,0xc4,0x76,0xd3);

#ifdef __cplusplus
class DECLSPEC_UUID("88919fac-00b2-4aa8-b1c7-52ad65c476d3") PinDisplay;
#ifdef __CRT_UUID_DECL
__CRT_UUID_DECL(PinDisplay, 0x88919fac, 0x00b2, 0x4aa8, 0xb1,0xc7, 0x52,0xad,0x65,0xc4,0x76,0xd3)
#endif
#endif

#endif /* __PinUpPlayer_LIBRARY_DEFINED__ */
/* Begin additional prototypes for all interfaces */

ULONG           __RPC_USER BSTR_UserSize     (ULONG *, ULONG, BSTR *);
unsigned char * __RPC_USER BSTR_UserMarshal  (ULONG *, unsigned char *, BSTR *);
unsigned char * __RPC_USER BSTR_UserUnmarshal(ULONG *, unsigned char *, BSTR *);
void            __RPC_USER BSTR_UserFree     (ULONG *, BSTR *);

/* End additional prototypes */

#ifdef __cplusplus
}
#endif

#endif /* __pinupplayer_i_h__ */
