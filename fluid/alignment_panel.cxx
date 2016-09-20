//
// "$Id$"
//
// Setting and shell dialogs for the Fast Light Tool Kit (FLTK).
//
// Copyright 1998-2016 by Bill Spitzak and others.
//
// This library is free software. Distribution and use rights are outlined in
// the file "COPYING" which should have been included with this file.  If this
// file is missing or damaged, see the license at:
//
//     http://www.fltk.org/COPYING.php
//
// Please report all bugs and problems on the following page:
//
//     http://www.fltk.org/str.php
//

// generated by Fast Light User Interface Designer (fluid) version 1.0304

#include "alignment_panel.h"
#include <FL/Fl_Preferences.H>
#include <FL/fl_ask.H>
Fl_Text_Buffer *shell_run_buffer; 

Fl_Double_Window *project_window=(Fl_Double_Window *)0;

static void cb_Close(Fl_Button*, void*) {
  project_window->hide();
}

Fl_Input *header_file_input=(Fl_Input *)0;

Fl_Input *code_file_input=(Fl_Input *)0;

Fl_Check_Button *include_H_from_C_button=(Fl_Check_Button *)0;

Fl_Check_Button *use_FL_COMMAND_button=(Fl_Check_Button *)0;

Fl_Choice *i18n_type_chooser=(Fl_Choice *)0;

Fl_Menu_Item menu_i18n_type_chooser[] = {
 {"None", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 14, 0},
 {"GNU gettext", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 14, 0},
 {"POSIX catgets", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 14, 0},
 {0,0,0,0,0,0,0,0,0}
};

Fl_Input *i18n_include_input=(Fl_Input *)0;

Fl_Input *i18n_file_input=(Fl_Input *)0;

Fl_Int_Input *i18n_set_input=(Fl_Int_Input *)0;

Fl_Input *i18n_function_input=(Fl_Input *)0;

Fl_Double_Window* make_project_window() {
  { project_window = new Fl_Double_Window(399, 252, "Project Settings");
    { Fl_Button* o = new Fl_Button(328, 216, 60, 25, "Close");
      o->tooltip("Close this dialog.");
      o->callback((Fl_Callback*)cb_Close);
    } // Fl_Button* o
    { Fl_Tabs* o = new Fl_Tabs(10, 10, 378, 195);
      o->selection_color((Fl_Color)12);
      { Fl_Group* o = new Fl_Group(10, 36, 378, 169, "Output");
        o->hide();
        { Fl_Box* o = new Fl_Box(20, 49, 340, 49, "Use \"name.ext\" to set a file name or just \".ext\" to set extension.");
          o->align(Fl_Align(132|FL_ALIGN_INSIDE));
        } // Fl_Box* o
        { header_file_input = new Fl_Input(119, 103, 252, 20, "Header File:");
          header_file_input->tooltip("The name of the generated header file.");
          header_file_input->box(FL_THIN_DOWN_BOX);
          header_file_input->labelfont(1);
          header_file_input->textfont(4);
          header_file_input->callback((Fl_Callback*)header_input_cb, (void*)(1));
          header_file_input->when(FL_WHEN_CHANGED);
        } // Fl_Input* header_file_input
        { code_file_input = new Fl_Input(119, 128, 252, 20, "Code File:");
          code_file_input->tooltip("The name of the generated code file.");
          code_file_input->box(FL_THIN_DOWN_BOX);
          code_file_input->labelfont(1);
          code_file_input->textfont(4);
          code_file_input->callback((Fl_Callback*)code_input_cb, (void*)(1));
          code_file_input->when(FL_WHEN_CHANGED);
        } // Fl_Input* code_file_input
        { include_H_from_C_button = new Fl_Check_Button(117, 153, 272, 20, "Include Header from Code");
          include_H_from_C_button->tooltip("Include the header file from the code file.");
          include_H_from_C_button->down_box(FL_DOWN_BOX);
          include_H_from_C_button->callback((Fl_Callback*)include_H_from_C_button_cb);
        } // Fl_Check_Button* include_H_from_C_button
        { use_FL_COMMAND_button = new Fl_Check_Button(117, 176, 272, 20, "Menu shortcuts use FL_COMMAND");
          use_FL_COMMAND_button->tooltip("Replace FL_CTRL with FL_COMMAND when generating menu shortcut code.");
          use_FL_COMMAND_button->down_box(FL_DOWN_BOX);
          use_FL_COMMAND_button->callback((Fl_Callback*)use_FL_COMMAND_button_cb);
        } // Fl_Check_Button* use_FL_COMMAND_button
        o->end();
      } // Fl_Group* o
      { Fl_Group* o = new Fl_Group(10, 36, 378, 169, "Internationalization");
        { i18n_type_chooser = new Fl_Choice(100, 48, 136, 25, "Use:");
          i18n_type_chooser->tooltip("Type of internationalization to use.");
          i18n_type_chooser->box(FL_THIN_UP_BOX);
          i18n_type_chooser->down_box(FL_BORDER_BOX);
          i18n_type_chooser->labelfont(1);
          i18n_type_chooser->callback((Fl_Callback*)i18n_type_cb);
          i18n_type_chooser->menu(menu_i18n_type_chooser);
        } // Fl_Choice* i18n_type_chooser
        { i18n_include_input = new Fl_Input(100, 78, 272, 20, "#include:");
          i18n_include_input->tooltip("The include file for internationalization.");
          i18n_include_input->box(FL_THIN_DOWN_BOX);
          i18n_include_input->labelfont(1);
          i18n_include_input->textfont(4);
          i18n_include_input->callback((Fl_Callback*)i18n_text_cb);
        } // Fl_Input* i18n_include_input
        { i18n_file_input = new Fl_Input(100, 104, 272, 20, "File:");
          i18n_file_input->tooltip("The name of the message catalog.");
          i18n_file_input->box(FL_THIN_DOWN_BOX);
          i18n_file_input->labelfont(1);
          i18n_file_input->textfont(4);
          i18n_file_input->callback((Fl_Callback*)i18n_text_cb);
        } // Fl_Input* i18n_file_input
        { i18n_set_input = new Fl_Int_Input(100, 128, 272, 20, "Set:");
          i18n_set_input->tooltip("The message set number.");
          i18n_set_input->type(2);
          i18n_set_input->box(FL_THIN_DOWN_BOX);
          i18n_set_input->labelfont(1);
          i18n_set_input->textfont(4);
          i18n_set_input->callback((Fl_Callback*)i18n_int_cb);
        } // Fl_Int_Input* i18n_set_input
        { i18n_function_input = new Fl_Input(100, 103, 272, 20, "Function:");
          i18n_function_input->tooltip("The function to call to internationalize the labels and tooltips.");
          i18n_function_input->box(FL_THIN_DOWN_BOX);
          i18n_function_input->labelfont(1);
          i18n_function_input->textfont(4);
          i18n_function_input->callback((Fl_Callback*)i18n_text_cb);
        } // Fl_Input* i18n_function_input
        o->end();
      } // Fl_Group* o
      o->end();
    } // Fl_Tabs* o
    project_window->set_modal();
    project_window->end();
  } // Fl_Double_Window* project_window
  return project_window;
}
void scheme_cb(Fl_Choice *, void *); 

