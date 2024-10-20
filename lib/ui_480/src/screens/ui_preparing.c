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

    ui_prepPanel = lv_obj_create(ui_preparing);
    lv_obj_set_width(ui_prepPanel, 218);
    lv_obj_set_height(ui_prepPanel, 210);
    lv_obj_set_align(ui_prepPanel, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_prepPanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_prepPanel, 8, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_prepPanel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_prepPanel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_prepPanel, lv_color_hex(0x4D4D4D), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_prepPanel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_prepPanel, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_prepPanel, 16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_prepPanel, 16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_prepPanel, 16, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_prepPanel, 16, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_pad_left(ui_prepPanel, 12, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_prepPanel, 12, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_prepPanel, 12, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_prepPanel, 12, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);

    ui_btnCancel = lv_btn_create(ui_prepPanel);
    lv_obj_set_width(ui_btnCancel, 194);
    lv_obj_set_height(ui_btnCancel, 36);
    lv_obj_set_x(ui_btnCancel, 0);
    lv_obj_set_y(ui_btnCancel, 10);
    lv_obj_set_align(ui_btnCancel, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_btnCancel, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_btnCancel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_btnCancel, 4, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_btnCancel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_btnCancel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_btnCancel, lv_color_hex(0xCCCCCC), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_btnCancel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_btnCancel, 1, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_color(ui_btnCancel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_btnCancel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_btnCancel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_btnCancel, &ui_font_OpenSansBold14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_btnCancelLabel = lv_label_create(ui_btnCancel);
    lv_obj_set_width(ui_btnCancelLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_btnCancelLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_btnCancelLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_btnCancelLabel, "Cancelar");
    lv_obj_set_style_text_color(ui_btnCancelLabel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_btnCancelLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_btnCancelLabel, &ui_font_OpenSansBold14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_prepLabel = lv_label_create(ui_prepPanel);
    lv_obj_set_width(ui_prepLabel, 194);
    lv_obj_set_height(ui_prepLabel, 44);
    lv_obj_set_x(ui_prepLabel, 0);
    lv_obj_set_y(ui_prepLabel, 72);
    lv_obj_set_align(ui_prepLabel, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_prepLabel, "Saindo um\nExpresso to the Moon");
    lv_obj_set_style_text_color(ui_prepLabel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_prepLabel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_align(ui_prepLabel, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_prepLabel, &ui_font_LoraRegular14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_PrepIcon = lv_img_create(ui_prepPanel);
    lv_img_set_src(ui_PrepIcon, &ui_img_expresso_png);
    lv_obj_set_width(ui_PrepIcon, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_PrepIcon, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_PrepIcon, LV_ALIGN_TOP_MID);
    lv_obj_add_flag(ui_PrepIcon, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_PrepIcon, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_barBrew = lv_bar_create(ui_prepPanel);
    lv_bar_set_value(ui_barBrew, 25, LV_ANIM_OFF);
    lv_bar_set_start_value(ui_barBrew, 25, LV_ANIM_OFF);
    lv_obj_set_width(ui_barBrew, 194);
    lv_obj_set_height(ui_barBrew, 6);
    lv_obj_set_x(ui_barBrew, 0);
    lv_obj_set_y(ui_barBrew, lv_pct(74));
    lv_obj_set_align(ui_barBrew, LV_ALIGN_TOP_MID);
    lv_obj_set_style_bg_color(ui_barBrew, lv_color_hex(0x474747), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_barBrew, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_radius(ui_barBrew, 4, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_barBrew, lv_color_hex(0xD9D9D9), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_barBrew, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_btnCancel, ui_event_btnCancel, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_preparing, ui_event_preparing, LV_EVENT_ALL, NULL);

}
