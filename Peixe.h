#ifndef PEIXE_H
#define PEIXE_H

#include <iostream>
#include <string>	
#include <algorithm>
#include<vector>

using namespace std;

#include "Animal.h"

class Peixe:public Animal{
  public:

    //Construtor
    Peixe(string, double, string);

    //getter/setter
    void setTipoHabitat(string);
    string getTipoHabitat() const;

    //Método de retorno da especie
    string getEspecie();

    //Método imprime
    void imprime();
    
  private:
    string tipoHabitat;
};

#endif