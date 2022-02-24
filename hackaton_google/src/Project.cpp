/*
** EPITECH PROJECT, 2022
** hackaton_google [WSL: Ubuntu-20.04]
** File description:
** hashcode
*/

#include "include/Project.hpp"


Project::Project() {

}

std::string Project::getName() {
    return (_name);
}

int Project::getSkillSkillLevel(std::string &skillName) {
    return (_skills.at(skillName));
}

int Project::getDuration() {
    return (_duration);
}

int Project::getScore() {
    return (_score);
}

int Project::getDeadline() {
    return (_deadline);
}

int Project::getNbrContrib() {
    return (_nbrContributors);
}



