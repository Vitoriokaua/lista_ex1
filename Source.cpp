/*1. Fa�a um programa que possua um vetor denominado A que armazene 6 n�meros inteiros. O programa deve executar os seguintes passos: 
Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7. 
Armazene em uma vari�vel inteira (simples) a soma entre os valores das posi��es A[0], A[1] e A[5] do vetor e mostre na tela esta soma. 
Modifique o vetor na posi��o 4, atribuindo a esta posi��o o valor 100. 
Mostre na tela cada valor do vetor A, um em cada linha.*/
#include <iostream>

	using namespace std;

	int main() {
		int vetor[6]{ 1, 0, 5, -2, -5, 7 };
		int soma = vetor[0] + vetor[1] + vetor[5];
		cout << "A soma das posi��es 0, 1 e 5 e: " << soma << endl;

		vetor[4] = 100;
		
		cout << "Valores do vetor A:" << endl;
		for (int i = 0; i < 6; ++i)
		{
			cout << vetor[i] << endl;
		}
}