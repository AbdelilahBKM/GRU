#include "Utilisateur.h"

// Constructeur
Utilisateur::Utilisateur(string matricule, string nom, string prenom, string email)
    : matricule(matricule), nom(nom), prenom(prenom), email(email) {}

// Méthode pour authentifier l'utilisateur
bool Utilisateur::authentifier(string matricule, string email) {
    return (this->matricule == matricule && this->email == email); 
}

// Méthode pour définir le matricule
void Utilisateur::setMatricule(string matricule) {
    this->matricule = matricule;
}

// Méthode pour obtenir le matricule
string Utilisateur::getMatricule() {
    return matricule;
}

// Méthode pour définir le nom
void Utilisateur::setNom(string nom) {
    this->nom = nom;
}

// Méthode pour obtenir le nom
string Utilisateur::getNom() {
    return nom;
}

// Méthode pour définir le prénom
void Utilisateur::setPrenom(string prenom) {
    this->prenom = prenom;
}

// Méthode pour obtenir le prénom
string Utilisateur::getPrenom() {
    return prenom;
}

// Méthode pour définir l'email
void Utilisateur::setEmail(string email) {
    this->email = email;
}

// Méthode pour obtenir l'email
string Utilisateur::getEmail() {
    return email;
}

