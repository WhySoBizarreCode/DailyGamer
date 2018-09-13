#include "Header.h"
#include <iostream>

win::win()
{
  m_button.add_pixlabel("info.xpm", "Info");

  set_title("Pixmap'd buttons!");
  set_border_width(10);

  m_button.signal_clicked().connect( sigc::mem_fun(*this,
              &win::on_button_clicked) );

  add(m_button);

  show_all_children();
}

win::~win()
{
}

void win::on_button_clicked()
{
  std::cout << "The Button was clicked." << std::endl;
}
