#include <algorithm>
#include <UserManager.h>
#include <relation.h>


void UserManager::Proc() {
  return ;
}

void UserManager::Restart() {
  return ;
}

void UserManager::shutdown() {
  return ;
}

bool UserManager::IsExist(const int& user_id) {
  auto iter = users_.find(user_id);
  if (iter != users_.end()) {
    return true;
  }
  return false;
}

int UserManager::CreateUser(const std::string& user_name, const std::string& password, const int& from, const int& reg_time) {
  for ( auto const& it : users_) {
    if (it.second.user_name == user_name) {
      return -1;
    }
  }
  if (users_.size() < max_user_num) {
    //todo create...
    return 1;
  }
  return -1;
}