Fl_Double_Window *settings_window=(Fl_Double_Window *)0;

Fl_Choice *scheme_choice=(Fl_Choice *)0;

Fl_Menu_Item menu_scheme_choice[] = {
 {"Default", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 14, 0},
 {"None", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 14, 0},
 {"Plastic", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 14, 0},
 {"GTK+", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 14, 0},
 {"Gleam", 0,  0, 0, 0, (uchar)FL_NORMAL_LABEL, 0, 14, 0},
 {0,0,0,0,0,0,0,0,0}
};

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

Fl_Check_Button *prevpos_button=(Fl_Check_Button *)0;

static void cb_prevpos_button(Fl_Check_Button*, void*) {
  fluid_prefs.set("prev_window_pos", prevpos_button->value());
}

Fl_Check_Button *show_comments_button=(Fl_Check_Button *)0;

static void cb_show_comments_button(Fl_Check_Button*, void*) {
  show_comments = show_comments_button->value();
fluid_prefs.set("show_comments", show_comments);
redraw_browser();
}

Fl_Spinner *recent_spinner=(Fl_Spinner *)0;

static void cb_recent_spinner(Fl_Spinner*, void*) {
  fluid_prefs.set("recent_files", recent_spinner->value());
load_history();
}

Fl_Check_Button *use_external_editor_button=(Fl_Check_Button *)0;

static void cb_use_external_editor_button(Fl_Check_Button*, void*) {
  G_use_external_editor = use_external_editor_button->value();
fluid_prefs.set("use_external_editor", G_use_external_editor);
redraw_browser();
}

Fl_Input *editor_command_input=(Fl_Input *)0;

static void cb_editor_command_input(Fl_Input*, void*) {
  strncpy(G_external_editor_command, editor_command_input->value(), sizeof(G_external_editor_command)-1);
G_external_editor_command[sizeof(G_external_editor_command)-1] = 0;
fluid_prefs.set("external_editor_command", G_external_editor_command);
redraw_browser();
}

static void cb_Close1(Fl_Button*, void*) {
  settings_window->hide();
}

