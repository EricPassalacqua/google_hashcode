/*
** EPITECH PROJECT, 2022
** hackaton_google [WSL: Ubuntu-20.04]
** File description:
** hashcode
*/

#include "include/Contributor.hpp"


Contributor::Contributor(const std::string &name)
{

}

void Contributor::push_skills(std::string skillname, int level)
{
    skills_.insert(std::pair<std::string, int>(skillname, level));
}

Contributor::~Contributor()
{
    
}