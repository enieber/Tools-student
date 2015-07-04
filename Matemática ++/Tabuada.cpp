#include <cstdlib>
#include <iostream>
#include <conio.h>
using namespace std;

int main(int argc, char *argv[])
{
            int n1,m, mul=1;
    
            while(n1!=0){
            cout<<"\n Digite um numero:";
            cin>>n1;
            cout<<" \n"; 
            cout<<" A tabuada do "<<n1<<" eh: \n\n"; 
            cout<<"0 X "<<n1<<" eh: 0 \n";
            for( m=1; m<=10; m++){
            
             mul=n1*m;
             
            cout<<m<<" X "<<n1<<" eh :"<<mul<<"\n";
             }
             cout<<"\n Digite (0) para sair ou qualquer numero para sair ";
             cin>>n1; 
             }
             
            cout<<"\n Fim do Programa !!";
            
   
    system("PAUSE>null");
    return EXIT_SUCCESS;
}
