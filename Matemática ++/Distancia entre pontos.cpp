#include <cstdlib>
#include <iostream>
#include <math.h>
using namespace std;

int main(int argc, char *argv[])
{
    float d,p,q;
    float x1,x2,y1,y2;
    float raiz;
    
    /* este é um progama que calcula a 
    distancia de dois pontos quaisquer*/
    
    cout<<"Digite o valor de x para o primeiro ponto:";
    cin>>x1;
    cout<<"Digite o valor de y para o primeiro ponto:";
    cin>>y1;
    cout<<"Digite o valor de x para o segundo ponto:";
    cin>>x2;
    cout<<"Digite o valor de y para o segundo ponto:";
    cin>>y2;
    
    d=((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    raiz=sqrt(d);
    
    cout<<"\nA distancia dos pontos eh:"<<d;
   
    
    system("PAUSE>null");
    return EXIT_SUCCESS;
}
