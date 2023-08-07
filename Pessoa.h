#ifndef PESSOA_H
#define PESSOA_H

#include "Animal.h"
#include "Peixe.h"
#include "Cachorro.h"

#include <string>
#include<vector>
#include <iostream>
#include <string>	
#include <algorithm>
#include<vector>

using namespace std;

class Pessoa{
    public:
        //Construtor
        Pessoa(string, int);


        //getters/setters
        void setNome(string);
        string getNome() const;

        void setIdade(int);
        int getIdade() const;


        //Metodos booleanos
        bool adiciona(Animal*);
        bool remove(string);


        //Obter um animal
        Animal* obtemAnimal(string);


        //Contagem dos animais
        int qtdeAnimais();
        int qtdePeixes();
        int qtdeCachorros();


        //Impressão dos dados
        void imprime(int);

    private:
        string nome;
        int idade;
        vector <Animal*> animais;
};

#endif