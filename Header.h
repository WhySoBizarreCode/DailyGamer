
#include <gtkmm/window.h>

#include <gtkmm/toolbar.h>
#include <gtkmm/toolbutton.h>
#include <gtkmm/box.h>
#include <gtkmm/button.h>


#include <gtkmm/frame.h>
#include <gtkmm/label.h>

using namespace std;

string game();
class WhatGame : public Gtk::Window
{
public:
    WhatGame();
    virtual ~WhatGame();

    Gtk::Label lab;
protected:
//Child widgets:
  Gtk::Frame fram;

};


class AboutWindow : public Gtk::Window
{
public:
    AboutWindow();
    virtual ~AboutWindow();

protected:
//Child widgets:
  Gtk::Frame fram;
  Gtk::Box boxis;
  Gtk::Label lab;
};


//*Main*
class win : public Gtk::Window
{
public:
  win();
  virtual ~win();

protected:
  //Signal handlers:
  void on_button_clicked();
  void on_Infobutton_click();

  //Child widgets:
  Gtk::Button m_button;
  Gtk::Button but2;
  Gtk::Box box;
  AboutWindow windi;
  WhatGame gami;
};

void unistallgm();
