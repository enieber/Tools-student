#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    string nome1;
    int formula;
    float al,sexo,m,f;
    
    cout<<"\n ESTE EH UM PROGAMA QUE CALCULA O PESO IDEAL \n";
    cout<<endl;
    
    
    
    cout<<" Digite seu nome:";
    cin>>nome;
    cout<<" Digite a sua altura:";
    cin>>al;
    cout<<" Digite seu sexo (M)para masculino e (F)para feminino:";
    cin>>sexo;
    cout<<endl;
    
    m=(72.7*al)-58;
    f=(62.1*al)-44.7;
        
    
    if(sexo='f'){
    cout<<" O peso ideal da "<<nome<<" eh " <<f;    
    }
    else {
    cout<<" O peso ideal do "<<nome<<" eh "<<m;        
    }
    
    cout<<endl;
    cout<<"\n Fim do Progama";  
    
    system("PAUSE>null");
    return EXIT_SUCCESS;
}
