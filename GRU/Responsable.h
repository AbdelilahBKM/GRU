#ifndef RESPONSABLE_H
#define RESPONSABLE_H

#include "Administrateur.h"
#include "DemmandeConges.h"
using namespace std;
class Responsable : public Administrateur
{
public:
    Responsable(string = "", string = "", string = "", string = "");
    // Additional methods specific to Responsable
    void AfficherDemmandeConges();
    void gererConges(int = 0, string="");
    void afficher() override;
};

#endif // !RESPONSABLE_H


