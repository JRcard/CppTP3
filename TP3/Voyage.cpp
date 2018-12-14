#include "Voyage.h"


Voyage::Voyage(std::string nom)
{
	this->nom = nom;
	nbrElement = 0;
}

Voyage::~Voyage()
{
}

std::string Voyage::getNom()
{
	return nom;
}

void Voyage::setNom(std::string nom)
{
	this->nom = nom;
}

void Voyage::ajoutEtape(TransBase* Etape)
{
	etapes[nbrElement] = Etape;
	nbrElement++;
}

double Voyage::getCout()
{
	double somme = 0;
	for (int i = 0; i < nbrElement; i++)
		somme += etapes[i]->getCout();
	return somme;
}

double Voyage::getTemps()
{
	double somme = 0;
	for (int i = 0; i < nbrElement; i++)
		somme += etapes[i]->getTemps();
	return somme;
}

double Voyage::getDistance()
{
	double somme = 0;
	for (int i = 0; i < nbrElement; i++)
		somme += etapes[i]->getDistance();
	return somme;
}

int Voyage::getnbreEtapes()
{
	return nbrElement;
}

TransBase* Voyage::getEtape(int index)
{
	return etapes[index];
}

bool Voyage::estAllerRetour()
{
	if (etapes[0]->getvilleDepart() == etapes[nbrElement-1]->getvilleArrivee())
		return true;
	else return false;
}

bool Voyage::verifiesNoms()
{
	if (etapes[nbrElement-1]->getvilleDepart() == etapes[nbrElement-2]->getvilleArrivee())
		return true;
	else return false;
}

std::string Voyage::affiche() const
{
	std::ostringstream out1;
	
	out1 << nom << " [" << etapes[0]->getvilleDepart() << ", ";
	for (int i = 0; i < nbrElement; i++)
	{
		out1 << etapes[i]->getvilleArrivee();
		if (i != nbrElement -1)
			out1 << ", ";
		else out1 << "]";
	}
	
	return out1.str();

}

std::ostream& operator << (std::ostream& sortie, const Voyage& voyage)
{
	sortie << voyage.affiche();
	return sortie;
}