Fl_Double_Window* make_settings_window() {
  { Fl_Double_Window* o = settings_window = new Fl_Double_Window(360, 355, "GUI Settings");
    { scheme_choice = new Fl_Choice(140, 10, 115, 25, "Scheme: ");
      scheme_choice->down_box(FL_BORDER_BOX);
      scheme_choice->labelfont(1);
      scheme_choice->callback((Fl_Callback*)scheme_cb);
      scheme_choice->menu(menu_scheme_choice);
      int s;
      fluid_prefs.get("scheme", s, 0);
      scheme_choice->value(s);
      scheme_cb(0, 0);
    } // Fl_Choice* scheme_choice
    { Fl_Group* o = new Fl_Group(20, 43, 330, 161);
      o->labelfont(1);
      o->align(Fl_Align(FL_ALIGN_CENTER));
      { Fl_Box* o = new Fl_Box(140, 43, 1, 25, "Options: ");
        o->labelfont(1);
        o->align(Fl_Align(FL_ALIGN_LEFT));
      } // Fl_Box* o
      { tooltips_button = new Fl_Check_Button(138, 43, 113, 25, "Show Tooltips");
        tooltips_button->down_box(FL_DOWN_BOX);
        tooltips_button->labelsize(12);
        tooltips_button->callback((Fl_Callback*)cb_tooltips_button);
        int b;
        fluid_prefs.get("show_tooltips", b, 1);
        tooltips_button->value(b);
        Fl_Tooltip::enable(b);
      } // Fl_Check_Button* tooltips_button
      { completion_button = new Fl_Check_Button(138, 68, 186, 25, "Show Completion Dialogs");
        completion_button->down_box(FL_DOWN_BOX);
        completion_button->labelsize(12);
        completion_button->callback((Fl_Callback*)cb_completion_button);
        int b;
        fluid_prefs.get("show_completion_dialogs", b, 1);
        completion_button->value(b);
      } // Fl_Check_Button* completion_button
      { openlast_button = new Fl_Check_Button(138, 93, 214, 25, "Open Previous File on Startup");
        openlast_button->down_box(FL_DOWN_BOX);
        openlast_button->labelsize(12);
        openlast_button->callback((Fl_Callback*)cb_openlast_button);
        int b;
        fluid_prefs.get("open_previous_file", b, 0);
        openlast_button->value(b);
      } // Fl_Check_Button* openlast_button
      { prevpos_button = new Fl_Check_Button(138, 118, 209, 25, "Remember Window Positions");
        prevpos_button->down_box(FL_DOWN_BOX);
        prevpos_button->labelsize(12);
        prevpos_button->callback((Fl_Callback*)cb_prevpos_button);
        int b;
        fluid_prefs.get("prev_window_pos", b, 1);
        prevpos_button->value(b);
      } // Fl_Check_Button* prevpos_button
      { show_comments_button = new Fl_Check_Button(138, 143, 209, 25, "Show Comments in Browser");
        show_comments_button->down_box(FL_DOWN_BOX);
        show_comments_button->labelsize(12);
        show_comments_button->callback((Fl_Callback*)cb_show_comments_button);
        fluid_prefs.get("show_comments", show_comments, 1);
        show_comments_button->value(show_comments);
      } // Fl_Check_Button* show_comments_button
      o->end();
    } // Fl_Group* o
    { recent_spinner = new Fl_Spinner(140, 173, 40, 25, "# Recent Files: ");
      recent_spinner->labelfont(1);
      recent_spinner->callback((Fl_Callback*)cb_recent_spinner);
      recent_spinner->when(FL_WHEN_CHANGED);
      int c;
      fluid_prefs.get("recent_files", c, 5);
      recent_spinner->maximum(10);
      recent_spinner->value(c);
    } // Fl_Spinner* recent_spinner
    { Fl_Group* o = new Fl_Group(10, 210, 337, 95);
      o->box(FL_THIN_UP_BOX);
      o->color(FL_DARK1);
      { use_external_editor_button = new Fl_Check_Button(25, 218, 209, 22, "Use external editor?");
        use_external_editor_button->down_box(FL_DOWN_BOX);
        use_external_editor_button->labelsize(12);
        use_external_editor_button->callback((Fl_Callback*)cb_use_external_editor_button);
        fluid_prefs.get("use_external_editor", G_use_external_editor, 0);
        use_external_editor_button->value(G_use_external_editor);
      } // Fl_Check_Button* use_external_editor_button
      { editor_command_input = new Fl_Input(25, 264, 305, 21, "Editor Command");
        editor_command_input->tooltip("The editor command to open your external text editor.\nInclude any necessary \
flags to ensure your editor does not background itself.\nExamples:\n    gvim -\
f\n    gedit\n emacs");
        editor_command_input->labelsize(12);
        editor_command_input->textsize(12);
        editor_command_input->callback((Fl_Callback*)cb_editor_command_input);
        editor_command_input->align(Fl_Align(FL_ALIGN_TOP_LEFT));
        editor_command_input->when(FL_WHEN_CHANGED);
        fluid_prefs.get("external_editor_command", G_external_editor_command, "", sizeof(G_external_editor_command)-1);
        editor_command_input->value(G_external_editor_command);
      } // Fl_Input* editor_command_input
      o->end();
      Fl_Group::current()->resizable(o);
    } // Fl_Group* o
    { Fl_Button* o = new Fl_Button(285, 320, 64, 25, "Close");
      o->tooltip("Close this dialog.");
      o->callback((Fl_Callback*)cb_Close1);
    } // Fl_Button* o
    o->size_range(o->w(), o->h());
    settings_window->set_non_modal();
    settings_window->end();
  } // Fl_Double_Window* settings_window
  return settings_window;
}

Fl_Double_Window *shell_window=(Fl_Double_Window *)0;

Fl_Input *shell_command_input=(Fl_Input *)0;

static void cb_shell_command_input(Fl_Input*, void*) {
  fluid_prefs.set("shell_command", shell_command_input->value());
}

Fl_Check_Button *shell_writecode_button=(Fl_Check_Button *)0;

static void cb_shell_writecode_button(Fl_Check_Button*, void*) {
  fluid_prefs.set("shell_writecode", shell_writecode_button->value());
}

Fl_Check_Button *shell_writemsgs_button=(Fl_Check_Button *)0;

static void cb_shell_writemsgs_button(Fl_Check_Button*, void*) {
  fluid_prefs.set("shell_writemsgs", shell_writemsgs_button->value());
}

Fl_Check_Button *shell_savefl_button=(Fl_Check_Button *)0;

static void cb_shell_savefl_button(Fl_Check_Button*, void*) {
  fluid_prefs.set("shell_savefl", shell_savefl_button->value());
}

static void cb_Cancel(Fl_Button*, void*) {
  shell_window->hide();
}

Fl_Double_Window *shell_run_window=(Fl_Double_Window *)0;

Fl_Text_Display *shell_run_display=(Fl_Text_Display *)0;

