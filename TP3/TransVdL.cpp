#include "TransVdL.h"

TransVdL::TransVdL(std::string depart, std::string arrive, double distance, double pbase, double ppKm) 
		: TransBase(depart, arrive, distance)
{
	PrixBase = pbase;
	PrixParKm = ppKm;
}

TransVdL::~TransVdL()
{
}

double TransVdL::getPrixBase()
{
	return PrixBase;
}

void TransVdL::setPrixBase(double prix)
{
	PrixBase = prix;
}

double TransVdL::getPrixParKm()
{
	return PrixParKm;
}

void TransVdL::setPrixParKm(double prix)
{
	PrixParKm = prix;
}

double TransVdL::getCout()
{
	return PrixBase + (distance * PrixParKm) + TransBase::getCout();
}

std::string TransVdL::affiche() const
{
	std::ostringstream out;
	out << std::setiosflags (std::ios::fixed | std::ios::showpoint) << std::setprecision(2);
	out << villeDepart + " à " + villeArrivee + " (" << distance << " km, prix de base $" << 
			PrixBase << ", prix par km $"  << PrixParKm << ")";
			
	return out.str();
}

std::ostream& operator << (std::ostream& sortie, const TransVdL& VdL)
{
	sortie << VdL.affiche();
	return sortie;
}

/*int main()
{
	TransVdL VdL("Montreal", "Quebec", 95, 50, 0.1);
	std::cout << "compilation transBase test\n";
	std::cout << VdL;
	std::cout << "    Cout: " << VdL.getCout() << std::endl;
	return 0;
}*/