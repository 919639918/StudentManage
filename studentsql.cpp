#include "studentsql.h"
#include "QCoreApplication"
#include "QMessageBox"
#include "QSqlDatabase"
#include "QSqlQuery"


StudentSql::StudentSql(QObject *parent) : QObject{parent} {

  Init();
  //  QSqlQuery query("", database);
  //  query.exec("INSERT INTO student VALUES(NULL, "
  //             "'张三','22','北京','83291','男','GIS','华北');");
  //  StuInFo stu;
  //  stu.name = "苏";
  //  stu.age = 22;
  //  stu.phone = "321831";
  //  stu.address = "北京";
  //  stu.sex = "男";
  //  stu.major = "计算机";
  //  stu.school = "清华大学";
  //  for (int i = 0; i < 20; ++i) {
  //    addStu(stu);
  //  }
  getStuNum();
  getPage(2, 4);
}
void StudentSql::Init() {

  auto path = QCoreApplication::applicationDirPath();
  qDebug() << "路径:" + path;
  if (QSqlDatabase::drivers().isEmpty()) {
    QMessageBox::information(nullptr, "hello", "没有驱动!");
  }

  database = QSqlDatabase::addDatabase("QSQLITE");
  database.setDatabaseName("D:/DG/DataBase/data.db");
  if (database.open()) {
    //    qDebug("打开数据");
    qDebug() << "open success";
  }
}
void StudentSql::addStu(StuInFo stuInFo) {

  //  QString sql =QString("insert into student values(NULL,");
  //            QString str=QString(" %1,%2,%3,%4,%5,%6,%7").arg(stuInFo.name,
  //            stuInFo.age, stuInFo.address, stuInFo.phone,stuInFo.sex,
  //            stuInFo.major, stuInFo.school);
  QSqlQuery sqlQuery(database);
  QString sql =
      QString(
          "insert into student values(NULL,'%1','%2','%3','%4','%5','%6','%7')")
          .arg(stuInFo.name)
          .arg(stuInFo.age)
          .arg(stuInFo.address)
          .arg(stuInFo.phone)
          .arg(stuInFo.sex)
          .arg(stuInFo.major)
          .arg(stuInFo.school);
  sqlQuery.exec(sql);
}
int StudentSql::getStuNum() {
  int count = 0;
  QSqlQuery sqlQuery(database);
  sqlQuery.exec("select count(id) from student;");
  while (sqlQuery.next()) {
    count = sqlQuery.value(0).toInt();
  }
  return count;
}
std::list<StuInFo> StudentSql::getPage(int page, int num) {
  std::list<StuInFo> list;
  QSqlQuery sqlQuery(database);
  QString sql = QString("select * from student order by id limit %1 offset %2")
                    .arg(num)
                    .arg(num * page);
  sqlQuery.exec(sql);
  StuInFo stuInFo;
  while (sqlQuery.next()) {
    stuInFo.id = sqlQuery.value(0).toInt();
    stuInFo.name = sqlQuery.value(1).toString();
    stuInFo.age = sqlQuery.value(2).toInt();
    stuInFo.address = sqlQuery.value(3).toString();
    stuInFo.phone = sqlQuery.value(4).toString();
    stuInFo.sex = sqlQuery.value(5).toString();
    stuInFo.major = sqlQuery.value(6).toString();
    stuInFo.school = sqlQuery.value(7).toString();
    list.push_back(stuInFo);
  }
  return list;
}
