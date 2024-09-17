#include "voiture.h"
#include <iostream>

Voiture::Voiture()
{
    m_protected = 10;
    std::cout<<"Constructeur Voiture\n";
}

void Voiture::afficher()
{
    Vehicule::afficher();
    std::cout<<"Je suis une Voiture\n";
}

void Voiture::effectuerEntretien()
{
    std::cout<<"Entretien de ma voiture\n";
}