#include "page_login.h"

#include "ui_page_login.h"

Page_Login::Page_Login(QWidget *parent)
    : QWidget(parent), ui(new Ui::Page_Login) {
  ui->setupUi(this);
}

Page_Login::~Page_Login() { delete ui; }

void Page_Login::on_pushButton_2_clicked() { exit(0); }

void Page_Login::on_pushButton_clicked() {
  emit LoginSuccess();

  // 数据库查找用户名密码
}
