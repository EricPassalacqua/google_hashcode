/*
** EPITECH PROJECT, 2022
** hackaton_google [WSL: Ubuntu-20.04]
** File description:
** parser
*/

#ifndef PARSER_HPP_
#define PARSER_HPP_

#include "hashcode.hpp"
#include "Contributor.hpp"
#include "Project.hpp"


class Parser
{
public:
    Parser(const std::string &filename);
    std::string open();
    ~Parser();
private:
    std::vector<Contributor *> contributors_;
    std::string filename_;
    std::ifstream ifs_;
    std::vector<std::string> content_;
    int contributorNumber_;
    int projectNumber_;

};


#endif /* !PARSER_HPP_ */
