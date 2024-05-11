#ifndef DEMMANDE_CONGES_H
#define DEMMANDE_CONGES_H

#include <iostream>
#include <string>
#include "Responsable.h"
using namespace std;
class Responsable;
class DemmandeConges
{
private:
    static int compteur; // Compteur statique pour suivre le nombre d'instances créées
    int id;
    string matriculeEmploye;
    string DateDebut;
    string DateFin;
    bool statusDemmande;

public:
    DemmandeConges(string = "", string = "", string = "");

    void modifierDemmande(string = "", string = "", string = "");
    void supprimerDemmande();
    void afficherDemmande();

    // Getters and setters
    std::string getMatriculeEmp() const;
    void setMatriculeEmp(string);
    std::string getDateDebut() const;
    void setDateDebut(string);
    std::string getDateFin() const;
    void setDateFin(string);
    bool getStatusDemmande() const;
    void setStatusDemmande(bool);

    int getId() const;

    friend void modifierStatus(DemmandeConges&, bool);
    friend class Responsable;

    // Méthode statique pour obtenir le nombre d'instances créées
    static int getCompteur();
};

#endif


