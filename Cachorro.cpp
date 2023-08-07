#include<iostream>
#include<string>	
#include<algorithm>
#include<vector>

using namespace std;

#include "Cachorro.h"

//Construtor
Cachorro::Cachorro(string nome, double peso, string raca) 
:Animal(nome, peso), raca(raca){
}

//Metodos gets e sets
void Cachorro::setRaca (string raca){
  this->raca = raca;
}

string Cachorro::getRaca() const  {
  return raca;
}

//Método de retorno da especie
string Cachorro::getEspecie (){
  return "Cachorro";
}

//Metodo imprime
void Cachorro::imprime(){
    Animal::imprime();
    cout << "Tipo de Raca: " << getRaca() << endl << endl;
    
}
