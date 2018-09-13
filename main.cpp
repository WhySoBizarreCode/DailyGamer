#include "Header.h"
#include <gtkmm/application.h>

using namespace std;

int main(int argc, char *argv[])
{
auto app = Gtk::Application::create(argc, argv, "DailyGamer");

    win win;
    win.set_default_size(200,300);
    win.set_title("DailyGamer");
    win.set_position(Gtk::WIN_POS_CENTER);
    win.set_border_width(10);


  //Shows the window and returns when it is closed.
  return app->run(win);
}
