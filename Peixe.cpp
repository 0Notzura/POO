#include<iostream>
#include<string>	
#include<algorithm>
#include<vector>

using namespace std;

#include "Animal.h"
#include "Peixe.h"

//Construtor
Peixe::Peixe(string nome,double peso,string tipoHabitat):Animal(nome, peso){
  setTipoHabitat(tipoHabitat);
}

//Métodos gets e sets
void Peixe::setTipoHabitat(string tipoHabitat){
    this->tipoHabitat = tipoHabitat;
}

string Peixe::getTipoHabitat() const{
    return tipoHabitat;
}

//Método de retorno da especie
string Peixe::getEspecie(){
    return "Peixe";
}

//Método imprime
void Peixe::imprime(){
    Animal::imprime();
    cout << "Tipo de habitat: " << tipoHabitat << endl << endl;
}