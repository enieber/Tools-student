#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    float n1,n2,n3;
    int n;
    
    while(n!=0){
    cout<<"\n Este eh um progama que verifica que tipo de triangulo eh\n";
    cout<<"\n   EQUILATERO -- ISOSCELES -- ESCALENO  \n\n";
    

   
    cout<<"\n Digite o lado 1 :";
    cin>>n1;
    cout<<"\n Digite o lado 2 :";
    cin>>n2;
    cout<<"\n Digite o lado 3 :";
    cin>>n3;
    
    
    if(n1==0 || n2==0 || n3==0){
    cout<<"\n Os lados nao formao um triangulo, pois ao menos um eh igual a ZERO";             
      }
    else if(n1+n2<n3 || n2+n3<n1 || n1+n3<n2){
    cout<<"\n Os lados nao formao um triangulo, pois a soma dos lados nao eh maior que o outro";      
      }
    else if(n1==n2 && n1==n3 && n2==n3){
    cout<<"\n Os lados formao um triangulo EQUILATERO ";
      }
    else if(n1==n2 && n1!=n3 || n1==n3 && n1!=n2 || n2==n3 && n2!=n1){
    cout<<"\n Os lados formao um triangulo ISOSCELES ";   
      }
    else if(n1!=n2 && n1!=n3 && n2!=n3){
    cout<<"\n Os lados formao um triangulo ESCALENO ";
      }
   else {
   cout<<" ";
   }
   cout<<"\n\n Digite (0) para sair ou qualquer outro numero para continuar ";
   cin>>n;
    }
    cout<<"\n Fim do Programa !!";
         
    system("PAUSE>null");
    return EXIT_SUCCESS;
}
