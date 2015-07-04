#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n1, n2, op;
    int soma=0,sub=0,mult=1;
    
  
    cout<<"Digite (1) para somar \n(2) para subtrair \n(3) para multiplicar \n(0) para sair:";
    cin>>op;
    
    
    while(op!=0){
                 
      //o padrão utilisado foi o padrão de serie de possibilidades pois não a nada a ser comparado
                 
     switch (op){
          case 1:
               system("color 1f");
               soma=n1+soma;
               
               cout<<"\n Digite um numero:";
               cin>>n1;
               cout<<"\n Digite um numero:";
               cin>>n2;
               soma=n1+n2;
               
               cout<<"A soma dos numeros eh:"<<soma;
               
               
               break;
          case 2:
               system("color 0e");
               
               cout<<"\n Digite um numero:";
               cin>>n1;
               cout<<"\n Digite um numero:";
               cin>>n2;
               sub=n1-n2;
               
               cout<<"A subtrassao dos numeros:"<<sub;
               
               
               break;
          case 3:
              system("color 4f");
               
               cout<<"\n Digite um numero:";
               cin>>n1;
               cout<<"\n Digite um numero:";
               cin>>n2;
               mult=n1*n2; 
               cout<<"A multplicassao dos numeros:"<<mult;
               
              
               
               break;
            
          default :
          system("color 7f");
               cout<<" O numero digitado eh invalido";
               break;}
     
    cout<<"\n\nDigite (1) para somar \n(2) para subtrair \n(3) para multiplicar \n(0) para sair:";
    cin>>op;
    system("cls");
    }
    system("color 9e");
    cout<<"Fim do Progama!!";
    
    system("PAUSE>null");
    return EXIT_SUCCESS;
}
