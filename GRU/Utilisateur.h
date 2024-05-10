#ifndef UTILISATEUR_H
#define UTILISATEUR_H
#include<iostream>
using namespace std;

class Utilisateur
{
protected:
	string matricule;
	string nom;
	string prenom;
	string email;
public:
	Utilisateur(string = "", string = "", string = "", string = "");

	bool authentifier();

	virtual void afficher() = 0;

	void setMatricule(string = "");
	string getMatricule();

	void setNom(string = "");
	string getNom();

	void setPrenom(string = "");
	string getPrenom();

	void setEmail(string = "");
	string getEmail();

};

#endif // !UTILISATEUR_H