Fl_Return_Button *shell_run_button=(Fl_Return_Button *)0;

static void cb_shell_run_button(Fl_Return_Button*, void*) {
  shell_run_window->hide();
}

Fl_Double_Window* make_shell_window() {
  { shell_window = new Fl_Double_Window(365, 125, "Shell Command");
    { shell_command_input = new Fl_Input(10, 27, 347, 25, "Command:");
      shell_command_input->labelfont(1);
      shell_command_input->callback((Fl_Callback*)cb_shell_command_input);
      shell_command_input->align(Fl_Align(FL_ALIGN_TOP_LEFT));
      char buf[1024];
      fluid_prefs.get("shell_command", buf, "", sizeof(buf));
      shell_command_input->value(buf);
    } // Fl_Input* shell_command_input
    { shell_writecode_button = new Fl_Check_Button(128, 61, 93, 19, "Write Code");
      shell_writecode_button->down_box(FL_DOWN_BOX);
      shell_writecode_button->callback((Fl_Callback*)cb_shell_writecode_button);
      int b;
      fluid_prefs.get("shell_writecode", b, 1);
      shell_writecode_button->value(b);
    } // Fl_Check_Button* shell_writecode_button
    { shell_writemsgs_button = new Fl_Check_Button(231, 61, 126, 19, "Write Messages");
      shell_writemsgs_button->down_box(FL_DOWN_BOX);
      shell_writemsgs_button->callback((Fl_Callback*)cb_shell_writemsgs_button);
      int b;
      fluid_prefs.get("shell_writemsgs", b, 0);
      shell_writemsgs_button->value(b);
    } // Fl_Check_Button* shell_writemsgs_button
    { shell_savefl_button = new Fl_Check_Button(10, 62, 108, 19, "Save .FL File");
      shell_savefl_button->down_box(FL_DOWN_BOX);
      shell_savefl_button->callback((Fl_Callback*)cb_shell_savefl_button);
      int b;
      fluid_prefs.get("shell_savefl", b, 1);
      shell_savefl_button->value(b);
    } // Fl_Check_Button* shell_savefl_button
    { Fl_Return_Button* o = new Fl_Return_Button(132, 90, 143, 25, "Run Command");
      o->callback((Fl_Callback*)do_shell_command);
    } // Fl_Return_Button* o
    { Fl_Button* o = new Fl_Button(285, 90, 72, 25, "Cancel");
      o->callback((Fl_Callback*)cb_Cancel);
    } // Fl_Button* o
    shell_window->end();
  } // Fl_Double_Window* shell_window
  { shell_run_window = new Fl_Double_Window(555, 430, "Shell Command Output");
    { shell_run_display = new Fl_Text_Display(10, 10, 535, 375);
      shell_run_display->box(FL_DOWN_BOX);
      shell_run_display->textfont(4);
      Fl_Group::current()->resizable(shell_run_display);
      shell_run_buffer = new Fl_Text_Buffer();
      shell_run_display->buffer(shell_run_buffer);
    } // Fl_Text_Display* shell_run_display
    { shell_run_button = new Fl_Return_Button(468, 395, 77, 25, "Close");
      shell_run_button->callback((Fl_Callback*)cb_shell_run_button);
    } // Fl_Return_Button* shell_run_button
    shell_run_window->end();
  } // Fl_Double_Window* shell_run_window
  return shell_run_window;
}

Fl_Double_Window *grid_window=(Fl_Double_Window *)0;

Fl_Int_Input *horizontal_input=(Fl_Int_Input *)0;

Fl_Int_Input *vertical_input=(Fl_Int_Input *)0;

Fl_Int_Input *snap_input=(Fl_Int_Input *)0;

Fl_Check_Button *guides_toggle=(Fl_Check_Button *)0;

static void cb_Close2(Fl_Button*, void*) {
  grid_window->hide();
}

Fl_Round_Button *def_widget_size[6]={(Fl_Round_Button *)0};

