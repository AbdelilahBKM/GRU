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
    cout << "Saisir le nom de l'employ�: ";
    cin >> nom;
    cout << "Saisir le pr�nom de l'employ�: ";
    cin >> prenom;
    cout << "Saisir l'email de l'employ�: ";
    cin >> email;
    cout << "Saisir le d�partement de l'employ�: ";
    cin >> departement;
    cout << "Saisir le r�le de l'employ�: ";
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
