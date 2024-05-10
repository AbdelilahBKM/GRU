#ifndef TITRE_CONGES_H
#define TITRE_CONGES_H
#include<iostream>
using namespace std;
class Titre_conges
{
private:
	int id;
	int id_demmande;
	string approuve_par;
	int duree_conges;
public:
	Titre_conges(int = 0, int = 0, string = "", int = 0);
    // Getters
    int getId() const;
    int getIdDemande() const;
    string getApprouvePar() const;
    int getDureeConges() const;

    // Setters
    void setId(int);
    void setIdDemande(int);
    void setApprouvePar(const string&);
    void setDureeConges(int);

};
#endif // !TITRE_CONGES_H



