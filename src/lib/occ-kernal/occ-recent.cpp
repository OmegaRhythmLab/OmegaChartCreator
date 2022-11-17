#include "occ-recent.h"

#include <iostream>

using namespace occ;
namespace fs = std::filesystem;

Recent::Recent(){
	this->configPath = APPDATA;
	this->getRecent();
	this->readRecent();
}

Recent::~Recent(){
	this->writeRecent();
}

int Recent::getRecent(){
	if(!fs::exists(this->configPath)){
		if(!fs::create_directories(this->configPath)){
			return -1;
		}
	}
	this->config.open(this->configPath + "recent");
	return 0;
}

int Recent::writeRecent(){
	if(this->config.is_open()){
		this->config.close();
	}
	this->config.open(this->configPath + "recent", std::ios::out | std::ios::trunc);
	if(!this->config.is_open()){
		std::cout << "Failed to open config file" << std::endl;
		return -1;
	}
	for(auto &i : this->recentLists){
		this->config << i.name << std::endl;
		this->config << i.path << std::endl;
	}
	this->config.close();
}

int Recent::readRecent(){
	if(!this->config.is_open()){
		return -1;
	}
	std::string line;
	while(std::getline(this->config, line)){
		std::string name = line.substr(0, line.find(" "));
		std::string path = line.substr(line.find(" ") + 1);
		this->recentLists.push_back(recentList(name, path));
	}
	return 0;
}

int Recent::createNewProject(string name, string path){
	if(!fs::exists(path)){
		return -1;
	}
	this->recentLists.push_back(recentList(name, path));
	return 0;
}

const bool Recent::checkValid(string path){
	if(!fs::exists(path+OMGCINFO)){
		return false;
	}
	return true;
}

int Recent::removeRecent(string path){
	for(auto i = this->recentLists.begin(); i != this->recentLists.end(); i++){
		if(i->path == path){
			this->recentLists.erase(i);
			return 0;
		}
	}
	return -1;
}
#define DEBUG
#ifdef DEBUG
int main(){
	Recent r;
	r.createNewProject("test", "test");
	r.writeRecent();
}
#endif
