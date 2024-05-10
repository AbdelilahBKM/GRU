#include <iostream>
#include <vector>
#include "Utilisateur.h"
#include "Employe.h"
#include "Administrateur.h"
#include "Responsable.h"

using namespace std;

int main() {
    // Créer des instances d'employés
    vector<Employe> employes = {
        Employe("001", "Alice", "Smith", "alice@example.com", "Finance", "Accountant"),
        Employe("002", "Bob", "Johnson", "bob@example.com", "HR", "HR Specialist"),
        Employe("003", "Charlie", "Brown", "charlie@example.com", "IT", "Developer")
    };

    // Créer un administrateur
    Administrateur admin("admin", "Admin", "User", "admin@example.com");

    // Créer un responsable
    Responsable resp("resp", "Responsible", "User", "resp@example.com");

    int choix;
    cout << "Bienvenue ! Veuillez sélectionner votre rôle :" << endl;
    cout << "1. Employé" << endl;
    cout << "2. Administrateur" << endl;
    cout << "3. Responsable" << endl;
    cout << "Votre choix : ";
    cin >> choix;

    if (choix == 1) {
        // Authentification en tant qu'employé
        string matricule;
        cout << "Entrez votre matricule : ";
        cin >> matricule;

        bool authentifie = false;
        for (const auto& emp : employes) {
            if (emp.getMatricule() == matricule) {
                authentifie = emp.authentifier();
                break;
            }
        }

        if (authentifie) {
            cout << "Authentification réussie en tant qu'employé." << endl;
            // Ajoutez ici le code pour les fonctionnalités de l'employé
        }
        else {
            cout << "Échec de l'authentification en tant qu'employé." << endl;
        }
    }
    else if (choix == 2) {
        // Authentification en tant qu'administrateur
        string username;
        cout << "Entrez votre nom d'utilisateur : ";
        cin >> username;

        bool authentifie = admin.authentifier(username);
        if (authentifie) {
            cout << "Authentification réussie en tant qu'administrateur." << endl;
            // Ajoutez ici le code pour les fonctionnalités de l'administrateur
        }
        else {
            cout << "Échec de l'authentification en tant qu'administrateur." << endl;
        }
    }
    else if (choix == 3) {
        // Authentification en tant que responsable
        string username;
        cout << "Entrez votre nom d'utilisateur : ";
        cin >> username;

        bool authentifie = resp.authentifier(username);
        if (authentifie) {
            cout << "Authentification réussie en tant que responsable." << endl;
            // Ajoutez ici le code pour les fonctionnalités du responsable
        }
        else {
            cout << "Échec de l'authentification en tant que responsable." << endl;
        }
    }
    else {
        cout << "Choix invalide." << endl;
    }

    return 0;
}
