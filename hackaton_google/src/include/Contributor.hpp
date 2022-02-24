/*
** EPITECH PROJECT, 2022
** hackaton_google [WSL: Ubuntu-20.04]
** File description:
** hashcode
*/

#ifndef __CONTRIBUTOR_HPP__
#define __CONTRIBUTOR_HPP__

#include "hashcode.hpp"
#include <map>

class Contributor
{
public:
    Contributor(const std::string &name);
    ~Contributor();
    void push_skills(std::string skillname, int level);

private:
    std::map<std::string, int> skills_;
    std::string name_;
    int score_;
};


#endif 