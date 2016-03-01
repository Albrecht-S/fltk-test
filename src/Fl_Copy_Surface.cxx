//
// "$Id$"
//
// Copy-to-clipboard code for the Fast Light Tool Kit (FLTK).
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

#include "config_lib.h"
#include <FL/Fl_Copy_Surface.H>

#ifdef __APPLE__
#include <src/drivers/Quartz/Fl_Quartz_Copy_Surface.H>

#elif defined(WIN32)
#include <src/drivers/GDI/Fl_GDI_Copy_Surface.H>

#elif defined(FL_PORTING) && !defined(FL_DOXYGEN)
# pragma message "FL_PORTING: implement class Fl_Copy_Surface::Helper for your platform"

class Fl_Copy_Surface::Helper : public Fl_Widget_Surface { // model
  friend class Fl_Copy_Surface;
private:
  int width;
  int height;
  Helper(int w, int h) : Fl_Widget_Surface(NULL) {}
  ~Helper() {}
  void set_current(){}
  void translate(int x, int y) {}
  void untranslate() {}
  int w() {return width;}
  int h() {return height;}
};

#else
#include <src/drivers/Xlib/Fl_Xlib_Copy_Surface.H>

#endif

Fl_Copy_Surface::Helper *Fl_Copy_Surface::newPlatformSurface(int w, int h) {
  return new Helper(w, h);
}

/** the constructor */
Fl_Copy_Surface::Fl_Copy_Surface(int w, int h) : Fl_Widget_Surface(NULL) {
  platform_surface = newPlatformSurface(w, h);
  driver(platform_surface->driver());
}

Fl_Copy_Surface::~Fl_Copy_Surface() { delete platform_surface; }

void Fl_Copy_Surface::origin(int *x, int *y) {platform_surface->origin(x, y);}

void Fl_Copy_Surface::set_current() {platform_surface->set_current();}

void Fl_Copy_Surface::translate(int x, int y) {platform_surface->translate(x, y);}

void Fl_Copy_Surface::untranslate() {platform_surface->untranslate();}

int Fl_Copy_Surface::w() {return platform_surface->w();}

int Fl_Copy_Surface::h() {return platform_surface->h();}

//
// End of "$Id$".
//
