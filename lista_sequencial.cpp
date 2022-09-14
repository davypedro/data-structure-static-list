#include "lista_sequencial.h"
#include <iostream>

ListaSequencial::ListaSequencial(int tamanho) {
    this->tamanho = tamanho;
    vetor = new int[tamanho];
    lista_contador = 0;
}

ListaSequencial::~ListaSequencial() {
    delete[] vetor;
}

bool ListaSequencial::EstaVazia() {
    return lista_contador <= 0;
}

bool ListaSequencial:: EstaCheia() {
    return lista_contador >= tamanho;
}

int ListaSequencial::VerificarTam() {
    return lista_contador;
}

int ListaSequencial::Obter(int posicao) {
    if (!PosicaoValida(posicao)){
      return 0;
    }
    return vetor[posicao];
}

bool ListaSequencial::Modificar(int posicao, int novo_elemento) {
    if (!PosicaoValida(posicao)){
      return false;
    } 
    vetor[posicao] = novo_elemento;
    return true;
}

bool ListaSequencial::Inserir(int posicao, int novo_elemento) {
   if (!PosicaoValida(posicao)){
      return false;
    } 
    if (EstaCheia()){
      std::cout<<"ERRO! A lista esta cheia!"<<std::endl; 
      return false;
    }
    vetor[posicao] = novo_elemento;
    lista_contador++;
    return true;
}

int ListaSequencial::Remover(int posicao) {
  if (!PosicaoValida(posicao)){
      return 0;
    }
  if (EstaVazia()){
    std::cout<<"A lista esta vazia!"<<std::endl;
    return 0;
  }
    lista_contador--;
    return vetor[posicao];
}

bool ListaSequencial::PosicaoValida(int posicao){
    if (posicao >= tamanho){
      std::cout <<"A posicao eh maior que o tamanho"<< std::endl;
      return false;
    }
    if (posicao < 0){
      std::cout <<"A posicao eh invalida. Eh menor que '0'"<< std::endl;
      return false;
    }
    return true;
}