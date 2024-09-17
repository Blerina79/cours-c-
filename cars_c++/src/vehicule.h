#ifndef __VEHICULE_H__
#define __VEHICULE_H__
class Vehicule {

    private :
        float m_vitesse {0};
        int m_autonomie {500}; //exprimé en km/h
        short m_nb_roue{0};

    protected :
        int m_protected{0};

    public :
        Vehicule();
        float vitesse();
        int autonomie();
        short nbRoues();

        void afficher();

        virtual void effectuerEntretien();
};

#endif