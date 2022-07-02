#include <relation.h>
#include <algorithm>

auto RelationInfo::IsFriend(int ohter_id) {
  auto findIter = std::find(friend_list.begin(), friend_list.end(), ohter_id);
  if (findIter == friend_list.end()) {
    return false;
  } else {
    return true;
  }
}

auto RelationInfo::IsBlack(int other_id) {
  return StatusOfCheck::Success;
}

StatusOfCheck RelationInfo::AddFriend(int other_id) {
  if (IsFriend(other_id)) {
    return StatusOfCheck::Exist;
  }

  if (friend_list.size() < max_friends_num) {
    friend_list.push_back(other_id);
  } else {
    return StatusOfCheck::TooMany;
  }
  return StatusOfCheck::Success;
}  

StatusOfCheck RelationInfo::DeleteBlack(int other_id) {
  if (auto iter = std::find(friend_list.begin(), friend_list.end(), other_id); friend_list.end() != iter) {
    friend_list.erase(iter);
  } else {
    return StatusOfCheck::NotExist;
  }
  return StatusOfCheck::Success;
}

// StatusOfCheck RelationInfo::DeleteBlack(int other_id) {
//   return StatusOfCheck::Success;
// }