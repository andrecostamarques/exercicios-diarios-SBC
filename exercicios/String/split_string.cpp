#include <string>
#include <vector>
#include <iostream>

//https://www.codewars.com/kata/515de9ae9dcfc28eb6000001/cpp
//20/09/24

std::vector<std::string> solution(const std::string &s)
{ int size = s.length();
 std::string s1 = s;
  if(size % 2 != 0){
    s1 = s1 + '_';
  }
  std::vector<std::string> vector((int)s1.length()/2);
 
  for(int i = 0; i < (int)s1.length(); i = i + 2){
    
    std::string pair = s1.substr(i, 2);
    vector[i/2] = pair;
    
  }
    
    return vector; // Your code here
}