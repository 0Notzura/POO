#ifndef CACHORRO_H
#define CACHORRO_H

#include <iostream>
#include <string>	
#include <algorithm>
#include<vector>

using namespace std;

#include "Animal.h"

class Cachorro:public Animal{
  public:
    //Construtor
    Cachorro(string, double, string);

    //getter/setter
    void setRaca(string);
    string getRaca() const ;

    //Método getEspecie
    string getEspecie();

    //Método imprime
    void imprime();
    
  private:
    string raca;
};

#endif