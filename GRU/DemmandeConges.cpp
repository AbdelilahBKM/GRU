#include "DemmandeConges.h"

int DemmandeConges::compteur = 0;

DemmandeConges::DemmandeConges(string matriculeEmploye, string DateDebut, string DateFin)
    : id(getCompteur() + 1), matriculeEmploye(matriculeEmploye), DateDebut(DateDebut), DateFin(DateFin) {
    compteur++;
}

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

std::string DemmandeConges::getMatriculeEmp() const {
    return matriculeEmploye;
}

void DemmandeConges::setMatriculeEmp(string matricule) {
    matriculeEmploye = matricule;
}

std::string DemmandeConges::getDateDebut() const {
    return DateDebut;
}

void DemmandeConges::setDateDebut(string dateDebut) {
    DateDebut = dateDebut;
}

std::string DemmandeConges::getDateFin() const {
    return DateFin;
}

void DemmandeConges::setDateFin(string dateFin) {
    DateFin = dateFin;
}

bool DemmandeConges::getStatusDemmande() const {
    return statusDemmande;
}

void DemmandeConges::setStatusDemmande(bool status) {
    statusDemmande = status;
}

int DemmandeConges::getId() const {
    return id;
}

int DemmandeConges::getCompteur() {
    return compteur;
}

void DemmandeConges::afficherDemmande() {
    cout << "Demmande numero: " << id << endl;
    cout << "Date debut: " << DateDebut << endl;
    cout << "Date fin: " << DateFin << endl;
    if (statusDemmande == true) {
        cout << "status Demmande: approuv�" << endl;
    }

    else if (statusDemmande == false) {
        cout << "status Demmande: refus�" << endl;
    }

    else if (statusDemmande == NULL) {
        cout << "status Demmande: pas encore g�rer par un administrateur" << endl;
    }
}


