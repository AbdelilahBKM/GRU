#include <iostream>
#include <vector>
#include "Utilisateur.h"
#include "Employe.h"
#include "Administrateur.h"
#include "Responsable.h"

using namespace std;

int main() {
    vector<Employe> employes = {
        Employe("001", "bkm", "abdelilah", "abdelilah@email.com", "Finance", "Accountant"),
        Employe("002", "Bob", "Johnson", "bob@example.com", "HR", "HR Specialist"),
        Employe("003", "Charlie", "Brown", "charlie@example.com", "IT", "Developer")
    };
    vector<DemmandeConges> lesDemmandes = {};

    // Cr�er un administrateur
    Administrateur admin("admin", "Admin", "User", "admin@email.com");

    // Cr�er un responsable
    Responsable resp("resp", "Responsable", "User", "resp@email.com");

    int choix;
    while (true)
    {   
    cout << "\t************************************" << endl;
    cout << "\t- Gestion des Ressources Humaines -" << endl;
    cout << "\t************************************" << endl;
    cout << "\tBienvenue ! Veuillez s�lectionner votre r�le :" << endl;
    cout << "\t1. Employe" << endl;
    cout << "\t2. Administrateur" << endl;
    cout << "\t3. Responsable" << endl;
    cout << "\t0. Quitter Programme" << endl;
    cout << "Votre choix : ";
    cin >> choix;
 
    if (choix == 1) { // employ�

        cout << "1) page employe: " << endl;
        // Authentification en tant qu'employ�
        string matricule, email;
        cout << "Entrez votre matricule: ";
        cin >> matricule;
        cout << "Entrez votre email: ";
        cin >> email;
        bool authentifie = false;
        Employe auth_emp;
        string valeur;

        for (auto& emp : employes) {
            if (emp.getMatricule() == matricule) {
                authentifie = emp.authentifier(matricule, email);
                auth_emp = emp;
                break;
            }
        }
        if(!authentifie) {
            cout << "�chec de l'authentification en tant qu'employ�." << endl;
        }
        if (authentifie) {
            while (true) {
                cout << "\t************************************" << endl;
                cout << "\tAuthentification en tant qu'employe." << endl;
                cout << "\t************************************" << endl;
                cout << "\t1) Afficher votre donnez Personnelle" << endl;
                cout << "\t2) Modifier votre donnez Personnelle" << endl;
                cout << "\t3) remplire Demmande De cong�s" << endl;
                cout << "\t4) Afficher les Demmandes" << endl;
                cout << "\t5) modifier votre demmande" << endl;
                cout << "\t6) supprimer votre demmande" << endl;
                cout << "\t0) D�connexion" << endl;
                cout << "Votre choix: ";
                cin >> choix;
                if (choix == 1) {

                    cout << "\t\t votre donnez personnelle" << endl;
                    auth_emp.afficher();
                }
                if (choix == 2) {

                    cout << "\t\t Saisire les nouveaux donn�es: " << endl;

                    cout << "saisire nom: ";
                    cin >> valeur;
                    auth_emp.setNom(valeur);

                    cout << "saisire prenom: ";
                    cin >> valeur;
                    auth_emp.setPrenom(valeur);

                    cout << "saisire email: ";
                    cin >> valeur;
                    auth_emp.setEmail(valeur);

                    cout << "saisire departement: ";
                    cin >> valeur;
                    auth_emp.setDepartement(valeur);

                    cout << "saisire role: ";
                    cin >> valeur;
                    auth_emp.setRole(valeur);
                }
                if (choix == 3) {

                    string dateD, dateFin;
                    cout << "\t\t Remplire demmande de cong�s: " << endl;
                    cout << "saisire date Debut: ";
                    cin >> dateD;
                    cout << "saisire date fin: ";
                    cin >> dateFin;
                    DemmandeConges d1 = auth_emp.demmanderConges(dateD, dateFin);
                    lesDemmandes.push_back(d1);
                }
                if (choix == 4) {
                    for (auto& dem : lesDemmandes) {
                        if (dem.getMatriculeEmp() == auth_emp.getMatricule()) {
                            dem.afficherDemmande();
                        }
                    }
                }
                if (choix == 5) {
                    cout << "Saisir le numero de demande: ";
                    int numero;
                    cin >> numero;
                    for (auto& dem : lesDemmandes) {
                        if (dem.getId() == numero) {
                            string nouvelleDateDebut, nouvelleDateFin;
                            cout << "Saisir la nouvelle date de d�but: ";
                            cin >> nouvelleDateDebut;
                            cout << "Saisir la nouvelle date de fin: ";
                            cin >> nouvelleDateFin;
                            dem.setDateDebut(nouvelleDateDebut);
                            dem.setDateFin(nouvelleDateFin);
                        }
                    }
                }
                if (choix == 6) {
                    cout << "Saisir le num�ro de demande: ";
                    int numero;
                    cin >> numero;

                    // Vecteur pour stocker les indices des demandes � supprimer
                    vector<int> indicesASupprimer;

                    // Recherche de la demande avec le num�ro sp�cifi�
                    for (int i = 0; i < lesDemmandes.size(); ++i) {
                        if (lesDemmandes[i].getId() == numero) {
                            // Suppression de l'objet et m�morisation de l'indice
                            indicesASupprimer.push_back(i);
                            // Vous pouvez effectuer d'autres actions ici si n�cessaire
                        }
                    }

                    // Suppression des demandes � partir du vecteur
                    for (size_t i = indicesASupprimer.size(); i > 0; --i) {
                        lesDemmandes.erase(lesDemmandes.begin() + indicesASupprimer[i - 1]);
                    }
                }
                if (choix == 0) {
                    break;
                }
                else {
                    cout << "�chec de l'authentification en tant que responsable." << endl;
                }
            }
        
        }
    }
    else if (choix == 2) {
        // Authentification en tant qu'administrateur
        string matricule, email;
        cout << "Entrez votre matricule : ";
        cin >> matricule;
        cout << "Entrez votre email: ";
        cin >> email;

        bool authentifie = admin.authentifier(matricule, email);
        if (!authentifie) {
            cout << "�chec de l'authentification en tant qu'administrateur." << endl;
        }
        if (authentifie) {
            while (true) {
                cout << "\t************************************" << endl;
                cout << "\tAuthentification en tant qu'administrateur." << endl;
                cout << "\t************************************" << endl;
                cout << "\t1) Afficher les compte d'employe" << endl;
                cout << "\t2) Ajouter un compte employe" << endl;
                cout << "\t3) Modifier un compte employe" << endl;
                cout << "\t4) Supprimer un compte employe" << endl;
                cout << "\t0) D�connexion" << endl;
                cout << "Votre choix: ";
                cin >> choix;
                if (choix == 0) {
                    break;
                }
                if (choix == 1) {
                    cout << "liste des employes: " << endl;
                    for (auto& emp : employes) {
                        emp.afficher();
                    }
                }
                if (choix == 2) {
                    string matricule, nom, prenom, email, departement, role;

                    cout << "Saisir le matricule de l'employ�: ";
                    cin >> matricule;
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

                    // Create a new Employe object with the entered information
                    Employe nouvelEmploye(matricule, nom, prenom, email, departement, role);
                    employes.push_back(nouvelEmploye);
                }
                if (choix == 3) {
                    string matricule;
                    cout << "saisire matricule de l'employe: ";
                    cin >> matricule;
                    for (auto& emp : employes) {
                        if (emp.getMatricule() == matricule) {
                            admin.gererCompte(emp);
                        }
                    } 
                }
                if (choix == 4) {
                    string matricule;
                    cout << "Saisir le matricule de l'employ� � supprimer : ";
                    cin >> matricule;

                    // Iterator to store the position of the employee to be removed
                    auto it = employes.begin();

                    // Iterate through the vector to find the employee with the specified matricule
                    for (; it != employes.end(); ++it) {
                        if (it->getMatricule() == matricule) {
                            // Remove the employee from the vector
                            employes.erase(it);
                            cout << "L'employ� avec le matricule " << matricule << " a �t� supprim�." << endl;
                            break; // Exit the loop after deleting the employee
                        }
                    }

                    // If the employee with the specified matricule was not found
                    if (it == employes.end()) {
                        cout << "Aucun employ� trouv� avec le matricule " << matricule << "." << endl;
                    }
                }

                else {
                    cout << "�chec de l'authentification en tant que responsable." << endl;
                }
            }
        }
        else {
            cout << "�chec de l'authentification en tant qu'administrateur." << endl;
        }
    }
    else if (choix == 3) {
        // Authentification en tant que responsable
        string matricule, email;
        cout << "Entrez votre matricule : ";
        cin >> matricule;
        cout << "Entrez votre email: ";
        cin >> email;

        bool authentifie = resp.authentifier(matricule, email);
        if (authentifie) {
            while (true) {
                cout << "\t************************************" << endl;
                cout << "\tAuthentification en tant que Responsable." << endl;
                cout << "\t************************************" << endl;
                cout << "\t1) Afficher les compte d'employe" << endl;
                cout << "\t2) Ajouter un compte employe" << endl;
                cout << "\t3) Modifier un compte employe" << endl;
                cout << "\t4) Supprimer un compte employe" << endl;
                cout << "\t5) Afficher les Demmandes de conges" << endl;
                cout << "\t6) Gerer un demmande de conges" << endl;
                cout << "\t0) D�connexion" << endl;
                cout << "Votre choix: ";
                cin >> choix;
                if (choix == 0) {
                    break;
                }
                if (choix == 1) {
                    cout << "liste des employes: " << endl;
                    for (auto& emp : employes) {
                        emp.afficher();
                    }
                }
                if (choix == 2) {
                    string matricule, nom, prenom, email, departement, role;

                    cout << "Saisir le matricule de l'employ�: ";
                    cin >> matricule;
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

                    // Create a new Employe object with the entered information
                    Employe nouvelEmploye(matricule, nom, prenom, email, departement, role);
                    employes.push_back(nouvelEmploye);
                }
                if (choix == 3) {
                    string matricule;
                    cout << "saisire matricule de l'employe: ";
                    cin >> matricule;
                    for (auto& emp : employes) {
                        if (emp.getMatricule() == matricule) {
                            resp.gererCompte(emp);
                        }
                    }
                }
                if (choix == 4) {
                    string matricule;
                    cout << "Saisir le matricule de l'employ� � supprimer : ";
                    cin >> matricule;

                    // Iterator to store the position of the employee to be removed
                    auto it = employes.begin();

                    // Iterate through the vector to find the employee with the specified matricule
                    for (; it != employes.end(); ++it) {
                        if (it->getMatricule() == matricule) {
                            // Remove the employee from the vector
                            employes.erase(it);
                            cout << "L'employ� avec le matricule " << matricule << " a �t� supprim�." << endl;
                            break; // Exit the loop after deleting the employee
                        }
                    }

                    // If the employee with the specified matricule was not found
                    if (it == employes.end()) {
                        cout << "Aucun employ� trouv� avec le matricule " << matricule << "." << endl;
                    }
                }
                if (choix == 5) {
                    for (auto& dem : lesDemmandes) {
                        dem.afficherDemmande();
                    }
                }
                if (choix == 6) {
                    int numero, res;
                    cout << "saisire le numero de demmande: ";
                    cin >> numero;
                    for (auto& dem : lesDemmandes) {
                        if (dem.getId() == numero) {
                            dem.afficherDemmande();
                            cout << "saisire 1 pour approuver, autre numero pour refuser: ";
                            cin >> res;
                            if (res == 1) {
                                resp.modifierStatus(dem, true);
                            }
                            else {
                                resp.modifierStatus(dem, false);
                            }
                            
                        }
                    }

                }
            }
        }
        else {
            cout << "�chec de l'authentification en tant que responsable." << endl;
        }
    }
    else {
        cout << "Choix invalide." << endl;
    }

    }
    return 0;
}
