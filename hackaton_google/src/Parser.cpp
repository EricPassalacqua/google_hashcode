/*
** EPITECH PROJECT, 2022
** hackaton_google [WSL: Ubuntu-20.04]
** File description:
** Parser
*/

#include "include/Parser.hpp"


Parser::Parser(const std::string &filename) : filename_(filename), ifs_(filename_, std::ifstream::in)
{

}

std::string Parser::open()
{
    std::string line;
    std::cout << filename_ << std::endl;
    
    if (!ifs_.is_open()) {
        std::cerr << "error" << std::endl;
        return "";
    }

    std::getline(ifs_, line);
    contributorNumber_ = atoi(line.c_str());
    projectNumber_ = atoi(line.substr(line.find(" ") + 1).c_str());
    std::cout << contributorNumber_ << " " << projectNumber_ << std::endl;
    
    
    for (int i = 0; i < contributorNumber_; i++) {
      std::getline(ifs_, line);
      std::string name = line.substr(0, line.find(" "));
      int number = atoi(line.substr(line.find(" ") + 1).c_str());
      contributors_.push_back(new Contributor(name));
      for (int j = 0; j < number; j++) {
        std::getline(ifs_, line);
        std::string codename = line.substr(0, line.find(" "));
        int level = atoi(line.substr(line.find(" ") + 1).c_str());
        std::cout << codename << std::endl;
        contributors_.back()->push_skills(codename, level);
      }
      std::cout << name << std::endl;
      content_.push_back(line);
    }
    
    /*for (int i = 0; i < projectNumber_; i++) {
      std::getline(ifs_, line);
      std::string project = line.substr(0, line.find(" "));
      //int duration = atoi(line.substr(.size(), line.find(" ")).c_str());
      int deadline = atoi(line.substr(project.size(), line.find(" ")).c_str());
      
    }*/


  return "";
}

Parser::~Parser()
{
    ifs_.close();
}





