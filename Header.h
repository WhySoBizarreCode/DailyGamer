
#include <gtkmm/window.h>
#include <gtkmm/button.h>
using namespace std;

class win : public Gtk::Window
{
public:
  win();
  virtual ~win();

protected:
  //Signal handlers:
  void on_button_clicked();

  //Child widgets:
  Gtk::Button m_button;
};



string game();
void unistallgm();
