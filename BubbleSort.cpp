#include<iostream>
using namespace std;

void BubbleSort(int vetor[]);

int main() {

    int vetor[] = {4, 5, 6, 3, 1 , 7, 2, 9, 8};
    BubbleSort(vetor);

    return 0;
}

void BubbleSort(int vetor[]){
    int i,j,aux;
    for(i = 0;i < 10;i++){
        for(j = i + 1;j < 10;j++){
            if(vetor[i] > vetor[j]){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
    for(i = 0;i < 10;i++) {
        cout << vetor[i] << " ";
    }
}
