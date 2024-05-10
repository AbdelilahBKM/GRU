#include "Administrateur.h"

Administrateur::Administrateur(string matricule, string nom, string prenom, string email)
    : Utilisateur(matricule, nom, prenom, email) {}

void Administrateur::AfficherComptes() {
    cout << "Liste des comptes d'utilisateurs : " << endl;
}

Employe Administrateur::gererCompte(string action, Employe* employe) {
    if (action == "ajouter") {
        cout << "Ajout d'un nouvel employé..." << endl;
    }
    else if (action == "modifier") {
        cout << "Modification des informations d'un employé..." << endl;
    }
    else if (action == "supprimer") {
        cout << "Suppression d'un employé..." << endl;
    }
    else {
        cout << "Action non reconnue." << endl;
    }

    return Employe();
}

void Administrateur::afficher() {
    cout << "\t\Admin de matricule: " << matricule << endl;
    cout << "nom: " << nom << endl;
    cout << "prenom: " << prenom << endl;
    cout << "email: " << email << endl;

}
