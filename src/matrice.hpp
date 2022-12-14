/**
 * @file matrice.hpp
 * @author Eloan ANDRE
 * @brief Implemente un réseau à l'aide d'une classe Matrice contenant un tableau 2 dimensions de booleen (True quand le craft existe)
 * @version 0.1
 * @date 2022-03-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#ifndef MATRICE_HPP
#define MATRICE_HPP
#include <string>
#include <vector>
#include <iostream>

class Matrice{
    std::vector<std::string> tableauObjet;
    std::vector<std::vector<bool> >matriceCraft;
    public:
        Matrice();
        void ajouterObjet(std::string o);
        void ajouterCraft(std::string o1,std::string o2);
        void supprimerCraft(std::string o1,std::string o2);
        void supprimerObjet(std::string o);
        void afficherCraft(std::string o);
        void afficherCraftsuccessifGlob(std::string o);
        std::vector<std::string> afficherCraftsuccessif(std::string o,std::vector<std::string> visited);
};






#endif
