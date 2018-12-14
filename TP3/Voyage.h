#ifndef VOYAGE_H
#define VOYAGE_H

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include "TransBase.h"

class Voyage
{
private:
	std::string nom;
	int nbrElement;
	TransBase *etapes[20];
	
public:
	Voyage(std::string);
	~Voyage();
	friend std::ostream& operator << (std::ostream&, const Voyage&);
	std::string getNom();
	void setNom(std::string);
	void ajoutEtape(TransBase*);
	double getCout(); 
	double getTemps();
	double getDistance();
	int getnbreEtapes();
	TransBase* getEtape(int);
	bool estAllerRetour();
	bool verifiesNoms();
	std::string affiche() const;

};

#endif // VOYAGE_H
