#include <Rsocket.h>
#include <stdexcept>
#include <system_error>
#include <iostream>
Rsocket::Rsocket() {
  accept_flag = 0;
  config.ReadConfig();
  server_sock = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
  if (server_sock == -1) {
    //todo 定义socketexception
    throw std::system_error();
  }
}

void Rsocket::get_ip() {
  server_addr.sin_family = AF_INET;
  server_addr.sin_port =htons(8999);
  server_addr.sin_addr.s_addr =htonl(INADDR_ANY);
  if (bind(server_sock, (struct sockaddr*)&server_addr, sizeof(server_addr)) == -1) {
    throw std::system_error();
  }
  if (listen(server_sock, SOMAXCONN) == -1) {
    throw std::system_error();
  }
}

socket_fd Rsocket::get_soket_fd()const {
  return server_sock;
}

Rsocket::~Rsocket() {
  close(server_sock);
}

Rclient::Rclient(const socket_fd& socket_id) {
  if (socket_id < 0) {
    throw std::invalid_argument("socket不对");
  }
  socklen_t client_addr_size = sizeof(client_addr);
  client = accept(socket_id, (struct sockaddr*)&client_addr, &client_addr_size);
  std::cout << "debug " << client << std::endl;
  if (client == -1) {
    throw ;
  }
}

bool Rclient::SocketCheckRecv() const{
  return recvBuf.empty();
}

Rclient::~Rclient() {
  close(client);
}

void Rclient::senddata(std::string_view data) {
  sendBuf.swap(data);
  int ret = send(client, sendBuf.data(), sendBuf.size(), 0);
}

std::string_view Rclient::recieve_data() {
  char recvtemp[1024] = {0};
  int ret = recv(client, recvtemp, 1024, 0); 
  return recvBuf = recvtemp;
}

Rserver::Rserver() {
  server = socket(AF_INET, SOCK_STREAM, 0);
  if (server == -1) {
    throw ;
  }
  server_addr.sin_family = AF_INET;
  server_addr.sin_port =htons(8999);
  server_addr.sin_addr.s_addr = inet_addr("127.0.0.1");
  if (connect(server, (struct sockaddr *)&server_addr, sizeof(server_addr)) == -1) {
    throw;
  }
}

Rserver::~Rserver() {
  close(server);
}

void Rserver::senddata(std::string_view data) {
  sendBuf.swap(data);
  int ret = send(server, sendBuf.data(), sendBuf.size(), 0);
}

std::string_view Rserver::recieve_data() {
  char recvtemp[1024] = {0};
  int ret = recv(server, recvtemp, 1024, 0); 
  return recvBuf = recvtemp;
}

