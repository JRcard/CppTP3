/*

IFT1169 - travail pratique #03 -

13-mai-2018 v1.01		M.Lokbani  - ajustement A18, C++17
13-mai-2006 v1.00		M.Lokbani  - à partir d'une idée originale de ML-UKO

contact: lokbani@iro.umontreal.ca

        
    Copyright (C) 1999-2018 Université de Montréal
            Département d'informatique et de Recherche Opérationnelle
            Mohamed Lokbani
    -- Tous Droits Réservés -- All Rights Reserved --

Description:
------------

    Fichier d'essai.
    
    Description: Ce fichier contient la méthode main, permettant de tester les différents
    éléments des classes décrites dans ce travail pratique.
	
	À ne pas modifier

*/

#include "Voyage.h"
#include "TransAvion.h"
#include "TransVdL.h"
#include "TransBase.h"
#include <iostream>
#include <iomanip>

void afficheDetailsVoyage(Voyage voyage) {
    std::cout << "Avec un carburant à $" << std::setiosflags (std::ios::fixed | std::ios::showpoint)
        << TransBase::getPrixCarburant() << " par litre:\n";
	std::cout << voyage;
	std::cout << std::endl;
        
    for (int i = 0; i < voyage.getnbreEtapes(); i++) {
        TransBase *part = voyage.getEtape(i);
        std::cout << "    " << (i+1) << ": ";
		std::cout << *part;
        std::cout << std::endl;
        std::cout << "        coût: " << part->getCout() << "$\n";
        std::cout << "        temps: " << part->getTemps() << " heures\n";
    }
        
    std::cout << "Distance totale: " << voyage.getDistance() << " kms.\n";
    std::cout << "Coût total: " << voyage.getCout() << "$\n";
    std::cout << "Durée du voyage: " << voyage.getTemps() << " heures\n";
    if (!voyage.estAllerRetour())
        std::cout << "Ce voyage n'est pas un aller retour.\n";
    else std::cout << "Ce voyage est un aller retour.\n";
    if (!voyage.verifiesNoms())
        std::cout << "Avertissement: les noms des villes ne sont pas consistants.\n";
}

/*
 * La méthode principale démontrant l'utilisation des classes Voyage, TransBase
 * TransVdL et TransAvion
 */
int main() {

    std::cout << std::setprecision(2);
    std::cout << "\n--------------------------------------------\n\n";
    Voyage VoyageLondres("Voyage Londres");
    
    TransBase *etape1 = new TransBase("maison","destination",100);
    VoyageLondres.ajoutEtape(etape1);
    std::cout << "\nVersion initiale de l'étape 1 :\n";
	std::cout << *etape1;
	std::cout << std::endl;
    etape1->setDistance(120);
    etape1->setvilleDepart("Drummondville");
    etape1->setvilleArrivee("Montréal");
    std::cout << "Version mise à jour de l'étape 1 :\n";
	std::cout << *etape1;
	std::cout << std::endl;
    
    TransAvion *etape2 = new TransAvion("Montréal", "Londres", 5500, 11, 22);
    std::cout << "\nVersion initiale de l'étape 2 :\n";
	std::cout << *etape2;
	std::cout << std::endl;
    VoyageLondres.ajoutEtape(etape2);
    etape2->setTarif(850);
    etape2->setDuree(6);
    std::cout << "Version mise à jour de l'étape 2:\n";
	std::cout << *etape2;
	std::cout << std::endl;
    
    TransVdL *etape3 = new TransVdL("Londres", "Oxford", 95, 33, 44);
    std::cout << "\nVersion initiale de l'étape 3 :\n";
	std::cout << *etape3;
	std::cout << std::endl;
    VoyageLondres.ajoutEtape(etape3);
    etape3->setPrixBase(50);
    etape3->setPrixParKm(.1);
    std::cout << "Version mise à jour de l'étape 3 :\n";
	std::cout << *etape3;
	std::cout << std::endl;
    
    std::cout << "\n--------------------------------------------\n\n";
    afficheDetailsVoyage(VoyageLondres);
    std::cout << "\n--------------------------------------------\n\n";

    TransBase::setPrixCarburant(1.2);

    std::cout << "Avec un carburant à $1.20 le litre, le coût total de ce voyage est : " << VoyageLondres.getCout() << std::endl;
    std::cout << "\n--------------------------------------------\n";

    return 0;
}


