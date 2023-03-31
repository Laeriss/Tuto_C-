#include <iostream>
#include <string>


int main()

{
    


    std::cout << "entrez un nombre entier : ";
    int number;
    std::cin >> number;

    //std::cin >> std::ws;
    
   // std::string username;
    //std::getline(std::cin, username);
    
    std::cin.ignore(255, '\n');
    
    std::cout << "Tapez votre nom complet :";
    

    std::getline(std::cin, username, '\n');
    
    std::cout << "Nombre saisi :" << number << std::endl;
    std::cout << "Vous vous appelez : " << username << std::endl;
    
  
    
    return 0;
    
}


/*
 
    goodbit : indiquer s'il n'y a pas d'erreur -> 0 FALSE ET 1 TRUE  1
    failbit : un erreur à la saisie                                  0
    badbit  : erreur général flux (pas récupérable)                  0
 
 
 std::cout << " Good : " << std::cin.good() << std::endl;
 std::cout << " Fail : " << std::cin.fail() << std::endl;
 std::cout << " Bad : " << std::cin.bad() << std::endl;
 
 si cin est en état d'erreur -> std::cin.clear()
 
 std::cin -> objet global pour notre lecture
 
 
 
 */
