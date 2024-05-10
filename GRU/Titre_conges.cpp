#include "Titre_conges.h"

Titre_conges::Titre_conges(int id, int id_demmande, string approuve_par, int duree_conges)
    : id(id), id_demmande(id_demmande), approuve_par(approuve_par), duree_conges(duree_conges) {}

// Getter for id
int Titre_conges::getId() const{
    return id;
}

// Setter for id
void Titre_conges::setId(int id) {
    this->id = id;
}

// Getter for id_demmande
int Titre_conges::getIdDemande() const{
    return id_demmande;
}

// Setter for id_demmande
void Titre_conges::setIdDemande(int id_demmande) {
    this->id_demmande = id_demmande;
}

// Getter for approuve_par
string Titre_conges::getApprouvePar() const{
    return approuve_par;
}

// Setter for approuve_par
void Titre_conges::setApprouvePar(const string& approuve_par) {
    this->approuve_par = approuve_par;
}

// Getter for duree_conges
int Titre_conges::getDureeConges() const{
    return duree_conges;
}

// Setter for duree_conges
void Titre_conges::setDureeConges(int duree_conges) {
    this->duree_conges = duree_conges;
}
