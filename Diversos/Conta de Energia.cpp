#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    string nome,t;
    float p,m,g,i,co,r,kw;
    int o;
    do{
    cout<<"\n Este eh um progama que calcula o gasto de energia apartir do consumido \n\n";
    
    
    cout<<" Digite o nome do consumidor:";
    cin>>nome;
    cout<<" Digite o gasto em kw/h:";
    cin>>kw;
    cout<<" Digite o tipo de consumido (i)para industrial, "<<endl<<"(c)para comercial e (r)para residencial:";
    cin>>t;
    cout<<endl;
    
    i=1.29;
    co=0.48;
    r=0.60;
    p=i*kw;
    m=c*kw;
    g=r*kw; 
    
    /* A função utilizada foi a função padrão sequencial
    pois a mais de duas possibilidades*/
    
    if(t=="i"){
    cout<<" O gasto do consumidor industrial eh R$"<<p;        
    }
    else if(t=="co"){
    cout<<" O gasto do consumidor comercial eh R$"<<m;     
    }
    else {
    cout<<" O gasto do consumidor residencial eh R$"<<g;     
    }
                          cout<<"\n Digite (0) para sair ou qualquer numero para continuar ";
                      cin>>o;
    }while(o!=0);
    cout<<"\n\n Fim do Progama";
   
    system("PAUSE>null");
    return EXIT_SUCCESS;
}
