/* Praticando conteudo do Simestre passado.
 * version: v1
 * copy right (C) 2022 Wildes Sousa
 * 
 * Fazer um código que de cadastro utilizando:
   - Struct
   - Ordenação (Selection)
   - Alocação Dinamica
   - Busca Binaria
   - Condicionais
 */
#include <iostream>
using namespace std;
void selectionSort (int v[], int tam);
void selection (int v[], int t);
void exibe (int v[], int t);

int main() {

	int TAM;
	cout << " Entre com o tamanho: ";
	cin >> TAM;

	int vet[TAM];

	cout << "\nEntre com os elementos: \n";
	for (int i = 0; i < TAM; i++){
		cin >> vet[i];
	}

	cout << "\nSAIDA\n";
	selection (vet, TAM);
	exibe (vet, TAM);

	return 0;
  
}

void selection (int v[], int t)
{
	int menor, troca = 0;
	for (int indice = 0; indice < t-1;indice++){
		menor = indice;
		for (int comp = indice+1; comp < t; comp++){
			if (v[comp] < v[menor]){ // enquanto menor verifica
				menor = comp; // atualiza menor
			}
		}// permutação
		troca = v[indice];
		v[indice] = v[menor];
		v[menor] = troca;
		
	}
}
/* correção*/
void selectionSort (int v[], int tam)
{
    int elemento_menor;
    int troca_elemento;
    for (int i = 0; i < tam-1; i++){
        elemento_menor = i;
        for (int j = i + 1; j < tam; j++){
            if (v[j] < v[elemento_menor])
                elemento_menor = j;          
        }
        troca_elemento = v[elemento_menor];
        v[elemento_menor]  = v[i];
        v[i] = troca_elemento;
    }
    
}
void exibe (int v[], int t)
{
	if (t == 1){
		cout << v[t-1] << " ";
	}
	else {
		exibe (v, t-1);
		cout << v[t-1] << " ";
	}
}
