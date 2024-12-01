// Comentário utilizado como cabeçalho do arquivo
// Porgrama 1
// Função: progrramador
// Autor : Allisson Santana Freitas

//diretivas de compilação
//includes de bibliotecas locais

//include de bibioteca padrões 
#include<stdio.h>

// Prótotipo da função
int Soma(int a, int b);

int main()
{
    int numero = 100;
    int soma = Soma(numero,19) ;
    int resultado = numero *100;

    printf("numero: %d\nnumero:%d\nnumero:%d\n", numero,soma,resultado);
    /* code */
    return 0;
}
int Soma(int a, int b){
    return a + b;
}
