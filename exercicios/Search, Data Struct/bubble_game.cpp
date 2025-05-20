#include <bits/stdc++.h>
using namespace std;

// https://judge.beecrowd.com/pt/problems/view/1088
// 19/05/25

int main(){

    long qnt;
    long count = 0; 
    cin >> qnt;

    vector<long> vetor(qnt);

    for(int i  = 0; i < qnt; i++){
        cin >> vetor[i];
        if (vetor[i-1] > vetor[i] && i > 0){
            swap(vetor[i-1], vetor[i]);
            count++;
        }
    }

    for(int i  = 0; i < qnt; i++){
        for(int j = 0; j < qnt; j++){
            if (vetor[j] > vetor[j + 1]) {
                swap(vetor[j], vetor[j + 1]);
                count++;
        }
    }

    if(count % 2 == 0){
        printf("Marcelo");
    } else{
        printf("Carlos");
    }

    return 0;
}}