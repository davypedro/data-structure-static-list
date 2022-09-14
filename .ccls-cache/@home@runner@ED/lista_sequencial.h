#pragma once

class ListaSequencial{
    private: 
        int tamanho;
        int *vetor;
        int lista_contador;
    public:
        ListaSequencial(int tamanho); 
        ~ListaSequencial();
        bool EstaVazia();
        bool EstaCheia();
        int VerificarTam();
        int Obter(int posicao);
        bool Modificar(int posicao, int novo_elemento);
        bool Inserir(int posicao, int novo_elemento);
        int Remover(int posicao);
        bool PosicaoValida(int posicao);
};