#pragma once

#include <vector>

//定义了用户关系之间的查找状态
enum class StatusOfCheck{
  Success,
  NotExist,
  NotFriend,
  Exist,
  TooMany
};

class RelationInfo
{
private:
  int user_id{};
  int max_friends_num = 10200;
  std::vector<int> friend_list;

  int black_list_count{};
  std::vector<int> black_list;  
public:
  //是否是朋友
  auto IsFriend(int other_id);
  //是否在黑名单
  auto IsBlack(int other_id);
  //todo 以下函数返回值可以改成auto
  StatusOfCheck AddFriend(int other_id);
  StatusOfCheck DeleteFriend(int other_id);
  StatusOfCheck DeleteBlack(int other_id);
  
};

