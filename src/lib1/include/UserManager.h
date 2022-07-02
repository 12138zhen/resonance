#pragma once

#include <vector>
#include <map>
#include <UserInfo.h>
#include <relation.h>
class UserManager
{
private:
  std::map<int, UserInfo> users_;
  int max_user_num{10240};
  /* data */
public:
  UserManager() = default;
  void Proc();
  void Restart();
  void shutdown();

  UserInfo GetUser(const int& user_id);
  bool IsExist(const int& user_id);
  int CreateUser(const std::string &user_name, const std::string& password, const int& from, const int& reg_time);
  auto DeleteUser(const int& user_id);
  //todo 保存
  int SaveUser();
  auto LoginCheck(const std::string& user_name, const std::string& password);
  auto UserLogout();
  auto GetUserIdByUserName(const std::string& user_name);
  auto UpdateLoginTime(const int& user_id, const int& time_now);
};

