#include <iostream>
#include <stdlib.h>
#include <math.h>
#define LIMITE 10
#define POPULACAO 1
#define CRUZAMENTO
using namespace std;

//Funcao para transformar numeros decimais em binarios
/*int DecParaBin(int decimal){
    int aux = decimal, numBinInv[20000], cont=0, binario=0;
    while(aux>0){
        numBinInv[cont] = (int) aux%2;
        cont++;
        aux= (int) aux/2;
    }
    for(int j=cont-1; j>=0; j--){
            binario += (int) numBinInv[j]*pow(10, j);
    }
    return binario;
}*/

int main(){
    /*
    Todos os numeros estao entre 0.0 e 1.0 (valores em ponto), porem irei representar apenas os numeros apos a virgula 
    para facilitar na conversao para binario que eh utilizado para Crossover e mutacao, a precisao sera de 5 casas 
    decimais
    */
    //Gerando numeros aleatorio inteiros entre 0 e 99999
    int numero[POPULACAO], numBin[POPULACAO], numBinInv[10000], cont = 0;
    for(int i=0; i<POPULACAO; i++){
        numero[i] = 4;
        //numero[i] = rand()%LIMITE;
        cout << numero[i] << endl;
    }
    /*cout << "Imprimindo os numeros em binario\n";
    for(int i=0; i<POPULACAO; i++){
        numBin[i] = DecParaBin(numero[i]);
        cout << numero[i] << " --> " << numBin[i] << endl;
    }*/
    
    
    cout << "numero convertido em binario \n";
    //convertendo em binario
    for(int i=0; i<POPULACAO; i++){
        int aux = numero[i];
        cout << "O que esta na variavel aux " << aux << endl;
        while (aux>0)
        {
            numBinInv[cont] = aux%2;
            cont++;
            aux/=2;
        }
    }
    cout << "imprimindo o binario invertido" << endl;
    for(int j=0; j<cont; j++){
        cout << numBinInv[j];
    }
    cout << "\nimprimindo o binario\n";
    for(int j=(cont-1); j>=0; j--){
        cout << numBinInv[j];
    }

    //Imprimindo em binario na variavel numBin
    cout<<"\nImprimindo em binario na variavel numBin\n";
    for(int i=0; i<POPULACAO; i++){
        numBin[i]=0;
    }

    cout << "numero de contadas: " << cont << endl;
    //Exibindo o numero binario invertido
    for(int i=0; i<POPULACAO; i++){
        for(int j=cont; j>=0; j--){
            numBin[i] += numBinInv[j]*((int) pow(10, j));
            cout << numBin[i] << " !!! " << endl;
        }
        cout << numBin[i];
    }

    return 0;
}