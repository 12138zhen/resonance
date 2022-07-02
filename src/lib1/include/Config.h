#pragma once
#define _CONFIG_H
#include <string>

class Config{
	int socket_port;
	std::string socket_addr;
public:
	void ReadConfig();
};