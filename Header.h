
#include <gtkmm/window.h>

#include <gtkmm/toolbar.h>
#include <gtkmm/toolbutton.h>
#include <gtkmm/box.h>
#include <gtkmm/button.h>


#include <gtkmm/frame.h>
#include <gtkmm/label.h>

#include <gtkmm/entry.h>
//#include <gtkmm/dialog.h>
#include <gtkmm/messagedialog.h>

using namespace std;

string game();
string unistallgm(string ent, string ent2,string ent3,string ent4,string ent5,string ent6,string ent7,string ent8,string ent9,string ent10);


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

class CleanGames : public Gtk::Window
{
public:
    CleanGames();
    virtual ~CleanGames();



    Gtk::Button clean;
    Gtk::Entry ent,ent2,ent3,ent4,ent5,ent6,ent7,ent8,ent9,ent10;
protected:
//Child widgets:
    Gtk::Frame fram;
    Gtk::Box boxis;
    Gtk::Label lab;
    void on_Cclean_click();

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
  void on_CleanButton_clicked();

  //Child widgets:
  Gtk::Button m_button;
  Gtk::Button but2;
  Gtk::Box box;
  AboutWindow windi;
  WhatGame gami;
  CleanGames cleani;
};

