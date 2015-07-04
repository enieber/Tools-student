#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    float nc,nq,area,litro;
    float a,r,base;
    
    cout<<"Digite o do raio:";
    cin>>r;
    cout<<"Digite a altura do tanque:";
    cin>>a;
    
    area=(3.14*(r*r))+(2*3.14*r*a);
    litro=area/3;
    nq=litro/5;
    nc=nq*50.00;
    
    cout<<"O custo da Pintura eh "<<nc<<"\n e a quantidade de latas de tintas eh "<<nq;  
    
    system("PAUSE>>null");
    return EXIT_SUCCESS;
}
