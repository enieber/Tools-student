#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int nv;
    float vm, s,t;
    
    cout<<" Digite \n (1) para calcular a velocidade media \n (2) para calcular o espaco \n (3) para calcular o tempo \n (0) para sair :";
    cin>>nv;
    
    while(nv!=0){
    if( nv==1){
    
    cout<<"\n Digite o espaco :";
    cin>>s;
    cout<<" Digite o tempo :";
    cin>>t;
    
    vm=s/t;
    
    cout<<"\n A velocidade media eh "<<vm;
    }
    
    else if( nv==2){
    
    cout<<"\n Digite a velocidade media :";
    cin>>vm;
    cout<<" Digite o tempo :";
    cin>>t;
    
    s=vm*t;
    
    cout<<"\n O espaco percorrido eh "<<s;
    }
    
    else if( nv==3){
    
    cout<<"\n Digite a velocidade media :";
    cin>>vm;
    cout<<"\n Diigte o espaco :";
    cin>>s;
    
    t=s/vm;
    
    cout<<"\n O tempo gasto eh "<<t;
    }
    
    else{
    
    cout<<"\n Erro Digite novamente \n";
    
    }
    
    cout<<"\n Digite \n (1) para calcular a velocidade media \n (2) para calcular o espaco \n (3) para calcular o tempo \n (0) para sair  :";
    cin>>nv;
    system("cls");
    }
    
    system("PAUSE>null");
    return EXIT_SUCCESS;
}
