#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h> 


using namespace std;
int menu(){
    
    cout<<"\n Digite ";
    cout<<"\n (1) Para Matematica ";
    cout<<"\n (2) Para Fisica ";
    cout<<"\n (3) Para Quimica ";
    cout<<"\n (4) Para Diversos ";
    cout<<"\n (0) Para Sair: ";
 }
int opc1(){//Matematica
    cout<<"\n Digite ";
    cout<<"\n (1) Para Calcular Potenciacao  ";
    cout<<"\n (2) Para Usar a Calculadora ";
    cout<<"\n (3) Para Calcular Distancia entre Pontos ";
    cout<<"\n (4) Para Saber Quais os Numeros Primos  ";
    cout<<"\n (5) Para Calcular uma Tabuada ";
    cout<<"\n (6) Para Saber que Tipo de Triangulo ";
    cout<<"\n (0) Para Sair: ";
 } 
 
int opc2(){//Fisica
    cout<<"\n Digite ";
    cout<<"\n (1) Para a Conversao de Medidas de Comprimento ";
    cout<<"\n (2) Para Calcular a Velocidade Media ";
    cout<<"\n (3) Para Saber o Volume de uma Esfera ";
    cout<<"\n (0) Para Sair: ";
 } 
 
int opc3(){//Quimica
    cout<<"\n Digite ";
    cout<<"\n (1) Para Conversao de Temperatura ";
    cout<<"\n (0) Para Sair: ";
 }

int opc4(){//Diversos
    cout<<"\n Digite ";
    cout<<"\n (1) Para Saber o Preco da Conta de Agua ";
    cout<<"\n (2) Para Saber o Preco da Conta de Energia ";
    cout<<"\n (3) Para Saber o Seu Peso Ideal ";
    cout<<"\n (0) Para Sair: ";
 }
 
using namespace std;

