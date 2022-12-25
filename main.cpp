#include "mainwindow.h"
#include "studentsql.h"
#include <QApplication>
int main(int argc, char *argv[]) {
  QApplication a(argc, argv);
  MainWindow w;
  // w.show();
  StudentSql sql;
  return QApplication::exec();
}
