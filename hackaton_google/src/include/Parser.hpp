/*
** EPITECH PROJECT, 2022
** hackaton_google [WSL: Ubuntu-20.04]
** File description:
** parser
*/

#ifndef PARSER_HPP_
#define PARSER_HPP_

#include "hashcode.hpp"

class Parser
{
public:
    Parser(const std::string &filename);
    std::string open();
    ~Parser();
private:
    std::string filename_;

};


#endif /* !PARSER_HPP_ */