Fl_Double_Window* make_layout_window() {
  { grid_window = new Fl_Double_Window(310, 245, "Layout Settings");
    { Fl_Int_Input* o = horizontal_input = new Fl_Int_Input(116, 10, 50, 25, "x");
      horizontal_input->tooltip("Horizontal grid spacing.");
      horizontal_input->type(2);
      horizontal_input->box(FL_THIN_DOWN_BOX);
      horizontal_input->callback((Fl_Callback*)grid_cb, (void*)(1));
      horizontal_input->align(Fl_Align(FL_ALIGN_RIGHT));
      o->when(FL_WHEN_RELEASE|FL_WHEN_ENTER_KEY);
    } // Fl_Int_Input* horizontal_input
    { Fl_Int_Input* o = vertical_input = new Fl_Int_Input(179, 10, 50, 25, "pixels");
      vertical_input->tooltip("Vertical grid spacing.");
      vertical_input->type(2);
      vertical_input->box(FL_THIN_DOWN_BOX);
      vertical_input->callback((Fl_Callback*)grid_cb, (void*)(2));
      vertical_input->align(Fl_Align(FL_ALIGN_RIGHT));
      o->when(FL_WHEN_RELEASE|FL_WHEN_ENTER_KEY);
    } // Fl_Int_Input* vertical_input
    { Fl_Int_Input* o = snap_input = new Fl_Int_Input(116, 45, 50, 25, "pixel snap");
      snap_input->tooltip("Snap to grid within this many pixels.");
      snap_input->type(2);
      snap_input->box(FL_THIN_DOWN_BOX);
      snap_input->callback((Fl_Callback*)grid_cb, (void*)(3));
      snap_input->align(Fl_Align(FL_ALIGN_RIGHT));
      o->when(FL_WHEN_RELEASE|FL_WHEN_ENTER_KEY);
    } // Fl_Int_Input* snap_input
    { guides_toggle = new Fl_Check_Button(116, 80, 110, 25, "Show Guides");
      guides_toggle->tooltip("Show distance and alignment guides in overlay");
      guides_toggle->down_box(FL_DOWN_BOX);
      guides_toggle->callback((Fl_Callback*)guides_cb, (void*)(4));
    } // Fl_Check_Button* guides_toggle
    { Fl_Button* o = new Fl_Button(240, 210, 60, 25, "Close");
      o->tooltip("Close this dialog.");
      o->callback((Fl_Callback*)cb_Close2);
    } // Fl_Button* o
    { Fl_Box* o = new Fl_Box(47, 10, 70, 25, "Grid:");
      o->labelfont(1);
      o->align(Fl_Align(FL_ALIGN_RIGHT|FL_ALIGN_INSIDE));
    } // Fl_Box* o
    { Fl_Box* o = new Fl_Box(10, 115, 107, 25, "Widget Size:");
      o->labelfont(1);
      o->align(Fl_Align(FL_ALIGN_RIGHT|FL_ALIGN_INSIDE));
    } // Fl_Box* o
    { Fl_Group* o = new Fl_Group(105, 115, 170, 75);
      { def_widget_size[0] = new Fl_Round_Button(115, 115, 70, 25);
        def_widget_size[0]->type(102);
        def_widget_size[0]->down_box(FL_ROUND_DOWN_BOX);
        def_widget_size[0]->callback((Fl_Callback*)default_widget_size_cb, (void*)(8));
      } // Fl_Round_Button* def_widget_size[0]
      { Fl_Box* o = new Fl_Box(130, 115, 50, 25, "tiny");
        o->labelsize(8);
        o->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
      } // Fl_Box* o
      { def_widget_size[1] = new Fl_Round_Button(202, 115, 70, 25);
        def_widget_size[1]->type(102);
        def_widget_size[1]->down_box(FL_ROUND_DOWN_BOX);
        def_widget_size[1]->callback((Fl_Callback*)default_widget_size_cb, (void*)(11));
      } // Fl_Round_Button* def_widget_size[1]
      { Fl_Box* o = new Fl_Box(218, 115, 50, 25, "small");
        o->labelsize(11);
        o->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
      } // Fl_Box* o
      { def_widget_size[2] = new Fl_Round_Button(115, 140, 70, 25);
        def_widget_size[2]->type(102);
        def_widget_size[2]->down_box(FL_ROUND_DOWN_BOX);
        def_widget_size[2]->callback((Fl_Callback*)default_widget_size_cb, (void*)(14));
      } // Fl_Round_Button* def_widget_size[2]
      { Fl_Box* o = new Fl_Box(130, 140, 50, 25, "normal");
        o->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
      } // Fl_Box* o
      { def_widget_size[3] = new Fl_Round_Button(202, 140, 90, 25);
        def_widget_size[3]->type(102);
        def_widget_size[3]->down_box(FL_ROUND_DOWN_BOX);
        def_widget_size[3]->callback((Fl_Callback*)default_widget_size_cb, (void*)(18));
      } // Fl_Round_Button* def_widget_size[3]
      { Fl_Box* o = new Fl_Box(218, 140, 68, 25, "medium");
        o->labelsize(18);
        o->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
      } // Fl_Box* o
      { def_widget_size[4] = new Fl_Round_Button(115, 165, 75, 25);
        def_widget_size[4]->type(102);
        def_widget_size[4]->down_box(FL_ROUND_DOWN_BOX);
        def_widget_size[4]->callback((Fl_Callback*)default_widget_size_cb, (void*)(24));
      } // Fl_Round_Button* def_widget_size[4]
      { Fl_Box* o = new Fl_Box(130, 165, 64, 25, "large");
        o->labelsize(24);
        o->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
      } // Fl_Box* o
      { def_widget_size[5] = new Fl_Round_Button(202, 165, 95, 25);
        def_widget_size[5]->type(102);
        def_widget_size[5]->down_box(FL_ROUND_DOWN_BOX);
        def_widget_size[5]->callback((Fl_Callback*)default_widget_size_cb, (void*)(32));
      } // Fl_Round_Button* def_widget_size[5]
      { Fl_Box* o = new Fl_Box(218, 165, 76, 25, "huge");
        o->labelsize(32);
        o->align(Fl_Align(FL_ALIGN_LEFT|FL_ALIGN_INSIDE));
      } // Fl_Box* o
      o->end();
    } // Fl_Group* o
    grid_window->set_non_modal();
    grid_window->end();
  } // Fl_Double_Window* grid_window
  return grid_window;
}
/**
 Copy of all options in user and system mode
*/
static int opt[10][2]; 

/**
 Update the UI using the values in the opt array
*/
static void refreshUI() {
  int mode = wUserOrSystem->value();
  wVisibleFocus->value(opt[Fl::OPTION_VISIBLE_FOCUS][mode]);
  wArrowFocus->value(opt[Fl::OPTION_ARROW_FOCUS][mode]);
  wShowTooltips->value(opt[Fl::OPTION_SHOW_TOOLTIPS][mode]);
  wDNDText->value(opt[Fl::OPTION_DND_TEXT][mode]);
  wGTKText->value(opt[Fl::OPTION_FNFC_USES_GTK][mode]);
}

