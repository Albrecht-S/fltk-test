// generated by Fast Light User Interface Designer (fluid) version 1.0100

#include "alignment_panel.h"

Fl_Window *alignment_window=(Fl_Window *)0;

static void cb_Close(Fl_Button*, void*) {
  alignment_window->hide();
}

Fl_Input *header_file_input=(Fl_Input *)0;

Fl_Input *code_file_input=(Fl_Input *)0;

Fl_Light_Button *include_H_from_C_button=(Fl_Light_Button *)0;

Fl_Choice *i18n_type_chooser=(Fl_Choice *)0;

Fl_Menu_Item menu_i18n_type_chooser[] = {
 {"None", 0,  0, 0, 0, 0, 0, 14, 56},
 {"GNU gettext", 0,  0, 0, 0, 0, 0, 14, 56},
 {"POSIX catgets", 0,  0, 0, 0, 0, 0, 14, 56},
 {0}
};

Fl_Input *i18n_include_input=(Fl_Input *)0;

Fl_Input *i18n_file_input=(Fl_Input *)0;

Fl_Input *i18n_set_input=(Fl_Input *)0;

Fl_Input *i18n_function_input=(Fl_Input *)0;

Fl_Window* make_alignment_window() {
  Fl_Window* w;
  { Fl_Window* o = alignment_window = new Fl_Window(365, 340, "Preferences");
    w = o;
    { Fl_Button* o = new Fl_Button(295, 305, 60, 25, "Close");
      o->tooltip("Close this dialog.");
      o->callback((Fl_Callback*)cb_Close);
    }
    { Fl_Box* o = new Fl_Box(10, 175, 345, 120, "Output File Names:");
      o->box(FL_ENGRAVED_FRAME);
      o->labelsize(12);
      o->align(FL_ALIGN_TOP_LEFT);
    }
    { Fl_Box* o = new Fl_Box(20, 185, 325, 15, "Use \"name.ext\" to set name or just \".ext\" to set only extension.");
      o->labelsize(10);
      o->align(132|FL_ALIGN_INSIDE);
    }
    { Fl_Input* o = header_file_input = new Fl_Input(100, 205, 245, 20, "Header File:");
      o->tooltip("The name of the generated header file.");
      o->box(FL_THIN_DOWN_BOX);
      o->textfont(4);
      o->callback((Fl_Callback*)header_input_cb, (void*)(1));
      o->when(FL_WHEN_CHANGED);
    }
    { Fl_Input* o = code_file_input = new Fl_Input(100, 235, 245, 20, "Code File:");
      o->tooltip("The name of the generated code file.");
      o->box(FL_THIN_DOWN_BOX);
      o->textfont(4);
      o->callback((Fl_Callback*)code_input_cb, (void*)(1));
      o->when(FL_WHEN_CHANGED);
    }
    { Fl_Light_Button* o = include_H_from_C_button = new Fl_Light_Button(100, 265, 170, 20, "Include Header from Code");
      o->tooltip("Include the header file from the code file.");
      o->value(1);
      o->labelsize(12);
      o->callback((Fl_Callback*)include_H_from_C_button_cb);
    }
    { Fl_Box* o = new Fl_Box(10, 25, 345, 130, "Internationalization:");
      o->box(FL_ENGRAVED_FRAME);
      o->labelsize(12);
      o->align(FL_ALIGN_TOP_LEFT);
    }
    { Fl_Choice* o = i18n_type_chooser = new Fl_Choice(100, 35, 125, 20, "Use:");
      o->tooltip("Type of internationalization to use.");
      o->box(FL_THIN_UP_BOX);
      o->down_box(FL_BORDER_BOX);
      o->callback((Fl_Callback*)i18n_type_cb);
      o->menu(menu_i18n_type_chooser);
    }
    { Fl_Input* o = i18n_include_input = new Fl_Input(100, 65, 245, 20, "#include:");
      o->tooltip("The include file for internationalization.");
      o->box(FL_THIN_DOWN_BOX);
      o->textfont(4);
      o->callback((Fl_Callback*)i18n_text_cb);
      o->hide();
    }
    { Fl_Input* o = i18n_file_input = new Fl_Input(100, 95, 245, 20, "File:");
      o->tooltip("The name of the message catalog.");
      o->box(FL_THIN_DOWN_BOX);
      o->textfont(4);
      o->callback((Fl_Callback*)i18n_text_cb);
      o->hide();
    }
    { Fl_Input* o = i18n_set_input = new Fl_Input(100, 125, 245, 20, "Set:");
      o->tooltip("The message set number.");
      o->type(2);
      o->box(FL_THIN_DOWN_BOX);
      o->textfont(4);
      o->callback((Fl_Callback*)i18n_text_cb);
      o->hide();
    }
    { Fl_Input* o = i18n_function_input = new Fl_Input(100, 95, 245, 20, "Function:");
      o->tooltip("The function to call to internationalize the labels and tooltips.");
      o->box(FL_THIN_DOWN_BOX);
      o->textfont(4);
      o->callback((Fl_Callback*)i18n_text_cb);
      o->hide();
    }
    o->set_modal();
    o->end();
  }
  return w;
}
extern void i18n_cb(Fl_Choice *,void *);
extern Fl_Preferences fluid_prefs;

