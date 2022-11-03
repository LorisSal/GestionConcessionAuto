#include "Intervenant.h"
#include "Personne.h"

#include <iostream>
#include <string.h>
#include <new>
using namespace std;

/***********************************************************************************/
/*****************Constructeur***********************************************/
/***********************************************************************************/

Intervenant::Intervenant()
{
    //Personne();

    numero=-1;
}
Intervenant::Intervenant(string n, string pr, int num) : Personne(n, pr)
{

    setNumero(num);
}
Intervenant::Intervenant(const Intervenant &source) : Personne(source)
{
    setNumero(source.getNumero());
}
Intervenant::~Intervenant()
{

}

/***********************************************************************************/
/*****************Getters et Setters ***********************************************/
/***********************************************************************************/

int Intervenant::getNumero()const
{
    return numero;
}

void Intervenant::setNumero(int n)
{
    numero = n;
}


Intervenant& Intervenant::operator=(const Intervenant& i)
{
    setNom(i.getNom());
    setPrenom(i.getPrenom());
    setNumero(i.getNumero());

    return (*this);
}
string Intervenant::ToString()const
{
    return 0;
}
string Intervenant::Tuple()const
{
    return 0;
}

