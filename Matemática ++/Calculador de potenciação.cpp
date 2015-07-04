#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main(int argc, char *argv[])
{
    int n1,n2,resultado;
    int n;
    do{
    cout<<"Digite a base:";
    cin>>n1;
    cout<<"Digite o expoente:";
    cin>>n2;
    
    if(n1==0){
    resultado=1;
    }
    else if(n1!=0){
    resultado= pow(n1,n2);
    printf("\n%d elevado a %d: %d\n\n", n1,n2,resultado);
    }
    cout<<"\n Para para continuar(0) ou digite qualquer numero para sair:";
    cin>>n;
    cout<<endl;
  
}while(n==0);
   
   cout<<" Fim do Programa!!";
    system("PAUSE>null");
    return EXIT_SUCCESS;
}
