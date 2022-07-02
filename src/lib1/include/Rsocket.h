#pragma once
#include <string_view>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <Config.h>

using socket_fd = int; 
using client_fd = int;
using server_fd = int;
class Rsocket
{
private:
  int accept_flag = 0;
  socket_fd server_sock;
  struct sockaddr_in server_addr;
  Config config;
  
public:
  explicit Rsocket();
  ~Rsocket();

  void get_ip();
  socket_fd get_soket_fd() const;
};


class Rclient {
private:
  //socket handle
  client_fd client;

  std::string_view recvBuf, sendBuf;
  struct sockaddr_in client_addr;
public:
  explicit Rclient(const socket_fd&);
  ~Rclient();

  [[nodiscard]] bool SocketCheckRecv()const;

  void senddata(std::string_view);
  [[nodiscard]] std::string_view recieve_data(); 
};

class Rserver{
private:
  server_fd server;
  socket_fd server_sock;
  struct sockaddr_in server_addr;
  std::string_view recvBuf, sendBuf;
public:
  explicit Rserver();
  ~Rserver();
  void senddata(std::string_view);
  [[nodiscard]] std::string_view recieve_data(); 
};
