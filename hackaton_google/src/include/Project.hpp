/*
** EPITECH PROJECT, 2022
** hackaton_google [WSL: Ubuntu-20.04]
** File description:
** hashcode
*/

#ifndef __PROJECT_HPP__
#define __PROJECT_HPP__

#include "hashcode.hpp"

class Project {
    public:
        Project();
        ~Project() {};

        /* GETTER */
        std::string getName();
        int getSkillSkillLevel(std::string &skillName);
        int getDuration();
        int getScore();
        int getDeadline();
        int getNbrContrib();

    private:
        std::map<std::string, int>  _skills;
        std::string                 _name;
        int                         _duration;
        int                         _score;
        int                         _deadline;
        int                         _nbrContributors;


};

#endif