/**
 read all preferences and refresh the GUI
*/
static void readPrefs() {
  // read all preferences and refresh the GUI
  {
    Fl_Preferences prefs(Fl_Preferences::SYSTEM, "fltk.org", "fltk");
    Fl_Preferences opt_prefs(prefs, "options");
    opt_prefs.get("ArrowFocus", opt[Fl::OPTION_ARROW_FOCUS][1], 2);
    opt_prefs.get("VisibleFocus", opt[Fl::OPTION_VISIBLE_FOCUS][1], 2);
    opt_prefs.get("DNDText", opt[Fl::OPTION_DND_TEXT][1], 2);
    opt_prefs.get("ShowTooltips", opt[Fl::OPTION_SHOW_TOOLTIPS][1], 2);
    opt_prefs.get("FNFCUsesGTK", opt[Fl::OPTION_FNFC_USES_GTK ][1], 2);
  }
  {
    Fl_Preferences prefs(Fl_Preferences::USER, "fltk.org", "fltk");
    Fl_Preferences opt_prefs(prefs, "options");
    opt_prefs.get("ArrowFocus", opt[Fl::OPTION_ARROW_FOCUS][0], 2);
    opt_prefs.get("VisibleFocus", opt[Fl::OPTION_VISIBLE_FOCUS][0], 2);
    opt_prefs.get("DNDText", opt[Fl::OPTION_DND_TEXT][0], 2);
    opt_prefs.get("ShowTooltips", opt[Fl::OPTION_SHOW_TOOLTIPS][0], 2);
    opt_prefs.get("FNFCUsesGTK", opt[Fl::OPTION_FNFC_USES_GTK ][0], 2);
  }
  refreshUI();
}

/**
 write all preferences using the array
*/
static void writePrefs() {
  // write all preferences using the array
  {
    Fl_Preferences prefs(Fl_Preferences::SYSTEM, "fltk.org", "fltk");
    Fl_Preferences opt_prefs(prefs, "options");
    if (opt[Fl::OPTION_ARROW_FOCUS][1]==2) opt_prefs.deleteEntry("ArrowFocus");
    else opt_prefs.set("ArrowFocus", opt[Fl::OPTION_ARROW_FOCUS][1]);
    if (opt[Fl::OPTION_VISIBLE_FOCUS][1]==2) opt_prefs.deleteEntry("VisibleFocus");
    else opt_prefs.set("VisibleFocus", opt[Fl::OPTION_VISIBLE_FOCUS][1]);
    if (opt[Fl::OPTION_DND_TEXT][1]==2) opt_prefs.deleteEntry("DNDText");
    else opt_prefs.set("DNDText", opt[Fl::OPTION_DND_TEXT][1]);
    if (opt[Fl::OPTION_SHOW_TOOLTIPS][1]==2) opt_prefs.deleteEntry("ShowTooltips");
    else opt_prefs.set("ShowTooltips", opt[Fl::OPTION_SHOW_TOOLTIPS][1]);
    if (opt[Fl::OPTION_FNFC_USES_GTK][1]==2) opt_prefs.deleteEntry("FNFCUsesGTK");
    else opt_prefs.set("FNFCUsesGTK", opt[Fl::OPTION_FNFC_USES_GTK][1]);
  }
  {
    Fl_Preferences prefs(Fl_Preferences::USER, "fltk.org", "fltk");
    Fl_Preferences opt_prefs(prefs, "options");
    if (opt[Fl::OPTION_ARROW_FOCUS][0]==2) opt_prefs.deleteEntry("ArrowFocus");
    else opt_prefs.set("ArrowFocus", opt[Fl::OPTION_ARROW_FOCUS][0]);
    if (opt[Fl::OPTION_VISIBLE_FOCUS][0]==2) opt_prefs.deleteEntry("VisibleFocus");
    else opt_prefs.set("VisibleFocus", opt[Fl::OPTION_VISIBLE_FOCUS][0]);
    if (opt[Fl::OPTION_DND_TEXT][0]==2) opt_prefs.deleteEntry("DNDText");
    else opt_prefs.set("DNDText", opt[Fl::OPTION_DND_TEXT][0]);
    if (opt[Fl::OPTION_SHOW_TOOLTIPS][0]==2) opt_prefs.deleteEntry("ShowTooltips");
    else opt_prefs.set("ShowTooltips", opt[Fl::OPTION_SHOW_TOOLTIPS][0]);
    if (opt[Fl::OPTION_FNFC_USES_GTK][0]==2) opt_prefs.deleteEntry("FNFCUsesGTK");
    else opt_prefs.set("FNFCUsesGTK", opt[Fl::OPTION_FNFC_USES_GTK][0]);
  }
}

void show_global_settings_window() {
  if (!global_settings_window)
    make_global_settings_window();
  readPrefs();
  refreshUI();
  fl_message(
  	"WARNING!\n\n"
  	"The following dialog changes the user interface behavior\n"
  	"of ALL FLTK applications, for the current user, or for \n"
  	"ALL users on this machine.\n\n"
  	"Please choose these settings carefully, or reset\n"
  	"user and system settings to \"default\".");
  global_settings_window->show();
}

Fl_Double_Window *global_settings_window=(Fl_Double_Window *)0;

