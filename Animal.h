#ifndef ANIMAL_H
#define ANIMAL_H

#include<string>
#include <iostream>
#include <string>	
#include <algorithm>
#include<vector>
using namespace std;

class Animal {
    public:
        //Construtor
        Animal(string, double);

        //getters/setters
        void setNome(string);
        string getNome() const;

        void setPeso(double);
        double getPeso() const;


        //Metodos principais
        virtual string getEspecie() = 0;
        virtual void imprime();

    private:
        string nome;
        double peso;
};

#endif