#include "Header.h"
#include <iostream>

win::win()
:m_button("Random Game"),
but2("Uninstall Games that you don't know that you have")
{
              m_button.signal_clicked().connect( sigc::mem_fun(*this,
                          &win::on_button_clicked) );

                but2.signal_clicked().connect(sigc::mem_fun(*this,&win::on_CleanButton_clicked));


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

WhatGame::~WhatGame()
{

}

CleanGames::~CleanGames()
{

}

void win::on_button_clicked()
{

    string ret;
    ret=game();


    gami.lab.set_label(ret);

    gami.show_all_children();
    gami.show();
//std::cout << "The Button was clicked." << std::endl;
//std::cout << m_button.property_label() << std::endl;

}

void win::on_CleanButton_clicked(){
    cleani.show_all_children();
    cleani.show();



}

void win::on_Infobutton_click()
   {

    windi.show_all_children();
    windi.show();



}

AboutWindow::AboutWindow():
fram("Info"),
lab("Daily Gamer was created in order to help gamers to clear the pc uninstalling those games that you don`t even know that are installed.\nAlso in order to help those gamers that are undecided when they have to choose one game to play \n\nCreated by Luis Pagola\nWebPage: www.BizarreCode.website",true)
{
    this->set_default_size(300,300);
    this->set_title("Info DailyGamer");
    this->set_position(Gtk::WIN_POS_CENTER);
    this->set_resizable(false);
    this->set_border_width(10);

//  this->set_transient_for (win);
    this->hide();

    boxis.set_orientation (Gtk::Orientation::ORIENTATION_VERTICAL);
    fram.add(lab);
    boxis.pack_start(fram,false,false,0);
    add(boxis);

}


WhatGame::WhatGame():
fram("You have to play"),
lab("",true)
{

string ret;
ret=game();


lab.set_label(ret);
lab.show();

this->set_default_size(300,300);
this->set_title("DailyGamer");
this->set_position(Gtk::WIN_POS_CENTER);
this->set_border_width(10);

//lab.property_label(ret);
fram.add(lab);
add(fram);

}


CleanGames::CleanGames()
:clean("Clean"){


boxis.set_spacing(4);

///entrys

boxis.pack_start(ent,false,false,0);
boxis.pack_start(ent2,false,false,0);
boxis.pack_start(ent3,false,false,0);
boxis.pack_start(ent4,false,false,0);
boxis.pack_start(ent5,false,false,0);
boxis.pack_start(ent6,false,false,0);
boxis.pack_start(ent7,false,false,0);
boxis.pack_start(ent8,false,false,0);
boxis.pack_start(ent9,false,false,0);
boxis.pack_start(ent10,false,false,0);

///entrys *close

boxis.set_orientation (Gtk::Orientation::ORIENTATION_VERTICAL);
boxis.pack_end(clean,false,false,0);

this->set_default_size(300,400);
this->set_title("Clean Library DailyGamer");
this->set_position(Gtk::WIN_POS_CENTER);
this->set_border_width(10);

add(boxis);

 clean.signal_clicked().connect(sigc::mem_fun(*this,&CleanGames::on_Cclean_click));



}


void CleanGames::on_Cclean_click()
   {
        Gtk::MessageDialog dialog(*this, "This is an INFO MessageDialog");
    dialog.set_secondary_text(
          "And this is the secondary text that explains things.");

    dialog.run();

}


