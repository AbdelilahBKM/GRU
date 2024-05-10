#ifndef ADMINISTRATEUR_H
#define ADMINISTRATEUR_H
#include "Utilisateur.h"
#include "Employe.h"
#include <iostream>
using namespace std;

class Administrateur: public Utilisateur
{
public:
	Administrateur(string="", string="", string="",string="");
	void AfficherComptes();
	Employe gererCompte(string="", Employe* = nullptr);
	void afficher() override;

};

#endif // !ADMINISTRATEUR_H


