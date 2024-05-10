#include "DemmandeConges.h"

DemmandeConges::DemmandeConges(int id, string matriculeEmploye, string DateDebut, string DateFin)
    : id(id), matriculeEmploye(matriculeEmploye), DateDebut(DateDebut), DateFin(DateFin) {}

void DemmandeConges::modifierDemmande(string matriculeEmploye, string DateDebut, string DateFin) {
    // Modifier les d�tails de la demande de cong�s
    this->matriculeEmploye = matriculeEmploye;
    this->DateDebut = DateDebut;
    this->DateFin = DateFin;
}

void DemmandeConges::supprimerDemmande() {
    // Supprimer la demande de cong�s (impl�mentation factice)
    cout << "La demande de cong�s avec l'ID " << id << " a �t� supprim�e." << endl;
}
