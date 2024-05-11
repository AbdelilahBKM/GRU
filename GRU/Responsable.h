#ifndef RESPONSABLE_H
#define RESPONSABLE_H

#include "Administrateur.h"
#include "DemmandeConges.h"
using namespace std;
class Administrateur;
class DemmandeConges;
class Responsable : public Administrateur
{
public:
    Responsable(string = "", string = "", string = "", string = "");
    // Additional methods specific to Responsable
    void AfficherDemmandeConges();
    void gererConges(int, string);
    void afficher();
    void modifierStatus(DemmandeConges& demande, bool status);
};

#endif // !RESPONSABLE_H


