#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{
    // Twoja implementacja tutaj
    if (towar==0)
        return 0;
    else
    {
        int licznik=0; //licznik przetransportowanego sumarycznie towaru
        int zaglowce=0;
        
        while (licznik < towar)
        {
            Stocznia stocznia;
            Statek*  s1 = stocznia();
            licznik     = licznik + s1->transportuj();
            if (dynamic_cast<Zaglowiec*>(s1))
            {
                zaglowce++;
            }
            delete s1;
        }
        return zaglowce;
    }
}