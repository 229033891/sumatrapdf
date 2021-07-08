/* Copyright 2021 the SumatraPDF project authors (see AUTHORS file).
   License: GPLv3 */

extern bool gAddCrashMeMenu;

struct BuildMenuCtx;
struct MenuOwnerDrawInfo;
struct MenuDef;

extern MenuDef menuDefContextToc[];
extern MenuDef menuDefContextFav[];

void FreeAllMenuDrawInfos();
void FreeMenuOwnerDrawInfo(MenuOwnerDrawInfo*);
void MarkMenuOwnerDraw(HMENU);
void FreeMenuOwnerDrawInfoData(HMENU);
void MenuOwnerDrawnMesureItem(HWND, MEASUREITEMSTRUCT*);
void MenuOwnerDrawnDrawItem(HWND, DRAWITEMSTRUCT*);
HFONT GetMenuFont();

HMENU BuildMenuFromMenuDef(MenuDef* menuDefs, HMENU menu, BuildMenuCtx* ctx);
HMENU BuildMenu(WindowInfo* win);
void OnWindowContextMenu(WindowInfo* win, int x, int y);
void OnAboutContextMenu(WindowInfo* win, int x, int y);
void OnMenuZoom(WindowInfo* win, int menuId);
void OnMenuCustomZoom(WindowInfo* win);
int MenuIdFromVirtualZoom(float virtualZoom);
void UpdateAppMenu(WindowInfo* win, HMENU m);
void ShowHideMenuBar(WindowInfo* win, bool showTemporarily = false);
