#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

//https://www.codewars.com/kata/5679aa472b8f57fb8c000047    
//20/09/2024

int find_even_index (const vector <int> numbers) {
  
  int sum_left = 0;
  int sum_right = accumulate(numbers.begin(), numbers.end(), 0); // Soma total

  int i = 0;

  while(i < (int)numbers.size()){
    
    sum_right = sum_right - numbers[i];
    
    if(sum_left == sum_right){
      return i++;
                              }
    sum_left = sum_left + numbers[i];
    i++;
  }
    
  return -1;
  }