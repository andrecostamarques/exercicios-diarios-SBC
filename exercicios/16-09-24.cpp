#include <iostream>
#include <stack>
#include <queue>
#include <string>

// https://www.codewars.com/kata/5264d2b162488dc400000001/cpp
// 16/09/2024

std::string spinWords(const std::string &str)
{
    std::stack<char> pilha;
    std::stack<char> pilha_dupla;
    std::string Retorno = "";
    unsigned int counter = 0;

    std::string str1 = str;

    str1 += ' ';

    for (int i = 0; i < str1.length(); i++)
    {
        if (i < str1.length() && str1[i] != ' ')
        { // se não for espaço
            pilha.push(str1[i]);
            counter++;
        }
        else
        { // se for 
            
            if (Retorno.length() > 0) {
                Retorno += " ";
            }

            if (counter > 4)
            { // se a palavra tem mais q 5 letras

                while (!pilha.empty())
                {
                    Retorno += pilha.top();
                    pilha.pop();
                }
            }
            else
            { // se a palavra for menor que 5 letras
                while (!pilha.empty())
                {
                    pilha_dupla.push(pilha.top());
                    pilha.pop();
                }
                while (!pilha_dupla.empty())
                {
                    Retorno += pilha_dupla.top();
                    pilha_dupla.pop();
                }
            }
            counter = 0;
        }
    }
    return Retorno;
} // spinWords

int main()
{
    std::string s = "Hola rafael abc";
    std::string teste = spinWords(s);

    std::cout << teste << std::endl;

    return 0;
}