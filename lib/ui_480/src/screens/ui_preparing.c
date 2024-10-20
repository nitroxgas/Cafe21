// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.4.2
// LVGL version: 8.3.11
// Project name: Cafe21_ui_480

#include "../ui.h"

void ui_preparing_screen_init(void)
{
    ui_preparing = lv_obj_create(NULL);
    lv_obj_set_style_bg_color(ui_preparing, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_preparing, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ePanel1 = lv_obj_create(ui_preparing);
    lv_obj_set_width(ui_ePanel1, lv_pct(50));
    lv_obj_set_height(ui_ePanel1, lv_pct(83));
    lv_obj_set_align(ui_ePanel1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_ePanel1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_ePanel1, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_ePanel1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_ePanel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_ePanel1, lv_color_hex(0x4D4D4D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_ePanel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_ePanel1, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_ePanel1, 16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_ePanel1, 16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_ePanel1, 16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_ePanel1, 16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btnCancel = lv_btn_create(ui_ePanel1);
    lv_obj_set_width(ui_btnCancel, lv_pct(110));
    lv_obj_set_height(ui_btnCancel, lv_pct(15));
    lv_obj_set_x(ui_btnCancel, 0);
    lv_obj_set_y(ui_btnCancel, 170);
    lv_obj_set_align(ui_btnCancel, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_btnCancel, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnCancel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_btnCancel, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_btnCancel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btnCancel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_btnCancel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_btnCancel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_btnCancel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_btnCancel, &ui_font_OpenSansBold14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btnCancelLabel = lv_label_create(ui_btnCancel);
    lv_obj_set_width(ui_btnCancelLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_btnCancelLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_btnCancelLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_btnCancelLabel, "Cancelar");
    lv_obj_set_style_text_color(ui_btnCancelLabel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_btnCancelLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_btnCancelLabel, &ui_font_OpenSansBold14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_prepLabel = lv_label_create(ui_ePanel1);
    lv_obj_set_width(ui_prepLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_prepLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_prepLabel, 0);
    lv_obj_set_y(ui_prepLabel, 89);
    lv_obj_set_align(ui_prepLabel, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_prepLabel, "Saindo um\nExpresso to the Moon");
    lv_obj_set_style_text_color(ui_prepLabel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_prepLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_prepLabel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_prepLabel, &ui_font_LoraRegular16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ePrepIcon = lv_img_create(ui_ePanel1);
    lv_img_set_src(ui_ePrepIcon, &ui_img_expressolarge_png);
    lv_obj_set_width(ui_ePrepIcon, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ePrepIcon, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ePrepIcon, 0);
    lv_obj_set_y(ui_ePrepIcon, -30);
    lv_obj_set_align(ui_ePrepIcon, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_ePrepIcon, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_ePrepIcon, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_ePrepIcon, 150);

    ui_bcPrepIcon = lv_img_create(ui_ePanel1);
    lv_img_set_src(ui_bcPrepIcon, &ui_img_coffelarge_png);
    lv_obj_set_width(ui_bcPrepIcon, LV_SIZE_CONTENT);   /// 132
    lv_obj_set_height(ui_bcPrepIcon, LV_SIZE_CONTENT);    /// 132
    lv_obj_set_x(ui_bcPrepIcon, 0);
    lv_obj_set_y(ui_bcPrepIcon, 6);
    lv_obj_set_align(ui_bcPrepIcon, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_bcPrepIcon, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_bcPrepIcon, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_Bar1 = lv_bar_create(ui_ePanel1);
    lv_bar_set_value(ui_Bar1, 25, LV_ANIM_OFF);
    lv_bar_set_start_value(ui_Bar1, 25, LV_ANIM_OFF);
    lv_obj_set_height(ui_Bar1, 3);
    lv_obj_set_width(ui_Bar1, lv_pct(95));
    lv_obj_set_x(ui_Bar1, 0);
    lv_obj_set_y(ui_Bar1, lv_pct(76));
    lv_obj_set_align(ui_Bar1, LV_ALIGN_TOP_MID);
    lv_obj_set_style_bg_color(ui_Bar1, lv_color_hex(0x474747), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Bar1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_Bar1, 4, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Bar1, lv_color_hex(0xD9D9D9), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Bar1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_btnCancel, ui_event_btnCancel, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_preparing, ui_event_preparing, LV_EVENT_ALL, NULL);

}
