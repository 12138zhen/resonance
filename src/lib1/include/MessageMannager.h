#pragma once
#include <vector>
#include <message.h>
class MessageMannager
{
private:
  std::vector<MessageInfo> messages_;
  int cur_message_id{};
public:
  void Proc();
  void Shutdown();
  void Restart();
};
