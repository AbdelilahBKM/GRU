#ifndef EMPLOYE_H
#define EMPLOYE_H
#include "utilisateur.h"
#include "DemmandeConges.h"
#include<iostream>

class Employe : public Utilisateur
{
private:
	string departement;
	string role;
public:
	Employe(string = "", string = "", string = "", string = "", string = "", string = "");
	void modifierEmploye(string = "", string = "", string = "", string = "", string = "");
	// Getters
	string getDepartement();
	string getRole();

	// Setters
	void setDepartement(string ="");
	void setRole(string ="");

	void afficher() override;

	DemmandeConges demmanderConges(string="", string="");

};
#endif // !EMPLOYE_H


