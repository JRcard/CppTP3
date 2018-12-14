#ifndef TRANSAVION_H
#define TRANSAVION_H

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include "TransBase.h"

class TransAvion : public TransBase
{
private:
	double Tarif, Duree;

public:
	TransAvion(std::string, std::string, double, double, double);
	~TransAvion();
	friend std::ostream& operator << (std::ostream&, const TransAvion&);
	double getTarif();
	void setTarif(double);
	double getDuree();
	void setDuree(double);
	double getCout();
	double getTemps();
	std::string affiche() const;

};

#endif // TRANSAVION_H
