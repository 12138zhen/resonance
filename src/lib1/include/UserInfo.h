#pragma once
#include<string>
class UserInfo
{
public:
  int user_id;
  std::string user_name;
  std::string nick_name;
  std::string password;
  int register_time;
  int from;
  int login_time;
  int last_login_time;
  int fresh_time;
  int logout_time;
  int db_flag;
public:
};
