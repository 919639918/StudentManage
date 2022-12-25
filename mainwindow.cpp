#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow) {
  ui->setupUi(this);
  p.show();

  connect(&p, &Page_Login::LoginSuccess, this, [=]() {
    this->show();
    p.hide();
  });
  ui->treeWidget->clear();
  ui->treeWidget->setColumnCount(1);
  QStringList list;
  QStringList list1;
  QStringList list2;
  list << "信息管理系统";
  list1 << "学生管理系统";
  list2 << "管理员管理系统";
  auto *item = new QTreeWidgetItem(ui->treeWidget, list);
  ui->treeWidget->addTopLevelItem(item);
  auto *item1 = new QTreeWidgetItem(item, list1);
  auto*item2 = new QTreeWidgetItem(item, list2);
  item->addChild(item1);
  item->addChild(item2);
  ui->treeWidget->expandAll();
}

MainWindow::~MainWindow() { delete ui; }
