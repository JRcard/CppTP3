#include "TransAvion.h"

TransAvion::TransAvion(std::string depart, std::string arrive, double distance, double duree, double prix) 
			: TransBase(depart, arrive, distance)
{
	Tarif = prix;
	Duree = duree;
}

TransAvion::~TransAvion()
{
}

double TransAvion::getTarif()
{
	return Tarif;
}

void TransAvion::setTarif(double tarif)
{
	Tarif = tarif;
}

double TransAvion::getDuree()
{
	return Duree;
}

void TransAvion::setDuree(double duree)
{
	Duree = duree;
}

double TransAvion::getCout()
{
	return Tarif;
}

double TransAvion::getTemps()
{
	return Duree;
}

std::string TransAvion::affiche() const
{
	std::ostringstream out;
	out << std::setiosflags (std::ios::fixed | std::ios::showpoint) << std::setprecision(2);
	out << villeDepart + " à " + villeArrivee + " (" << distance << " km, Tarif $" << 
			Tarif << ", durée "  << Duree << " heure)";
			
	return out.str();
}

std::ostream& operator << (std::ostream& sortie, const TransAvion& VdL)
{
	sortie << VdL.affiche();
	return sortie;
}

/*int main()
{
	TransAvion vol("Montreal", "Venise", 5000, 2.3, 200);
	std::cout << "compilation transAvion test\n";
	std::cout << vol;
	std::cout << std::endl;
	return 0;
}*/