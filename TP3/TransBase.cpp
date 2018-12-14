#include "TransBase.h"


double TransBase::dollarsParLitre = 1.25;

TransBase::TransBase(std::string depart, std::string arrive, double distance)
{
	villeDepart = depart;
	villeArrivee = arrive;
	this->distance = distance;
}

TransBase::TransBase()
{
}

TransBase::~TransBase()
{
}

double TransBase::getDistance()
{
	return distance;
}

void TransBase::setDistance(double dist)
{
	distance = dist;
}

std::string TransBase::getvilleDepart()
{
	return villeDepart;
}

void TransBase::setvilleDepart(std::string endroit)
{
	villeDepart = endroit;
}

std::string TransBase::getvilleArrivee()
{
	return villeArrivee;
}

void TransBase::setvilleArrivee(std::string endroit)
{
	villeArrivee = endroit;
}

double TransBase::getTemps()
{
	return distance / 80;
}

double TransBase::getCout()
{
	// 5 litres aux 100 km = 1 litre par 20 km;
	return (distance / 20) * dollarsParLitre;
}

std::string TransBase::affiche() const
{
	std::ostringstream out;
	out << std::setiosflags (std::ios::fixed | std::ios::showpoint) << std::setprecision(2);
	out <<  villeDepart + " à " + villeArrivee + " (" <<  distance << " km)";
	return out.str();
}

std::ostream& operator << (std::ostream& sortie, const TransBase& base)
{
	sortie << base.affiche();
	return sortie;
}

double TransBase::getPrixCarburant()
{
	return dollarsParLitre;
}

void TransBase::setPrixCarburant(double prix)
{
	TransBase::dollarsParLitre = prix;
}

/*int main()
{
	TransBase tb("Montreal", "Quebec", 270);
	std::cout << "compilation transBase test\n";
	std::cout << tb;
	std::cout << std::endl;
	return 0;
}*/