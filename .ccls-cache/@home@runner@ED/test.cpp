#include "test.h"
#include "lista_sequencial.h"
#include <iostream>

void Test(int t) {
  const int maxtest = 3;

  switch (t) {
  case 1:
    test1();
    break;

  case 2:
    test2();
    break;

  case 3:
    test3();
    break;
  case 4:
    test4();
    break;

  case 5:
    test5();
    break;

  default:
    std::cout << "Numero de teste invalido" << std::endl;
    break;
  }
}

void test1() {
  std::cout << "Teste 1: Verificando se a lista está vazia!!!" << std::endl;

  const int n = 3;
  ListaSequencial lista(n);

  std::cout << "Tamanho da lista: " << n << std::endl;

  if (lista.EstaVazia()) {
    std::cout << "Lista vazia!!!" << std::endl;
  } else {
    std::cout << "Lista não está vazia!!!" << std::endl;
  }
}
void test2() {
  std::cout << "Teste 2: Verificando se a lista está cheia!!!" << std::endl;
  const int n = 6;
  ListaSequencial lista(n);
  std::cout << "Tamanho da lista: " << n << std::endl;

  std::cout << "Inserindo elementos em todas as posições na lista" << std::endl;

  lista.Inserir(0, 1);
  lista.Inserir(1, 2);
  lista.Inserir(2, 3);
  lista.Inserir(3, 4);
  lista.Inserir(4, 5);
  lista.Inserir(5, 6);

  std::cout << "Verificando se a lista está cheia" << std::endl;

  if (lista.EstaCheia()) {
    std::cout << "Lista Cheia!!!" << std::endl;
  } else {
    std::cout << "Lista não está cheia!!!" << std::endl;
  }
}

void test3() {
  std::cout << "Teste 3: verificando inserção de elementos" << std::endl;

  const int n = 3;
  ListaSequencial lista(n);
  std::cout << "Tamanho da lista: " << n << std::endl;

  std::cout << "Inserindo na posição 1 o elemento 10" << std::endl;

  if (lista.Inserir(1, 10)) {
    std::cout << "Elemento inserido corretamente!!!" << std::endl;
  } else {
    std::cout << "Elemento não foi inserido!!!" << std::endl;
  }
}

void test4() {
  std::cout << "Teste 4: verificando remoção de elementos" << std::endl;

  const int n = 6;
  ListaSequencial lista(n);
  std::cout << "Tamanho da lista: " << n << std::endl;

  std::cout << "Inserindo na posição 1 o elemento 10" << std::endl;
  if (lista.Inserir(1, 10)) {
    std::cout << "Elemento inserido corretamente" << std::endl;
  }

  // Aqui poderia ser lançado uma exceção e não um 0, para melhorar o teste
  if (lista.Remover(1)) {
    std::cout << "Elemento removido com sucesso!!!" << std::endl;

  } else {
    std::cout << "Elemento não removido!!!" << std::endl;
  }
}

void test5() {
  std::cout << "Teste 5: Modificando elementos" << std::endl;

  const int n = 6;
  ListaSequencial lista(n);
  std::cout << "Tamanho da lista: " << n << std::endl;

  std::cout << "Inserindo na posição 1 o elemento 10" << std::endl;
  if (lista.Inserir(1, 10)) {
    std::cout << "Elemento inserido corretamente" << std::endl;
  }

  std::cout << "Modificando o elemento da posição 1, de 10 para 25"
            << std::endl;
  if (lista.Modificar(1, 25)) {
    std::cout << "Elemento Modificado com sucesso!!!" << std::endl;

  } else {
    std::cout << "Elemento não removido!!!" << std::endl;
  }
}
