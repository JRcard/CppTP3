#ifndef TRANSBASE_H
#define TRANSBASE_H

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

class TransBase
{

protected:
	double distance;
	std::string villeDepart, villeArrivee;
	static double dollarsParLitre;
	
public:
	TransBase(std::string, std::string, double);
	TransBase();
	~TransBase();
	friend std::ostream& operator << (std::ostream&, const TransBase&); 
	virtual double getDistance();
	void setDistance(double);
	std::string getvilleDepart();
	void setvilleDepart(std::string);
	std::string getvilleArrivee();
	void setvilleArrivee(std::string);
	virtual double getTemps();
	virtual double getCout();
	virtual std::string affiche() const;
	static double getPrixCarburant();
	static void setPrixCarburant(double);
};

#endif // TRANSBASE_H
