#include "Header.h"
#include <iostream>

win::win()
:m_button("Random Game"),
but2("Uninstall Games that you don't know that you have")
{
              m_button.signal_clicked().connect( sigc::mem_fun(*this,
                          &win::on_button_clicked) );


box.set_orientation (Gtk::Orientation::ORIENTATION_VERTICAL);

/*toolbar*/
  Gtk::Toolbar * T1 = new Gtk::Toolbar();

  /*button*/
  Gtk::ToolButton * B1 = new Gtk::ToolButton("Info");

   /*button*/
  Gtk::ToolButton * B2 = new Gtk::ToolButton("Settings");

T1->append( *B1 );
T1->append( *B2 );


box.pack_start( *T1, false, false,0 );
box.pack_end(m_button,false,false,0);
box.pack_end(but2,false,false,0);
//box.pack_start(fram,false,false,0);
box.set_spacing(4);



              B1->signal_clicked().connect( sigc::mem_fun(*this,
                          &win::on_Infobutton_click) );

  add(box);
  show_all_children();
}

win::~win()
{

}

AboutWindow::~AboutWindow()
{

}

void win::on_button_clicked()
{
std::cout << "The Button was clicked." << std::endl;
//std::cout << m_button.property_label() << std::endl;

}

void win::on_Infobutton_click()
   {


    windi.show();

}

AboutWindow::AboutWindow()
{
this->hide();

}

