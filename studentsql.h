#ifndef STUDENTSQL_H
#define STUDENTSQL_H

#include "QSqlDatabase"
#include <QObject>

struct StuInFo {
  int id;
  QString name;
  int age;
  QString address;
  QString phone;
  QString sex;
  QString major;
  QString school;
};
struct UserInFo {
  QString username;
  QString password;
  QString aut;
};

class StudentSql : public QObject {
  Q_OBJECT
public:
  explicit StudentSql(QObject *parent = nullptr);
  void Init();
  //================================student===============================
  // 查询所有
  int getStuNum();
  // 查询固定页面
  std::list<StuInFo> getPage(int page, int num);
  // 增加
  void addStu( StuInFo  stuInFo);

  // 删除
  bool moveStu(StuInFo);
  // 清空
  bool clearList();
  // 修改信息
  bool updateList();
  //==============================user============================

  // 查询所有用户
  std::list<StuInFo> getUserList();

  // 查询用户是否存在
  bool isExit(QString username);
  // 修改用户权限
  void changeAut(QString Aut);
  // 添加单个用户
  void AddUser(UserInFo userInFo);
  // 删除
  void DeleteUser(QString username);

private:
  QSqlDatabase database;

signals:
};

#endif // STUDENTSQL_H
