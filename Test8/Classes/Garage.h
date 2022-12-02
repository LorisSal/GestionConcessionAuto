#ifndef GARAGE_H
#define GARAGE_H

#include <iostream> 
#include <string.h> 
#include "Option.h"
#include "Modele.h"
#include "VecteurTrie.h"
#include "Vecteur.h"
#include "Employe.h"
#include "Client.h"


using namespace std;


class Garage
{

 private:

    VecteurTrie<Employe> employes; // ou Vecteur<Employe>
    VecteurTrie<Client> clients; // ou Vecteur<Client>
    Vecteur<Modele> modeles;
    Vecteur<Option> options;

 public:

    Garage();
    void ajouteModele(const Modele & m);
    void afficheModelesDisponibles() const;
    Modele getModele(int indice);
    void ajouteOption(const Option & o);
    void afficheOptionsDisponibles() const;
    Option getOption(int indice);
    void ajouteClient(string nom,string prenom,string gsm);
    void afficheClients() const;
    void supprimeClientParIndice(int ind);
    void supprimeClientParNumero(int num);
    void ajouteEmploye(string nom,string prenom,string login,string fonction);
    void afficheEmployes() const;
    void supprimeEmployeParIndice(int ind);
    void supprimeEmployeParNumero(int num);

};

#endif