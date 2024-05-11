#include "Responsable.h"
#include "DemmandeConges.h"

Responsable::Responsable(string matricule, string nom, string prenom, string email)
    : Administrateur(matricule, nom, prenom, email) {}

void Responsable::AfficherDemmandeConges() {
    cout << "Leave requests: " << endl;
}

void Responsable::gererConges(int id, string action) {
    if (action == "approuver") {
        cout << "Leave request with ID " << id << " has been approved." << endl;
    }
    else if (action == "refuser") {
        cout << "Leave request with ID " << id << " has been rejected." << endl;
    }
    else {
        cout << "Invalid action." << endl;
    }
}

void Responsable::afficher() {
    cout << "\t\tAdmin de matricule: " << matricule << endl;
    cout << "nom: " << nom << endl;
    cout << "prenom: " << prenom << endl;
    cout << "email: " << email << endl;
}

void Responsable::modifierStatus(DemmandeConges& demande, bool status) {
    demande.statusDemmande = status;
}