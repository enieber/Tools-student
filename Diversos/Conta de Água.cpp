#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int con;
    string mes;
    float mc;
    
    cout<<"Digite o tipo de consumidor (1) para residencial e (2) para comercial:";
    cin>>con;
    cout<<"Digite o mes em que foi consumido a agua:";
    cin>>mes;
    cout<<"Digite o numero de metros cubicos de agua gastos:";
    cin>>mc;
    
    //o padrão utilizado foi o padrão de escolha sequencial pois contem apenas 3 possibilidades
    
    if(con==1){
    mc=mc*5,80;
    
    cout<<"O consumidor residencial gastou no mes de "<<mes<<" R$"<<mc;
    }
    else if(con==2){
    mc=mc*7,45;
    cout<<"O consumidor comercial gastou no mes de "<<mes<<" R$"<<mc;
    }
    else{
    cout<<" O numero digitado eh invalido!!";
    }
    
    
    system("PAUSE>null");
    return EXIT_SUCCESS;
}
