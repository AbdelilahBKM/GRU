#include "Administrateur.h"
#include "Employe.h"

Administrateur::Administrateur(string matricule, string nom, string prenom, string email)
    : Utilisateur(matricule, nom, prenom, email) {}

void Administrateur::AfficherComptes() {
    cout << "Liste des comptes d'utilisateurs : " << endl;
}
Employe Administrateur::ajouterCompte(string matricule, string nom, string prenom, string email, string departement, string role) {
    return Employe(matricule, nom, prenom, email, departement, role);
}


void Administrateur::gererCompte(Employe& employe) {
    string nom, prenom, email, departement, role;
    cout << endl;
    cout << "Saisir le nom de l'employé: ";
    cin >> nom;
    cout << "Saisir le prénom de l'employé: ";
    cin >> prenom;
    cout << "Saisir l'email de l'employé: ";
    cin >> email;
    cout << "Saisir le département de l'employé: ";
    cin >> departement;
    cout << "Saisir le rôle de l'employé: ";
    cin >> role;

    employe.setNom(nom);
    employe.setPrenom(prenom);
    employe.setEmail(email);
    employe.setDepartement(departement);
    employe.setRole(role);
}



void Administrateur::afficher() {
    cout << "\t\t Admin de matricule: " << matricule << endl;
    cout << "nom: " << nom << endl;
    cout << "prenom: " << prenom << endl;
    cout << "email: " << email << endl;
}
