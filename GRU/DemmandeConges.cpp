#include "DemmandeConges.h"

int DemmandeConges::compteur = 0;

DemmandeConges::DemmandeConges(string matriculeEmploye, string DateDebut, string DateFin)
    : id(getCompteur() + 1), matriculeEmploye(matriculeEmploye), DateDebut(DateDebut), DateFin(DateFin) {
    compteur++;
}

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
        cout << "status Demmande: approuvé" << endl;
    }

    else if (statusDemmande == false) {
        cout << "status Demmande: refusé" << endl;
    }

    else if (statusDemmande == NULL) {
        cout << "status Demmande: pas encore gérer par un administrateur" << endl;
    }
}


