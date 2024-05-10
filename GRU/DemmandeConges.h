#ifndef DEMMANDE_CONGES_H
#define DEMMANDE_CONGES_H
#include<iostream>
using namespace std;

class DemmandeConges
{
private:
	int id;
	string matriculeEmploye;
	string DateDebut;
	string DateFin;
public:
	DemmandeConges(int = 0, string="", string="", string="");
	void modifierDemmande(string="", string="", string="");
	void supprimerDemmande();
};
#endif


