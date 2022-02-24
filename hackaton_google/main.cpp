/*
** EPITECH PROJECT, 2022
** hackaton_google [WSL: Ubuntu-20.04]
** File description:
** main
*/

#include "src/include/hashcode.hpp"
#include "src/include/Parser.hpp"

int main(int ac,char **av)
{
    Parser p("test.txt");
    p.open();
    return 0; 
}