int main(int argc, char *argv[])
{
    int men,opcao1,opcao2,opcao3,opcao4;
    double n1,n2,resultado;
    int n;
    int num,aux=2,div=0;
    menu();
    cin>>men;
   
    
    switch (men){
          case 1:
          
               cout<<"\n Matematica \n";
               opc1();
               cin>>opcao1;
               
               switch (opcao1){//matematica
                 case 1://distancia de pontos
                    float d,p,q;
                        float x1,x2,y1,y2;
                         float raiz;
    
    
    
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
   
                     break;
                         
                 
                 case 2://Pontenciação
                           
                          
                          while(n==0){
                           cout<<"\n\nDigite a base:";
                           cin>>n1;
                           cout<<"Digite o expoente:";
                           cin>>n2;
    
                           if(n1==0){
                            resultado=1;
                            }
                           else if(n1!=0){
                              resultado = pow(n1,n2);
                           printf("\n%d elevado a %d: %d\n\n", n1,n2,resultado);
                            }
                           cout<<"\n Para para continuar(0) ou digite qualquer numero para sair:";
                           cin>>n;
                           cout<<endl;
  
                           }
                 
                 
                         
                          
                           cout<<" Fim do Programa!!";
                           break;
                           
                          
                 
                     case 3://calculadora
                      
                          int n1, n2, op;
                          int soma=0,sub=0,mult=1;
    
  
                           cout<<"\n\nDigite (1) para somar \n(2) para subtrair \n(3) para multiplicar \n(0) para sair:";
                           cin>>op;
    
    
                        while(op!=0){
                 
     
                 
                       switch (op){
                             case 1:
                              system("color 1f");
                              soma=n1+soma;
               
                              cout<<"\n Digite um numero:";
                              cin>>n1;
                              cout<<"\n Digite um numero:";
                              cin>>n2;
                              soma=n1+n2;
               
                              cout<<"A soma dos numeros eh:"<<soma;
               
               
                               break;
                            case 2:
                             system("color 0e");
               
                             cout<<"\n Digite um numero:";
                             cin>>n1;
                             cout<<"\n Digite um numero:";
                             cin>>n2;
                             sub=n1-n2;
               
                              cout<<"A subtrassao dos numeros:"<<sub;
               
               
                                 break;
                                 
                               case 3:
                              system("color 4f");
               
                              cout<<"\n Digite um numero:";
                              cin>>n1;
                              cout<<"\n Digite um numero:";
                              cin>>n2;
                              mult=n1*n2; 
                              cout<<"A multplicassao dos numeros:"<<mult;
               
              
               
                                   break;
            
                              default :
                              system("color 7f");
                              cout<<" O numero digitado eh invalido";
                              break;}
     
                             cout<<"\n\nDigite (1) para somar \n(2) para subtrair \n(3) para multiplicar \n(0) para sair:";
                             cin>>op;
                             system("cls");
                                 }
                             system("color 9e");
                             cout<<"Fim do Progama!!";
                             break;}
                             

                              
          case 4://numero primo
                 
                    

                       cout<<"Digite um numero: ";
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

              break;
              case 5://tabuada
          cout<<"tabuada\n";
                   
              case 6://triangulo
            
                      float n1,n2,n3;
  
                      cout<<"Este eh um progama que verifica que tipo de triangulo eh"<<endl;
                      cout<<endl;
                      cout<<"   EQUILATERO -- ISOSCELES -- ESCALENO  \n\n ";
    

   
                    cout<<"Digite o lado 1 :";
                    cin>>n1;
                    cout<<"Digite o lado 2 :";
                    cin>>n2;
                    cout<<"Digite o lado 3 :";
                    cin>>n3;
    
    
                   if(n1==0 || n2==0 || n3==0){
                   cout<<"Os lados nao formao um triangulo, pois ao menos um eh igual a ZERO";             
                    }
                   else if(n1+n2<n3 || n2+n3<n1 || n1+n3<n2){
                   cout<<"Os lados nao formao um triangulo, pois a soma dos lados nao eh maior que o outro";      
                    }
                  else if(n1==n2 && n1==n3 && n2==n3){
                   cout<<"Os lados formao um triangulo EQUILATERO ";
                    }
                  else if(n1==n2 && n1!=n3 || n1==n3 && n1!=n2 || n2==n3 && n2!=n1){
                   cout<<"Os lados formao um triangulo ISOSCELES ";   
                    }
                  else if(n1!=n2 && n1!=n3 && n2!=n3){
                   cout<<"Os lados formao um triangulo ESCALENO ";
                    }
                 else {
                   cout<<" ";
                    
                    break;
                       
           default:
                cout<<"\n Fim do Programa !!\n";
                break;                       
                 }
               break;
    case 2:
        cout<<"\n Fisica \n";
        opc2();
        cin>>opcao2;
               
               switch (opcao2){
               
                  case 1://conversão de medidas
                      
                           float metros, pes, km, cm, conv, pol;
                          int n1;
   
                          while(n1!=0){
                
                           cout<<"\n\n Conversao de Medidas de Comprimento \n";
                           cout<<" Digite \n (1) para converte Polegadas para Metros \n (2) para converte Centimetros para Metros \n (3) para converte Metros para Pes \n (0) ou qualque outro numero para sair :"; 
                           cin>>n1;
   
                         if(n1==1){
                           cout<<"\n Conversao de polegadas para Metros  ";
                           cout<<"\n Digite a media em Polegadas :";
                           cin>>pol;
   
                          conv=pol*0.254;
   
                          cout<<"\n A medida em metros eh: "<<conv;
    
                           }
   
   
                         else if(n1==2){ 
                          cout<<"\n Conversao de Centimetros para Metros ";              
                          cout<<"\n Digete a medida em Centimetros: ";
                          cin>> cm;
    
                          conv=cm/100;
     
                          cout<<"\n A medida em Metros eh "<<conv;
     
                           }
   
    
    
                        else if(n1==3){
                          cout<<"\n Convesao de Metros para Pes ";          
                          cout<<"\n Digete a medida em metros: ";
                          cin>> metros;
    
                          pes = metros * 3.2808399;
    
                          cout <<"\n A medida em pes eh: " <<pes ;
     
                         }
    
                       else{
                          cout<<"\n Fim do Programa !!";
                          n1=0; 
                          }
    
                          } 
                       
                       break;
                  case 2: //velocidade media
                      
                       
                       float vm, s,t;
    
                       cout<<" Digite \n (1) para calcular a velocidade media \n (2) para calcular o espaco \n (3) para calcular o tempo \n (0) para sair :";
                       cin>>n1;
    
                     while(n1!=0){
                     if( n1==1){
    
                    cout<<"\n Digite o espaco :";
                    cin>>s;
                    cout<<" Digite o tempo :";
                    cin>>t;
    
                    vm=s/t;
    
                    cout<<"\n A velocidade media eh "<<vm;
                    }
    
                     else if( n1==2){
    
                      cout<<"\n Digite a velocidade media :";
                      cin>>vm;
                      cout<<" Digite o tempo :";
                      cin>>t;
    
                      s=vm*t;
    
                      cout<<"\n O espaco percorrido eh "<<s;
                    }
     
                   else if( n1==3){
    
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
                  cin>>n1;
                  system("cls");
                  }
                       
                       break;
                    case 3://volume da esfera
                  
                        float pi,r,v;
    
   
                      cout<<"Digite o raio de uma esfera:";
                      cin>>r;
    
                      pi=3.14;
    
                       v=(4/3 *pi)*(r);
    
                     cout<<"O volume da esfera eh de "<<v;
    
                       break;
                  default:
                          
                       cout<<"\n Fim do Programa !!\n";
                       
                       break;              
               
             
             }
    case 8:
               cout<<"\n Quimica \n";
               opc3();
               cin>>opcao3;
               
               break;
     case 9:
               cout<<"\n Diversos \n";
               opc4();
               cin>>opcao4;
               
               break;
   
   
    
}
    
    
    
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
