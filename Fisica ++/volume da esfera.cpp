#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    float pi,r,v;
    
    //este é um progama que calcula o volume da esfera atraves do raio
    
    cout<<"Digite o raio de uma esfera:";
    cin>>r;
    
    pi=3.14;
    
    v=(4/3 *pi)*(r);
    
    cout<<"O volume da esfera eh de "<<v;
    
    system("PAUSE>>null");
    return EXIT_SUCCESS;
}
