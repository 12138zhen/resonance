/**
 * @file main.cpp
 * @author zhenyu (hongzh1@udmercy.edu)
 * @brief 
 * @version 0.1
 * @date 2022-05-24
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>
#include <Rsocket.h>
#include <RelationManager.h>
#include <UserManager.h>
#include <MessageMannager.h>
#include <PhotoManager.h>
#include <string_view>
#include <thread>
#include <message.pb.h>
int main(){

  Rsocket sock;
  sock.get_ip();
  Rclient client(sock.get_soket_fd());
  client.senddata("你奶奶的");
  std::string_view temp = client.recieve_data();
  std::cout << temp << std::endl;
  RegEeq msg;
  
  msg.mutable_header()->set_version(1);
  msg.set_user_name("Zhenyu Hong");
  msg.set_password("19980518hzy");
  
  UserManager user_svr;
  RelationManager rela_svr;
  MessageMannager msg_svr;
  PhotoManager photo_sver;

  auto server_on = false;
  while (server_on) {
    //has to revise
    user_svr.Proc();
    rela_svr.Proc();
    msg_svr.Proc();
    photo_sver.Proc();
    auto ret = 0;
    if ( false == -1) {
      using namespace std::chrono_literals;
      std::this_thread::sleep_for(5000ms);
      continue; 
    }
  } 
  return 0;
}
