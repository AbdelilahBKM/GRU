#include <iostream>
#include <vector>
#include "Utilisateur.h"
#include "Employe.h"
#include "Administrateur.h"
#include "Responsable.h"

using namespace std;

int main() {
    // Cr�er des instances d'employ�s
    vector<Employe> employes = {
        Employe("001", "Alice", "Smith", "alice@example.com", "Finance", "Accountant"),
        Employe("002", "Bob", "Johnson", "bob@example.com", "HR", "HR Specialist"),
        Employe("003", "Charlie", "Brown", "charlie@example.com", "IT", "Developer")
    };

    // Cr�er un administrateur
    Administrateur admin("admin", "Admin", "User", "admin@example.com");

    // Cr�er un responsable
    Responsable resp("resp", "Responsible", "User", "resp@example.com");

    int choix;
    cout << "Bienvenue ! Veuillez s�lectionner votre r�le :" << endl;
    cout << "1. Employ�" << endl;
    cout << "2. Administrateur" << endl;
    cout << "3. Responsable" << endl;
    cout << "Votre choix : ";
    cin >> choix;

    if (choix == 1) {
        // Authentification en tant qu'employ�
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
            cout << "Authentification r�ussie en tant qu'employ�." << endl;
            // Ajoutez ici le code pour les fonctionnalit�s de l'employ�
        }
        else {
            cout << "�chec de l'authentification en tant qu'employ�." << endl;
        }
    }
    else if (choix == 2) {
        // Authentification en tant qu'administrateur
        string username;
        cout << "Entrez votre nom d'utilisateur : ";
        cin >> username;

        bool authentifie = admin.authentifier(username);
        if (authentifie) {
            cout << "Authentification r�ussie en tant qu'administrateur." << endl;
            // Ajoutez ici le code pour les fonctionnalit�s de l'administrateur
        }
        else {
            cout << "�chec de l'authentification en tant qu'administrateur." << endl;
        }
    }
    else if (choix == 3) {
        // Authentification en tant que responsable
        string username;
        cout << "Entrez votre nom d'utilisateur : ";
        cin >> username;

        bool authentifie = resp.authentifier(username);
        if (authentifie) {
            cout << "Authentification r�ussie en tant que responsable." << endl;
            // Ajoutez ici le code pour les fonctionnalit�s du responsable
        }
        else {
            cout << "�chec de l'authentification en tant que responsable." << endl;
        }
    }
    else {
        cout << "Choix invalide." << endl;
    }

    return 0;
}
