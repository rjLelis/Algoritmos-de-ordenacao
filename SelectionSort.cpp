#include<iostream>
using namespace std;

void SelectionSort(int vetor[]);

int main(){

    int vetor[] = {4, 5, 6, 3, 1 , 7, 2, 9, 8};
    SelectionSort(vetor);

    return 0;
}

void SelectionSort(int vetor[]){
    int i,j,min,aux;
    for(i = 0;i < 9;i++){
        min = i;
        for(j = i + 1;j < 9;j++){
            if(vetor[j] < vetor[min]){
                min = j;
            }
        }
        aux = vetor[min];
        vetor[min] = vetor[i];
        vetor[i] = aux;
    }
    for(i = 0;i < 10;i++){
        cout << vetor[i] << " ";
    }

}
