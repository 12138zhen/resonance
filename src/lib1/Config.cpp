#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdexcept>
#include "Config.h"
void Config::ReadConfig(){
	FILE* f=fopen("config.cfg","r");
	if(f==nullptr){
		throw  std::invalid_argument("你的配置文件呢？？？？");
	}
	while(1){
		char config_line[256];
		if(fscanf(f,"%s",config_line)==EOF){
			break;
		}
		if(strstr(config_line,"socket_port")!=NULL){
			int port;
			sscanf(config_line,"socket_port=%d",&port);
			printf("port:%d\n",port);
			socket_port=port;
		}
		if(strstr(config_line,"socket_addr")!=NULL){
			char scaddr[256];
			char temp[256];
			sscanf(config_line,"socket_addr=%s",scaddr);
			strncpy(temp,scaddr,256);
			printf("addr:%s\n",scaddr);
			socket_addr = temp;
		}
	}
	fclose(f);
}