Fl_Choice *wVisibleFocus=(Fl_Choice *)0;

static void cb_wVisibleFocus(Fl_Choice*, void*) {
  int mode = wUserOrSystem->value();
opt[Fl::OPTION_VISIBLE_FOCUS][mode] = wVisibleFocus->value();
}

Fl_Menu_Item menu_wVisibleFocus[] = {
 {"off", 0,  0, (void*)(0), 0, (uchar)FL_NORMAL_LABEL, 0, 14, 0},
 {"on", 0,  0, (void*)(1), 128, (uchar)FL_NORMAL_LABEL, 0, 14, 0},
 {"default", 0,  0, (void*)(2), 0, (uchar)FL_NORMAL_LABEL, 0, 14, 0},
 {0,0,0,0,0,0,0,0,0}
};

Fl_Choice *wArrowFocus=(Fl_Choice *)0;

static void cb_wArrowFocus(Fl_Choice*, void*) {
  int mode = wUserOrSystem->value();
opt[Fl::OPTION_ARROW_FOCUS][mode] = wArrowFocus->value();
}

Fl_Menu_Item menu_wArrowFocus[] = {
 {"off", 0,  0, (void*)(0), 0, (uchar)FL_NORMAL_LABEL, 0, 14, 0},
 {"on", 0,  0, (void*)(1), 128, (uchar)FL_NORMAL_LABEL, 0, 14, 0},
 {"default", 0,  0, (void*)(2), 0, (uchar)FL_NORMAL_LABEL, 0, 14, 0},
 {0,0,0,0,0,0,0,0,0}
};

Fl_Choice *wShowTooltips=(Fl_Choice *)0;

static void cb_wShowTooltips(Fl_Choice*, void*) {
  int mode = wUserOrSystem->value();
opt[Fl::OPTION_SHOW_TOOLTIPS][mode] = wShowTooltips->value();
}

Fl_Menu_Item menu_wShowTooltips[] = {
 {"off", 0,  0, (void*)(0), 0, (uchar)FL_NORMAL_LABEL, 0, 14, 0},
 {"on", 0,  0, (void*)(1), 128, (uchar)FL_NORMAL_LABEL, 0, 14, 0},
 {"default", 0,  0, (void*)(2), 0, (uchar)FL_NORMAL_LABEL, 0, 14, 0},
 {0,0,0,0,0,0,0,0,0}
};

Fl_Choice *wDNDText=(Fl_Choice *)0;

static void cb_wDNDText(Fl_Choice*, void*) {
  int mode = wUserOrSystem->value();
opt[Fl::OPTION_DND_TEXT][mode] = wDNDText->value();
}

Fl_Menu_Item menu_wDNDText[] = {
 {"off", 0,  0, (void*)(0), 0, (uchar)FL_NORMAL_LABEL, 0, 14, 0},
 {"on", 0,  0, (void*)(1), 128, (uchar)FL_NORMAL_LABEL, 0, 14, 0},
 {"default", 0,  0, (void*)(2), 0, (uchar)FL_NORMAL_LABEL, 0, 14, 0},
 {0,0,0,0,0,0,0,0,0}
};

Fl_Choice *wGTKText=(Fl_Choice *)0;

static void cb_wGTKText(Fl_Choice*, void*) {
  int mode = wUserOrSystem->value();
opt[Fl::OPTION_FNFC_USES_GTK ][mode] = wGTKText->value();
}

Fl_Menu_Item menu_wGTKText[] = {
 {"off", 0,  0, (void*)(0), 0, (uchar)FL_NORMAL_LABEL, 0, 14, 0},
 {"on", 0,  0, (void*)(1), 128, (uchar)FL_NORMAL_LABEL, 0, 14, 0},
 {"default", 0,  0, (void*)(2), 0, (uchar)FL_NORMAL_LABEL, 0, 14, 0},
 {0,0,0,0,0,0,0,0,0}
};

Fl_Choice *wUserOrSystem=(Fl_Choice *)0;

static void cb_wUserOrSystem(Fl_Choice*, void*) {
  refreshUI();
}

Fl_Menu_Item menu_wUserOrSystem[] = {
 {"User Settings", 0,  0, (void*)(0), 0, (uchar)FL_NORMAL_LABEL, 0, 14, 0},
 {"System Settings", 0,  0, (void*)(1), 0, (uchar)FL_NORMAL_LABEL, 0, 14, 0},
 {0,0,0,0,0,0,0,0,0}
};

static void cb_Cancel1(Fl_Button*, void*) {
  global_settings_window->hide();
}

static void cb_OK(Fl_Button*, void*) {
  writePrefs();
global_settings_window->hide();
}

