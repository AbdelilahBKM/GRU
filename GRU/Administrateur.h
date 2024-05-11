#ifndef ADMINISTRATEUR_H
#define ADMINISTRATEUR_H

#include "Utilisateur.h" // Include necessary headers here if needed

class Employe; // Forward declaration for Employe
class DemmandeConges; // Forward declaration for DemmandeConges

class Administrateur : public Utilisateur
{
public:
    Administrateur(string = "", string = "", string = "", string = "");
    void AfficherComptes();
    void gererCompte(Employe&);
    Employe ajouterCompte(string, string, string, string, string, string);
    void afficher() override;
};

#endif // !ADMINISTRATEUR_H



