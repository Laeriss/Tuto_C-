#include <iostream> // directive de préprocesseur

int main()

{
    std::cout << "Hello World !" << std::endl;
    return 0;
}

/*
 
 mot MOT MoT MOt = sensible à la casse -> Ces mots sont différents l'un de l'autre
 insensible à la casse ?
 Tout en minuscule... et pas changer l'écriture
 instruction se terminant par un point virgule comme le c
 
 IMPORTANT (pour compiler) -> g++ -std=c++17 -Wall -Wextra -Werror main.cpp -o prog
 */
