#include "DemmandeConges.h"

DemmandeConges::DemmandeConges(int id, string matriculeEmploye, string DateDebut, string DateFin)
    : id(id), matriculeEmploye(matriculeEmploye), DateDebut(DateDebut), DateFin(DateFin) {}

void DemmandeConges::modifierDemmande(string matriculeEmploye, string DateDebut, string DateFin) {
    // Modifier les détails de la demande de congés
    this->matriculeEmploye = matriculeEmploye;
    this->DateDebut = DateDebut;
    this->DateFin = DateFin;
}

void DemmandeConges::supprimerDemmande() {
    // Supprimer la demande de congés (implémentation factice)
    cout << "La demande de congés avec l'ID " << id << " a été supprimée." << endl;
}