Fl_Window *settings_window=(Fl_Window *)0;

static void cb_Close1(Fl_Button*, void*) {
  settings_window->hide();
}

Fl_Input *horizontal_input=(Fl_Input *)0;

Fl_Input *vertical_input=(Fl_Input *)0;

Fl_Input *snap_input=(Fl_Input *)0;

Fl_Check_Button *tooltips_button=(Fl_Check_Button *)0;

static void cb_tooltips_button(Fl_Check_Button*, void*) {
  Fl_Tooltip::enable(tooltips_button->value());
fluid_prefs.set("show_tooltips", tooltips_button->value());
}

Fl_Check_Button *completion_button=(Fl_Check_Button *)0;

static void cb_completion_button(Fl_Check_Button*, void*) {
  fluid_prefs.set("show_completion_dialogs", completion_button->value());
}

Fl_Check_Button *openlast_button=(Fl_Check_Button *)0;

static void cb_openlast_button(Fl_Check_Button*, void*) {
  fluid_prefs.set("open_previous_file", openlast_button->value());
}

Fl_Window* make_settings_window() {
  Fl_Window* w;
  { Fl_Window* o = settings_window = new Fl_Window(400, 175, "Settings");
    w = o;
    { Fl_Button* o = new Fl_Button(330, 140, 60, 25, "Close");
      o->tooltip("Close this dialog.");
      o->callback((Fl_Callback*)cb_Close1);
    }
    { Fl_Box* o = new Fl_Box(15, 30, 130, 100, "Grid:");
      o->box(FL_ENGRAVED_FRAME);
      o->labelsize(12);
      o->align(FL_ALIGN_TOP_LEFT);
    }
    { Fl_Input* o = horizontal_input = new Fl_Input(95, 40, 40, 20, "Horizontal:");
      o->tooltip("Horizontal grid spacing.");
      o->type(2);
      o->box(FL_THIN_DOWN_BOX);
      o->callback((Fl_Callback*)grid_cb, (void*)(1));
      o->when(FL_WHEN_RELEASE|FL_WHEN_ENTER_KEY);
    }
    { Fl_Input* o = vertical_input = new Fl_Input(95, 70, 40, 20, "Vertical:");
      o->tooltip("Vertical grid spacing.");
      o->type(2);
      o->box(FL_THIN_DOWN_BOX);
      o->callback((Fl_Callback*)grid_cb, (void*)(2));
      o->when(FL_WHEN_RELEASE|FL_WHEN_ENTER_KEY);
    }
    { Fl_Input* o = snap_input = new Fl_Input(95, 100, 40, 20, "Snap:");
      o->tooltip("Snap to grid within this many pixels.");
      o->type(2);
      o->box(FL_THIN_DOWN_BOX);
      o->callback((Fl_Callback*)grid_cb, (void*)(3));
      o->when(FL_WHEN_RELEASE|FL_WHEN_ENTER_KEY);
    }
    { Fl_Box* o = new Fl_Box(155, 30, 235, 100, "GUI:");
      o->box(FL_ENGRAVED_FRAME);
      o->labelsize(12);
      o->align(FL_ALIGN_TOP_LEFT);
    }
    { Fl_Check_Button* o = tooltips_button = new Fl_Check_Button(165, 40, 215, 20, "Show Tooltips");
      o->down_box(FL_DOWN_BOX);
      o->callback((Fl_Callback*)cb_tooltips_button);
      char b;
      fluid_prefs.get("show_tooltips", b, 1);
      tooltips_button->value(b);
      Fl_Tooltip::enable(b);
    }
    { Fl_Check_Button* o = completion_button = new Fl_Check_Button(165, 70, 215, 20, "Show Completion Dialogs");
      o->down_box(FL_DOWN_BOX);
      o->callback((Fl_Callback*)cb_completion_button);
      char b;
      fluid_prefs.get("show_completion_dialogs", b, 1);
      completion_button->value(b);
    }
    { Fl_Check_Button* o = openlast_button = new Fl_Check_Button(165, 100, 215, 20, "Open Previous File on Startup");
      o->down_box(FL_DOWN_BOX);
      o->callback((Fl_Callback*)cb_openlast_button);
      char b;
      fluid_prefs.get("open_previous_file", b, 0);
      openlast_button->value(b);
    }
    o->end();
  }
  return w;
}
