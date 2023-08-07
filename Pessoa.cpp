#include<iostream>
#include<string>	
#include<algorithm>
#include<vector>

using namespace std;

#include "Pessoa.h"
#include "Animal.h"
#include "Peixe.h"
#include "Cachorro.h"


//Construtor
Pessoa::Pessoa(string nome,int idade){
    this->nome = nome;
    this->idade = idade;
}

//metodos gets e sets
void Pessoa::setNome(string nome){
    this->nome = nome;
}

void Pessoa::setIdade(int idade){
    this->idade = idade;
}

string Pessoa::getNome() const{
    return nome;
}

int Pessoa::getIdade() const{
    return idade;
}

//Método de adição de um novo animal. O nome original "adicionaAnimal" foi alterado para ter concordância com o programa main
bool Pessoa::adiciona(Animal* animal){

    animais.push_back(animal);
    return true;
    
}

//Método de remoção de um animal pelo nome. O nome original "removeAnimal" foi alterado para ter concordância com o programa main
bool Pessoa::remove(string s){
    int i,tam;
    tam=animais.size();
    for ( i = 0; i < tam; i++)
    {
        if(s==animais[i]->getNome()){
            animais.erase(animais.begin() + i);
            return 1;
        }
    }
    return 0;
}

//Método de obtenção de um animal
Animal* Pessoa::obtemAnimal(string s){
    
    int i,tam;
    tam=animais.size();
    
    for ( i = 0; i < tam; i++)
    {
        if(s==animais[i]->getNome()){
            return animais[i];
        }
        
            return 0; 
    }
}

//Método que retorna o número de animais totais
int Pessoa::qtdeAnimais(){
    return animais.size();
}

//Método que retorna o número de animais da espécie peixe
int Pessoa::qtdePeixes(){
    int i,r=0;
    for ( i = 0; i < animais.size(); i++)
    {
        if(animais[i]->getEspecie()=="Peixe"){
            r=r+1;
        }
    }
    return r;   
}

//Método que retorna o número de animais da espécie cachorro
int Pessoa::qtdeCachorros(){
    int i,r=0;
    for ( i = 0; i < animais.size(); i++)
    {
        if(animais[i]->getEspecie()=="Cachorro"){
            r=r+1;
        }
    }
    return r;
    
}

//Método de impressão de dados dos animais. 0 imprime todos; 1 imprime só os peixes; e 2 só imprime os cachorros
void Pessoa::imprime(int criterio){//dependendo do criterio decide que tipo de animal sera escrito
    int i,j,tam;
    tam=animais.size();
    vector <string> a;
    for (i = 0; i < tam; i++)
    {
        a.push_back(animais[i]->getNome());
    }
    sort(a.begin(),a.end());

    //Impressão dos dados da pessoa
    cout << "Nome: " << getNome() << endl;
    cout << "Idade: " << getIdade() << endl << endl << endl;


  //Impressão de dados dos animais
    for ( i = 0; i < tam; i++){   
        for ( j = 0; j < tam; j++){

            //Todos dos animais
            if(criterio == 0){
                if(a[i]==animais[j]->getNome()){
                    animais[j]->imprime();
                }
            }

            //Somente os peixes
            else if(criterio==1){
              if(animais[j]->getEspecie()=="Peixe"){
                  if(a[i]==animais[j]->getNome()){
                      animais[j]->imprime();
                    }
              }
            }

            //Somente os cachorros
            else if(criterio==2){
              if(animais[i]->getEspecie()=="Cachorro"){
                  if(a[i]==animais[j]->getNome()){
                      animais[j]->imprime();
                  }
              }
            }

        }
    }

}
