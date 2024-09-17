#include "vehicule.h"
#include <iostream>

Vehicule::Vehicule()
{
    std::cout<<"Constructeur Vehicule\n";
}

float Vehicule::vitesse()
{
    return m_vitesse;
}

int Vehicule::autonomie()
{
    return m_autonomie;
}

short Vehicule::nbRoues()
{
    return m_nb_roue;
}

void Vehicule::afficher()
{
    std::cout<<"Je suis un Vehicule\n";
}

void Vehicule::effectuerEntretien()
{
    std::cout<<"Entretien du vehicule\n";
}