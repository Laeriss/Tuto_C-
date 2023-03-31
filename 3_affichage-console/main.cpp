#include <iostream>

int main()

{
    std::cout << "Hello World" << "How are you" << std::endl;
    std::cout << "BYE MAN !";
    
    return 0;
}

/*
 
 Journalisation de message :
 @
 std::cout -> Sortie standard (affichage standard) -> Buffer (mémoire tampon)
 std::cerror -> Sortie d'erreur standard (affichage direct pas dans la mémoire tampon)
 std::clog -> Journalisation (archivage) (en mémoire tampon)
 
std::endl ->> retour à la ligne + flush
 std::flush
 
 Flush -> Vidange de la mémoire tampon
 
 \n -> retour à la ligne
 \t -> Tabulation
 \\ : afficher un antislash
 
 */



















