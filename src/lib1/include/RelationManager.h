#pragma once

#include<vector>
#include"relation.h"
class RelationManager
{
private:
  std::vector<RelationInfo> relations_;
  int max_num{10240};
  int relation_count{};
public:
  explicit RelationManager() = default;
  void Proc();
  void Restart();
  void Shutdown();

  auto UserRelationInit(const int& user_id);
  auto GetRelation(const int& user_id);
  auto AddFriend(const int& user_id, const int& other_id);
  auto DelFriend(const int& user_id, const int& other_id);
};
