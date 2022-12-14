/**
 * \file reseau.cpp
 * \brief Exercice 3
 * \author Baptiste Bonneau
 * \date 30/03/2022
*/
#ifndef RESEAU_HPP
#define RESEAU_HPP
#include <string>
#include <vector>
#include <list>
#include <set>
#include <iostream>
#include <algorithm>


class Objet{
	std::string nom;
	std::vector<Objet*> listeCraft;
public:
	Objet(std::string nom);
	void ajouterCraft(Objet *o);
	void afficherCraftDirect();
	void supprimerCraft(Objet *o);
	~Objet();
	friend std::ostream& operator<< (std::ostream& s, Objet& o);
	friend bool operator== (Objet& o1, Objet& o2);
	std::vector<Objet*> getCrafts();
	void afficherSuccessionGlob();
};
	std::list<Objet*>::iterator Recherche(std::list<Objet*>::iterator itDebut, std::list<Objet*>::iterator itFin, Objet *valeur);


#endif
