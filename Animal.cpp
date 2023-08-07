#include<iostream>
#include<string>	
#include<algorithm>
#include<vector>

using namespace std;

#include "Animal.h"

//Construtor
Animal::Animal(string s,double p){
    setNome(s);
    setPeso(p);
}

//metodos gets e sets
void Animal::setNome(string nome){
    this->nome = nome;
}

void Animal::setPeso(double peso){
  if(peso > 0)
    this->peso = peso;
  else
    this->peso = 0;
}

string Animal::getNome() const{
    return nome;
}

double Animal::getPeso() const{
    return peso;
}

//metodo de impressão
void Animal::imprime(){
    cout << "Nome: " << nome << endl;
    cout << "Peso: " << peso <<endl;
}
