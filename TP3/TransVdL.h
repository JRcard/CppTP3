#ifndef TRANSVDL_H
#define TRANSVDL_H

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include "TransBase.h"

class TransVdL : public TransBase
{
private:
	double PrixBase, PrixParKm;

public:
	TransVdL(std::string, std::string, double, double, double);
	~TransVdL();
	friend std::ostream& operator << (std::ostream&, const TransVdL&);
	double getPrixBase();
	void setPrixBase(double);
	double getPrixParKm();
	void setPrixParKm(double);
	double getCout();
	std::string affiche() const;

};

#endif // TRANSVDL_H
