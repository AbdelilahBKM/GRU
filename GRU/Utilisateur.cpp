#include "Utilisateur.h"

// Constructeur
Utilisateur::Utilisateur(string matricule, string nom, string prenom, string email)
    : matricule(matricule), nom(nom), prenom(prenom), email(email) {}

// M�thode pour authentifier l'utilisateur
bool Utilisateur::authentifier(string matricule, string email) {
    return (this->matricule == matricule && this->email == email); 
}

// M�thode pour d�finir le matricule
void Utilisateur::setMatricule(string matricule) {
    this->matricule = matricule;
}

// M�thode pour obtenir le matricule
string Utilisateur::getMatricule() {
    return matricule;
}

// M�thode pour d�finir le nom
void Utilisateur::setNom(string nom) {
    this->nom = nom;
}

// M�thode pour obtenir le nom
string Utilisateur::getNom() {
    return nom;
}

// M�thode pour d�finir le pr�nom
void Utilisateur::setPrenom(string prenom) {
    this->prenom = prenom;
}

// M�thode pour obtenir le pr�nom
string Utilisateur::getPrenom() {
    return prenom;
}

// M�thode pour d�finir l'email
void Utilisateur::setEmail(string email) {
    this->email = email;
}

// M�thode pour obtenir l'email
string Utilisateur::getEmail() {
    return email;
}

