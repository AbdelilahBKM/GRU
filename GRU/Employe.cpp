#include "Employe.h"
Employe::Employe(string matricule, string nom, string prenom, string email, string departement, string role)
    : Utilisateur(matricule, nom, prenom, email), departement(departement), role(role) {}

void Employe::modifierEmploye(string nom, string prenom, string email, string departement, string role) {
    
    this->nom = nom;
    this->prenom = prenom;
    this->email = email;
    this->departement = departement;
    this->role = role;
}

// Définition des getters
string Employe::getDepartement() {
    return departement;
}

string Employe::getRole() {
    return role;
}

// Définition des setters
void Employe::setDepartement(string departement) {
    this->departement = departement;
}

void Employe::setRole(string role) {
    this->role = role;
}

// redefinition d'affichage
void Employe::afficher() {
    cout << "\tEmploye de matricule: " << matricule << endl;
    cout << "\tnom: " << nom << endl;
    cout << "\tprenom: " << prenom << endl;
    cout << "\temail: " << email << endl;
    cout << "\tdepartement: " << departement << endl;
    cout << "\trole: " << role << endl << endl;

}

DemmandeConges Employe::demmanderConges(string dateDebut, string dateFin) {
    return DemmandeConges(matricule, dateDebut, dateFin);
}