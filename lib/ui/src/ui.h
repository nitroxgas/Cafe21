// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.11
// Project name: Cafe21_ui

#ifndef _CAFE21_UI_UI_H
#define _CAFE21_UI_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
#if __has_include("lvgl.h")
#include "lvgl.h"
#elif __has_include("lvgl/lvgl.h")
#include "lvgl/lvgl.h"
#else
#include "lvgl.h"
#endif
#else
#include "lvgl.h"
#endif

#include "ui_helpers.h"
#include "components/ui_comp.h"
#include "components/ui_comp_hook.h"
#include "ui_events.h"
#include "ui_extended.h"

// SCREEN: ui_hero
void ui_hero_screen_init(void);
void ui_event_hero_loading(lv_event_t * e);
extern lv_obj_t * ui_hero;
void ui_event_logo21(lv_event_t * e);
extern lv_obj_t * ui_logo21;
extern lv_obj_t * ui_gear;
extern lv_obj_t * ui_cTitle;
extern lv_obj_t * ui_subtitulo;
extern lv_obj_t * ui_titulo;
void ui_event_primaryButton(lv_event_t * e);
extern lv_obj_t * ui_primaryButton;
extern lv_obj_t * ui_pbLabel;
extern lv_obj_t * ui_errorPanel;
extern lv_obj_t * ui_erroIcon;
extern lv_obj_t * ui_errorMessage;
extern lv_obj_t * ui_errorDescription;
// SCREEN: ui_choseCoffe
void ui_choseCoffe_screen_init(void);
void ui_event_choseCoffe(lv_event_t * e);
extern lv_obj_t * ui_choseCoffe;
void ui_event_ePanel(lv_event_t * e);
extern lv_obj_t * ui_ePanel;
void ui_event_primaryButton1(lv_event_t * e);
extern lv_obj_t * ui_primaryButton1;
extern lv_obj_t * ui_pbLabel1;
extern lv_obj_t * ui_eTitle;
extern lv_obj_t * ui_expressoOrder;
extern lv_obj_t * ui_ePrLabel;
extern lv_obj_t * ui_eConteiner;
extern lv_obj_t * ui_eSats;
extern lv_obj_t * ui_eReal;
extern lv_obj_t * ui_eConteiner3;
void ui_event_cPanel(lv_event_t * e);
extern lv_obj_t * ui_cPanel;
void ui_event_primaryButton2(lv_event_t * e);
extern lv_obj_t * ui_primaryButton2;
extern lv_obj_t * ui_pbLabel2;
extern lv_obj_t * ui_bcTitle;
extern lv_obj_t * ui_coffeOrder;
extern lv_obj_t * ui_cPrLabel;
extern lv_obj_t * ui_cConteiner;
extern lv_obj_t * ui_cSats;
extern lv_obj_t * ui_cReal;
extern lv_obj_t * ui_cConteiner2;
extern lv_obj_t * ui_goBack;
// SCREEN: ui_payment
void ui_payment_screen_init(void);
void ui_event_payment(lv_event_t * e);
extern lv_obj_t * ui_payment;
extern lv_obj_t * ui_pagueSubLabel;
extern lv_obj_t * ui_pagueLabel;
extern lv_obj_t * ui_qrCode;
void ui_event_goBack2(lv_event_t * e);
extern lv_obj_t * ui_goBack2;
// SCREEN: ui_preparing
void ui_preparing_screen_init(void);
void ui_event_preparing(lv_event_t * e);
extern lv_obj_t * ui_preparing;
extern lv_obj_t * ui_ePanel1;
void ui_event_btnCancel(lv_event_t * e);
extern lv_obj_t * ui_btnCancel;
extern lv_obj_t * ui_btnCancelLabel;
extern lv_obj_t * ui_prepLabel;
extern lv_obj_t * ui_ePrepIcon;
extern lv_obj_t * ui_bcPrepIcon;
extern lv_obj_t * ui_Bar1;
// SCREEN: ui_success
void ui_success_screen_init(void);
void ui_event_success(lv_event_t * e);
extern lv_obj_t * ui_success;
void ui_event_goBack3(lv_event_t * e);
extern lv_obj_t * ui_goBack3;
extern lv_obj_t * ui_ePanel2;
void ui_event_btnCancel1(lv_event_t * e);
extern lv_obj_t * ui_btnCancel1;
extern lv_obj_t * ui_btnCancelLabel1;
extern lv_obj_t * ui_prepLabel1;
extern lv_obj_t * ui_ePrepIcon1;
extern lv_obj_t * ui_logoSuccess;
extern lv_obj_t * ui____initial_actions0;


LV_IMG_DECLARE(ui__temporary_image);
LV_IMG_DECLARE(ui_img_logo21_png);    // assets/logo21.png
LV_IMG_DECLARE(ui_img_configsmall_png);    // assets/configSmall.png
LV_IMG_DECLARE(ui_img_watersmall_png);    // assets/waterSmall.png
LV_IMG_DECLARE(ui_img_expressolarge_png);    // assets/expressoLarge.png
LV_IMG_DECLARE(ui_img_coffelarge_png);    // assets/coffeLarge.png
LV_IMG_DECLARE(ui_img_chevronsmall_png);    // assets/chevronSmall.png
LV_IMG_DECLARE(ui_img_qr_code_png);    // assets/QR Code.png
LV_IMG_DECLARE(ui_img_exitsmall_png);    // assets/exitSmall.png
LV_IMG_DECLARE(ui_img_checklarge_png);    // assets/checkLarge.png
LV_IMG_DECLARE(ui_img_hoselarge_png);    // assets/hoseLarge.png
LV_IMG_DECLARE(ui_img_minussmall_png);    // assets/minusSmall.png
LV_IMG_DECLARE(ui_img_plussmall_png);    // assets/plusSmall.png
LV_IMG_DECLARE(ui_img_419703364);    // assets/Property 1=Wi-Fi.png
LV_IMG_DECLARE(ui_img_showerlarge_png);    // assets/showerLarge.png
LV_IMG_DECLARE(ui_img_toogleoff_png);    // assets/toogleOff.png
LV_IMG_DECLARE(ui_img_toogleon_png);    // assets/toogleOn.png
LV_IMG_DECLARE(ui_img_trashsmall_png);    // assets/trashSmall.png
LV_IMG_DECLARE(ui_img_warnsmall_png);    // assets/warnSmall.png
LV_IMG_DECLARE(ui_img_xlarge_png);    // assets/xLarge.png



LV_FONT_DECLARE(ui_font_LoraRegula24);
LV_FONT_DECLARE(ui_font_LoraRegula40);
LV_FONT_DECLARE(ui_font_LoraRegula64);
LV_FONT_DECLARE(ui_font_OpenSansBold14);
LV_FONT_DECLARE(ui_font_OpenSansBold20);
LV_FONT_DECLARE(ui_font_OpenSansRegular14);
LV_FONT_DECLARE(ui_font_OpenSansRegular16);
LV_FONT_DECLARE(ui_font_OpenSansRegular20);
LV_FONT_DECLARE(ui_font_OpenSansSemiBold14);
LV_FONT_DECLARE(ui_font_OpenSansSemiBold16);
LV_FONT_DECLARE(ui_font_OpenSansSemiBold20);



void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
