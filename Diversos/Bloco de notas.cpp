#include <cstdlib>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string nome;
    cout<<"escreva seu nome para aparecer no bloco de notas :  ";
    cin>>nome;
    
    ofstream escreva;
    
    escreva.open("Nome da Pessoa.docx");
    
    escreva<<"";
    escreva<<nome;
    
    escreva.close();
    
    
   
    system("PAUSE>null");
    return EXIT_SUCCESS;
}
