#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
                         int num,aux=2,div=0;
                         
                         cout<<"\n Digite \n Um numero para saber se eh primo ou nao \n ou digite (0) para sair \n"; 
                         cout<<"\nDigite um numero : ";
                         cin>>num;
                         aux=2;
                         div=0;


                         while(num!=0){


                         while( aux <= num/2){

                         if( num%aux==0){
                          div++;
                         }
                          aux++;
                         }
                         
                         if (div == 0){
                         cout<<" Eh Primo\n";}
                        
                         else{
                         cout<<" Nao eh primo\n";}

                         cout<<"Digite um numero: ";
                         cin>>num;
                         aux=2;
                         div=0;

                         }
                         cout<<"\n Fim do programa !!";

system("PAUSE>null");
return EXIT_SUCCESS;
}
