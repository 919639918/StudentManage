#ifndef PAGE_LOGIN_H
#define PAGE_LOGIN_H

#include <QWidget>

namespace Ui {
class Page_Login;
}

class Page_Login : public QWidget {
  Q_OBJECT

 public:
  explicit Page_Login(QWidget *parent = nullptr);
  ~Page_Login();
 signals:
  void LoginSuccess();
 private slots:
  void on_pushButton_2_clicked();

  void on_pushButton_clicked();

 private:
  Ui::Page_Login *ui;
};

#endif  // PAGE_LOGIN_H
