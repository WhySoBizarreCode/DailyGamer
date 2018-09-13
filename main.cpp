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
    win.set_resizable(false);
    win.set_border_width(10);


    AboutWindow AboutWindow;
    AboutWindow.set_default_size(200,300);
    AboutWindow.set_title("Info");
    AboutWindow.set_position(Gtk::WIN_POS_CENTER);
    AboutWindow.set_resizable(false);
    AboutWindow.set_border_width(10);

    AboutWindow.set_transient_for (win);
  //Shows the window and returns when it is closed.
    return app->run(win);

  //return app->run(win);
}
