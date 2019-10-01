;These are TI-OS equates!
;===============================================================================
#define bcall(x) rst 28h \ .dw x
#define rMov9ToOP1    20h
#define rFindSym    10h
_FindAlphaDn    = 4A47h
_FindAlphaUp    = 4A44h
_RclAns         = 4AD7h
_ChkFindSym     = 42F1h
_DispHL         = 4507h
_CreateTempStr  = 4324h
_SetParserHook  = 5026h
_CreateVar      = 4E70h
_CreateAppVar   = 4E6Ah
_CreatePict     = 4333h
_EnoughMem      = 42FDh
_InsertMem      = 42F7h
_Get_Tok_Strng  = 4594h
_DelMem         = 4357h
_JForceCmdNoChar= 4027h
_JError         = 44D7h
_DelVarArc      = 4FC6h
_CreateStrng    = 4327h
_CreateReal     = 430Fh
_SetXXXXOP2     = 4792h
_Arc_Unarc      = 4FD8h
_ConvKeyToTok   = 4A02h
_GetKeyRetOff   = 500Bh
_RunIndicOff    = 4570h
_DeleteTempPrograms = 5041h
_MemChk         = 42E5h
_clrTxtShd      = 454Ch
_saveCmdShadow  = 4573h
_PutS           = 450Ah
_OP5ToOP1       = 413Bh
_OP1ToOP5       = 4153h
appErr1         = 984Dh
appErr2         = 985Ah
cxErrorEP       = 8595h
curRow          = 844Bh
curCol          = 844Ch
kbdScanCode     = 843Fh
basic_prog      = 9652h
progStart       = 965Bh
parsePtr        = 965Dh
progEnd         = 965Fh
parserHookPtr   = 9BACh
tokenHookPtr    = 9BC8h
OP5             = 84A4h
OP4             = 8499h
OP3             = 848Eh
OP2             = 8483h
intmask         = %00001011
invlogic        = 2
gflags          = 33
flags           = 89F0h
OP1             = 8478h
saveSScreen     = 86ECh
textShadow      = 8508h
plotSScreen     = 9340h
gbuf            = plotSScreen
progPtr         = 9830h
FPS             = 9824h
OPS             = 9828h
;===============================================================================


;TIDE specific equates
;===============================================================================
#define K_DELAY_DEFAULT 13
#define K_DELAY_ACCEL 3
#define CUR_COUNT_RESET 23
textrow         = $8000
textcol         = $8001
edit_end        = $8002
buf_end         = edit_end
edit_top        = $8004
buf_top         = edit_top
edit_bottom     = $8006
edit_ptr        = $8008
k_save          = $800A   ;3 bytes
curcount        = $800D   ;1 byte
texttemp        = $800E
char_save       = $8010
cursorrow       = $8011
cursorcol       = $8012
tide_vars_end   = $8013


keyflags        = 21h
shift           = 0
alpha           = 1
shiftprev       = 2
alphaprev       = 3
holdmod         = 4
insertmode      = 5
cursorblink     = 7

editorflags     = 22h
rerender        = 0
textinverse     = 1
;===============================================================================


;Menu routine equates
;===============================================================================
#define Text() call VPutS
#define TEXT_HEIGHT 6
textcoord       = textrow

#macro LCD_Update()
  di
  call UpdateLCD
#endmacro
#macro rect_OR()
  ;Draw a black rectangle
  call orRect
#endmacro
#macro rect_XOR()
  ;Draw an inverted rectangle
  call xorRect
#endmacro

#macro rect_Erase()
  ;Draw a white rectangle
  call eraseRect
#endmacro

textbox_top     = tide_vars_end
textbox_left    = textbox_top+1    ;needs to follow textbox_top
textbox_bottom  = tide_vars_end+2
textbox_right   = textbox_bottom+1 ;needs to follow textbox_bottom
menucallptr     = tide_vars_end+4
menutop         = tide_vars_end+6
menucur         = tide_vars_end+8
menuselection   = tide_vars_end+10
menuheader_ptr  = tide_vars_end+12
menuheader_coord= tide_vars_end+14
menuheader_cur  = tide_vars_end+16
;===============================================================================
