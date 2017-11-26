#include<iostream>
using namespace std;

void InsertSort(int vetor[]);

int main(){

    int vetor[] = {4, 5, 6, 3, 1 , 7, 2, 9, 8};
    InsertSort(vetor);

    return 0;
}

void InsertSort(int vetor[]){
    int i,j,key;
    for(j = 0;j < 10;j++){
        key = vetor[j];
        for(i = j - 1;(i >=0) && (vetor[i] > key);i--){
            vetor[i+1] = vetor[i];
        }
        vetor[i+1] = key;
    }
    for(i = 0;i < 10;i++){
        cout << vetor[i] << " ";
    }
}
