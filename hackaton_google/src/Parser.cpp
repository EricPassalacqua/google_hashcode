/*
** EPITECH PROJECT, 2022
** hackaton_google [WSL: Ubuntu-20.04]
** File description:
** Parser
*/

#include "include/Parser.hpp"


Parser::Parser(const std::string &filename) : filename_(filename)
{
}

std::string Parser::open()
{
    std:string line;
    std::ifstream ifs(filename_, std::ifstream::in);
    char c = ifs.get();
    std::cout << filename_ << std::endl;
    if (!ifs.is_open()) {
        std::cerr << "error" << std::endl;
        return "";
    }

    while (std::getline(ifs, line)) {
      std::cout << line << std::endl;
    }

   ifs.close();
   return "";
}

Parser::~Parser()
{

}





