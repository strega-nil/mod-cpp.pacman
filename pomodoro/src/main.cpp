#include <QApplication>
#include <QPushButton>
#include "../lib/Pomodoro.hpp"

int main(int argc, char * argv[]) {
  QApplication app (argc, argv);
  QPushButton button ("Hello world !");
  Pomodoro pomodoro;
  button.show();
  return app.exec();
}