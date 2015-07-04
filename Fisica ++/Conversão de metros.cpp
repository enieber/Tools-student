#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    float metros, pes, km, cm, conv, pol;
   int nc;
   
   while(nc!=0){
                
   cout<<"\n\n Conversao de Medidas de Comprimento \n";
   cout<<" Digite \n (1) para converte Polegadas para Metros \n (2) para converte Centimetros para Metros \n (3) para converte Metros para Pes \n (0) ou qualque outro numero para sair :"; 
   cin>>nc;
   
   if(nc==1){
   cout<<"\n Conversao de polegadas para Metros  ";
   cout<<"\n Digite a media em Polegadas :";
   cin>>pol;
   
   conv=pol*0.254;
   
   cout<<"\n A medida em metros eh: "<<conv;
    
   }
   
   
   else if(nc==2){ 
    cout<<"\n Conversao de Centimetros para Metros ";              
    cout<<"\n Digete a medida em Centimetros: ";
    cin>> cm;
    
    conv=cm/100;
    
    cout<<"\n A medida em Metros eh "<<conv;
    
   }
   
    
    
    else if(nc==3){
    cout<<"\n Convesao de Metros para Pes ";          
    cout<<"\n Digete a medida em metros: ";
    cin>> metros;
    
    pes = metros * 3.2808399;
    
    cout <<"\n A medida em pes eh: " <<pes ;
     
    }
    
     else{
     cout<<"\n Fim do Programa !!";
     nc=0; 
     }
    
} 
    
    system("PAUSE>null");
    return EXIT_SUCCESS;
}