Fl_Double_Window* make_global_settings_window() {
  { global_settings_window = new Fl_Double_Window(400, 378, "FLTK Preferences");
    global_settings_window->color(FL_LIGHT1);
    { Fl_Group* o = new Fl_Group(10, 10, 380, 100, "Keyboard Focus Options");
      o->box(FL_GTK_DOWN_BOX);
      o->labelfont(2);
      o->align(Fl_Align(FL_ALIGN_TOP_LEFT|FL_ALIGN_INSIDE));
      { wVisibleFocus = new Fl_Choice(245, 40, 100, 25, "Visible Keyboard Focus:");
        wVisibleFocus->tooltip("OPTION_VISIBLE_FOCUS\n\nIf visible focus is switched on, FLTK will draw a dot\
ted rectangle inside the widget that will receive the next keystroke. If switc\
hed off, no such indicator will be drawn and keyboard navigation is disabled.\
\n\nDefault is on.");
        wVisibleFocus->down_box(FL_BORDER_BOX);
        wVisibleFocus->callback((Fl_Callback*)cb_wVisibleFocus);
        wVisibleFocus->menu(menu_wVisibleFocus);
      } // Fl_Choice* wVisibleFocus
      { wArrowFocus = new Fl_Choice(245, 75, 100, 25, "Arrow Keys move Focus:");
        wArrowFocus->tooltip("OPTION_ARROW_FOCUS\n\nWhen switched on, moving the text cursor beyond the sta\
rt or end of the text in a text widget will change focus to the next widget. W\
hen switched off, the cursor will stop at the end of the text. Pressing Tab or\
 Ctrl-Tab will advance the keyboard focus. Switch this on, if you want the old\
 behavior of FLTK 1.1.\n\nDefault is off.");
        wArrowFocus->down_box(FL_BORDER_BOX);
        wArrowFocus->callback((Fl_Callback*)cb_wArrowFocus);
        wArrowFocus->menu(menu_wArrowFocus);
      } // Fl_Choice* wArrowFocus
      o->end();
    } // Fl_Group* o
    { Fl_Group* o = new Fl_Group(10, 120, 380, 65, "Tooltip Options");
      o->box(FL_GTK_DOWN_BOX);
      o->labelfont(2);
      o->align(Fl_Align(FL_ALIGN_TOP_LEFT|FL_ALIGN_INSIDE));
      { wShowTooltips = new Fl_Choice(245, 150, 100, 25, "Show Tooltips:");
        wShowTooltips->tooltip("OPTION_SHOW_TOOLTIPS\n\nIf tooltips are enabled, hovering the mouse over a wi\
dget with a tooltip text will open a little tooltip window until the mouse lea\
ves the widget. If disabled, no tooltip is shown.\n\nDefault is on.");
        wShowTooltips->down_box(FL_BORDER_BOX);
        wShowTooltips->callback((Fl_Callback*)cb_wShowTooltips);
        wShowTooltips->menu(menu_wShowTooltips);
      } // Fl_Choice* wShowTooltips
      o->end();
    } // Fl_Group* o
    { Fl_Group* o = new Fl_Group(10, 194, 380, 66, "Drag And Drop Options");
      o->box(FL_GTK_DOWN_BOX);
      o->labelfont(2);
      o->align(Fl_Align(FL_ALIGN_TOP_LEFT|FL_ALIGN_INSIDE));
      { wDNDText = new Fl_Choice(245, 225, 100, 25, "Allow dragging Text:");
        wDNDText->tooltip("OPTION_DND_TEXT\n\nIf text drag-and-drop is enabled, the user can select and \
drag text from any text widget. If disabled, no dragging is possible, however \
dropping text from other applications still works.\n\nDefault is on.");
        wDNDText->down_box(FL_BORDER_BOX);
        wDNDText->callback((Fl_Callback*)cb_wDNDText);
        wDNDText->menu(menu_wDNDText);
      } // Fl_Choice* wDNDText
      o->end();
    } // Fl_Group* o
    { Fl_Group* o = new Fl_Group(10, 269, 380, 66, "Native File Chooser Options");
      o->box(FL_GTK_DOWN_BOX);
      o->labelfont(2);
      o->align(Fl_Align(FL_ALIGN_TOP_LEFT|FL_ALIGN_INSIDE));
      { wGTKText = new Fl_Choice(245, 300, 100, 25, "Native File Chooser uses GTK:");
        wGTKText->tooltip("OPTION_FNFC_USES_GTK\n        \nIf \'Native File Chooser uses GTK\' is enable\
d, the Fl_Native_File_Chooser class\ncalls the GTK open/save file dialogs when\
 they are available on the platfom. If disabled, the Fl_Native_File_Chooser cl\
ass\nalways uses FLTK\'s own file dialog (i.e., Fl_File_Chooser) even if GTK i\
s available.\n\nDefault is on.");
        wGTKText->down_box(FL_BORDER_BOX);
        wGTKText->callback((Fl_Callback*)cb_wGTKText);
        wGTKText->menu(menu_wGTKText);
      } // Fl_Choice* wGTKText
      o->end();
    } // Fl_Group* o
    { wUserOrSystem = new Fl_Choice(10, 345, 141, 25);
      wUserOrSystem->tooltip("Change settings for the current user, or default values for all users of this\
 computer. Individual users can override system options, if they set their opt\
ions to specific values (not \'default\').");
      wUserOrSystem->down_box(FL_BORDER_BOX);
      wUserOrSystem->callback((Fl_Callback*)cb_wUserOrSystem);
      wUserOrSystem->menu(menu_wUserOrSystem);
    } // Fl_Choice* wUserOrSystem
    { Fl_Button* o = new Fl_Button(230, 345, 75, 25, "Cancel");
      o->callback((Fl_Callback*)cb_Cancel1);
    } // Fl_Button* o
    { Fl_Button* o = new Fl_Button(315, 345, 75, 25, "OK");
      o->callback((Fl_Callback*)cb_OK);
    } // Fl_Button* o
    global_settings_window->end();
  } // Fl_Double_Window* global_settings_window
  readPrefs();
    Fl::option(Fl::OPTION_SHOW_TOOLTIPS,1); // make sure tooltips are on !
  return global_settings_window;
}

//
// End of "$Id$".
//
