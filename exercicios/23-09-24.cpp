#include <iostream>
#include <vector> 
#include <algorithm>
#include <cstdlib>
#include <numeric>

// https://codeforces.com/problemset/problem/2014/C
// tags: binary search | divide and conquer | greedy | math
// 24/09/2024


std::vector<long> robinHoodinTown(){

    std::vector<long> result, wealthPopulation;
    long temp, qnt, population;

    std::cin >> qnt;

    for (int i = 0; i < qnt; i++){

        std::cin >> population;

        for(int j = 0; j < population; j++){
            std::cin >> temp;
            wealthPopulation.push_back(temp);
        }

        if (population < 3){result.push_back(-1); continue;}

        std::sort(wealthPopulation.begin(), wealthPopulation.end());

        long soma = std::accumulate(wealthPopulation.begin(), wealthPopulation.end(), 0);

        long media = soma/population;
        long mediana = wealthPopulation[(population/2)];

        std::cout << "Media: "<< media << std::endl;
        std::cout << "Soma: "<< soma << std::endl;
        std::cout << "Mediana: "<< mediana << std::endl;
        std::cout << "Population: "<< population << std::endl;

        if(mediana < (media/2)){ // mediana = triste -> aparece
            result.push_back(0);
        } else if(mediana >= (media/2)){ // mediana = feliz 
            long x = (2 * population) + (population * mediana) - soma + population;
            result.push_back(x + 1);
        }

        wealthPopulation.clear();
        population = 0;
    }

    return result;
}

int main(){

    std::vector<long> resposta;

    resposta = robinHoodinTown();

    for(int i = 0; i < resposta.size(); i++){
        std::cout << resposta[i] << std::endl;
    }

    return 0;
}