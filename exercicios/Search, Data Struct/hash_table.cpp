#include <iostream>
#include <unordered_map>
#include <vector>

//https://leetcode.com/problem-list/hash-table/
//18/09/24

class Solution {
public:
    int aux;
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int,int> myMap;
            for (int i = 0; i < nums.size(); ++i) {
        myMap[nums[i]] = i;  // chave = valor do vetor, valor = índice
    }

    for(int i = 0; i < nums.size(); i++){

        aux = target - nums[i];
        auto it = myMap.find(aux);

        if (myMap.count(aux) && myMap[aux] != i) { //se tem e se não é o msm que o indice
                // Se encontrado, retorna os índices
                std::vector<int> array = {myMap[aux], i};
                return array;
            }
        
    }
    return {};
    }

};

int main(){

    std::vector<int> vetor = {0,1,2,3,4,5,6,7};
    
    Solution solution;
    

    std::vector<int> resultado = solution.twoSum(vetor, 9);
    
    std::cout << resultado[0] << resultado[1] << std::endl;

    return 0;
}