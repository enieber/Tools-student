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
    cout<<"\n (0) ou Qualquer Outro Numero Para Sair: ";
 }
int opc1(){//Matematica
    cout<<"\n Digite ";
    cout<<"\n (1) Para Calcular Potenciacao  ";
    cout<<"\n (2) Para Usar a Calculadora ";
    cout<<"\n (3) Para Calcular A Raiz de qualquer numero ";
    cout<<"\n (4) Para Saber Quais os Numeros Primos  ";
    cout<<"\n (5) Para Calcular uma Tabuada ";
    cout<<"\n (6) Para Saber que Tipo de Triangulo ";
    cout<<"\n (0) ou Qualquer Outro Numero Para Sair: ";
 } 
 
int opc2(){//Fisica
    cout<<"\n Digite ";
    cout<<"\n (1) Para a Conversao de Medidas de Comprimento ";
    cout<<"\n (2) Para Calcular a Velocidade Media ";
    cout<<"\n (3) Para Saber o Volume de uma Esfera ";
    cout<<"\n (0) ou Qualquer Outro Numero Para Sair: ";
 } 
 
int opc3(){//Quimica
    cout<<"\n Digite ";
    cout<<"\n (1) Para Conversao de Temperatura ";
    cout<<"\n (0) ou Qualquer Outro Numero Para Sair: ";
 }

int opc4(){//Diversos
    cout<<"\n Digite ";
    cout<<"\n (1) Para Saber o Preco da Conta de Agua ";
    cout<<"\n (2) Para Saber o Preco da Conta de Energia ";
    cout<<"\n (3) Para Saber o Seu Peso Ideal ";
    cout<<"\n (0) ou Qualquer Outro Numero Para Sair: ";
 }
int main(int argc, char *argv[])
{
    int m1, opc1a, opc2a, opc3a, opc4a;
    float resultado,n1,n2;
    int n;
    int num,aux=2,div=0;
    float nu,m, mul=1;
    float a,b,c;
    int na;
    int na1, na2, op;
    int soma=0,sub=0,mult=1;
    float ni, raiz;
    float metros, pes, km, cm, conv, pol;
    int nc;
    int nv;
    float vm, s,t;
    float pi,r,v;
    float cov, nt, n0;
    int con,d;
    string mes;
    float mc;
    string nome,te;
    float p,mi,g,i,co,ri,kw;
    int o;
    string nome1,sexo;
    int formula;
    float al,max,f;
    
    menu();
    cin>>m1;
    
  switch (m1){
         case 1://matematica
           opc1();
           cin>>opc1a;
             switch(opc1a){
                    case 1://
                        system("cls");
                         cout<<"\n Potnciacao \n";
                         
                          do{
                          cout<<"Digite a base:";
                          cin>>n1;
                          cout<<"Digite o expoente:";
                          cin>>n2;
    
                          if(n1==0){
                          resultado=1;
                          }
                          else if(n1!=0){
                          resultado= pow(n1,n2);
                          cout<<"\n "<<n1<<" elevado a "<<n1<<" : "<<resultado<<"\n\n";
                          }
                          cout<<"\n Para para continuar(0) ou digite qualquer numero para sair:";
                          cin>>n;
                          cout<<endl;
  
                          system("cls");
                          }while(n==0);
                          m1=0;
                          cout<<" Fim do Programa!!\n";
                          system("PAUSE");
                          
                             
                    break;
                    case 2://
                        system("cls");
                         cout<<"\n Calculadora \n";
                         
                          
    
  
                           cout<<"Digite (1) para somar \n(2) para subtrair \n(3) para multiplicar \n(0) para sair:";
                           cin>>op;
    
    
                           while(op!=0){
                 
     
                           switch (op){
                               case 1:
                                 
                                 
               
                                cout<<"\n Digite um numero:";
                                cin>>na1;
                                cout<<"\n Digite um numero:";
                                cin>>na2;
                                soma=na1+na2;
               
                                cout<<"A soma dos numeros eh:"<<soma;
               
               
                               break;
                             case 2:
                                
               
                                cout<<"\n Digite um numero:";
                                cin>>na1;
                                cout<<"\n Digite um numero:";
                                cin>>na2;
                                sub=na1-na2;
               
                                cout<<"A subtrassao dos numeros:"<<sub;
               
               
                               break;
                            case 3:
                                
               
                                cout<<"\n Digite um numero:";
                                cin>>na1;
                                cout<<"\n Digite um numero:";
                                cin>>na2;
                              
                                mult=na1*na2; 
                              
                                cout<<"A multplicassao dos numeros:"<<mult;
               
              
                               break;
                           default :
                                                            
                              cout<<" O numero digitado eh invalido";
                              break;}
                              system("cls");
     
                           cout<<"\n\nDigite (1) para somar \n(2) para subtrair \n(3) para multiplicar \n(0) para sair:";
                           cin>>op;
                           system("cls");
                           }
                          
                           cout<<"Fim do Progama!!\n";
                            system("PAUSE");
                          system("cls");
                              break;
                     case 3://raiz
                          system("cls");
                          
    
                           while(ni != 0){
                           cout<<"\n Digite um numero para saber sua raiz quadrada ";
                           cin>>ni;
    
                           raiz= sqrt(ni); 
    
                           cout<<"\n A raiz quadeda de "<<ni<<" eh "<<raiz;
                           cout<<"\n\n Digite (0) para sair ou qualquer outro numero para continuar ";
                           cin>>ni;
                           system("cls");
                           }
                           cout<<"\n Fim do Programa !!\n";
                           system("PAUSE");
                          
                           break;
                    case 4://primo
                          system("cls");
                         
                         
                         cout<<"\n Digite \n Um numero para saber se eh primo ou nao \n ou digite (0) para sair \n"; 
                         cout<<"\nDigite um numero : ";
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
                          system("cls");
                         }
                         
                         cout<<"\n Fim do programa !!\n";
                         system("PAUSE");
                         
                      break;
                    case 5://tabuada
                      system("cls");
                                   
                          
                          while(nu!=0){
                          cout<<"\n Digite um numero:";
                          cin>>nu;
                           
                          cout<<"\n A tabuada do "<<nu<<" eh: \n\n"; 
                          cout<<"0 X "<<nu<<" eh: 0 \n";
                          for( m=1; m<=10; m++){
            
                          mul=nu*m;
             
                          cout<<m<<" X "<<nu<<" eh :"<<mul<<"\n";
                          }
                          cout<<"\n Digite (0) para sair ou qualquer numero para sair ";
                          cin>>nu; 
                          system("cls");
                          }
             
                          cout<<"\n Fim do Programa !!\n";
                          system("cls");
                          break;
                   case 6://triangulo
                      system("cls");
                          
    
                          while(na!=0){
                          cout<<"\n Este eh um progama que verifica que tipo de triangulo eh\n";
                          cout<<"\n   EQUILATERO -- ISOSCELES -- ESCALENO  \n\n";
    

                          cout<<"\n Digite o lado 1 :";
                          cin>>a;
                          cout<<"\n Digite o lado 2 :";
                          cin>>b;
                          cout<<"\n Digite o lado 3 :";
                          cin>>c;
    
    
                          if(a==0 || b==0 || c==0){
                           cout<<"\n Os lados nao formao um triangulo, pois ao menos um eh igual a ZERO";             
                           }
                        
                          else if(a+b<c || b+c<a || a+c<b){
                          cout<<"\n Os lados nao formao um triangulo, pois a soma dos lados nao eh maior que o outro";      
                           }
                          
                          else if(a==b && a==c && b==c){
                          cout<<"\n Os lados formao um triangulo EQUILATERO ";
                           }
                           
                          else if(a==b && a!=c || a==c && a!=b || b==c && b!=a){
                          cout<<"\n Os lados formao um triangulo ISOSCELES ";   
                            }
                            
                          else if(a!=b && a!=c && b!=c){
                          cout<<"\n Os lados formao um triangulo ESCALENO ";
                            }
                          else {
                          cout<<" ";
                            }
                          cout<<"\n\n Digite (0) para sair ou qualquer outro numero para continuar ";
                          cin>>na;
                          system("cls");
                          }
                          cout<<"\n Fim do Programa !!";
                          system("PAUSE");
                        
                         break;
                      default:
                           cout<<"\n Fim do Programa !!\n";
                           system("PAUSE");
                          system("cls");
                         break;
                         }
        case 2://fisica
           opc2();
           cin>>opc2a;
               switch(opc2a){
                           
                           case 1:
                                system("cls");
                              cout<<" Conversao de Medidas ";
                              
   
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
                           system("PAUSE");
                          system("cls"); 
                            }
    
                             system("PAUSE");
                          system("cls");
                           break;
                       case 2://velocidade media
                             system("cls");
    
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
                           system("PAUSE");
                          
                           break;
                       case 3: //  volume da esfera
                           int c;
                            system("cls");        
                          cout<<"\n Digite (0) para sair ou qualquer numero para continumar \n";
                          cin>>c;
                          
                          while(c!=0){
                          cout<<"Digite o raio de uma esfera:";
                          cin>>r;
    
                          pi=3.14;
    
                         v=(4/3 *pi)*(r);
    
                         cout<<"O volume da esfera eh de "<<v; 
                             
                          
                                                                                       
                          cout<<"\n Digite (0) para sair ou qualquer numero para continumar \n";
                          cin>>c;
                          system("cls");  
                          }
                          cout<<"\n Fim do Programa !!";
                          system("PAUSE");
                         
                          
                          break;
                      default:
                           cout<<"\n Fim do Programa !!\n";
                           system("PAUSE");
                          system("cls");   
                          break;
                        }}
                            
            
          case 3://quimica
               opc3();
               cin>>opc3a;
                      
                  switch(opc3a){
                                     
                      case 1://conversão de temperatura
                              system("cls");                         
    
                        do{
                                     
                         cout<<"\n Digite : \n (1) para converter a temperatura de Celsius para Fahrenheir ";//
                         cout<<"\n (2)  para converter de Celsius para Kelvin ";//
                         cout<<"\n (3) para converter de Fahrenheir para Celsius "; //
                         cout<<"\n (4) para converte de Fahrenheir Kelvin ";//
                         cout<<"\n (5) para converte de Kelvin para Fahrenheir ";//
                         cout<<"\n (6) para converter de Kelvin para Celsius ";//
                         cout<<"\n (0) para sair :";
                         cin>>n0;
    
                         if(n0==1){
                         cout<<"\n Celsius para Fahrenheir ";
                         cout<<"\n Digite a temperatura :";
                         cin>>nt;
    
                         cov=((nt/5)*9)+32;
    
                         cout<<"\n O valor em Fahrenheit eh "<<cov;
                          }
    
                         else if(n0==2){
                         cout<<"\n Celsius para Kelvin ";
                         cout<<"\n Digite a temperatura :";
                         cin>>nt;
    
                         cov=nt-273;      
    
                         cout<<"\n O valor de Kelvin eh "<<cov;
                         }
    
                         else if(n0==3){
                         cout<<"\n Fahrenheir para Celsius ";
                         cout<<"\n Digite a temperatura :";
                         cin>>nt;
    
                         cov=(nt-32)/1.8;
    
                         cout<<"\n O valor de Celsius eh "<<cov;
                          }
    
                         else if(n0==4){
                         cout<<"\n Fahrenheir Kelvin ";
                         cout<<"\n Digite a temperatura :";
                         cin>>nt;
    
                         cov=((nt-32)/9)+273*5;
    
                         cout<<"\n O valor de Kelvin eh "<<cov;
                          }
    
                         else if(n0==5){
                         cout<<"\n Kelvin para Fahrenheir ";
                         cout<<"\n Digite a temperatura :";
                         cin>>nt;
    
                         cov=((nt-273/5)+32)*9;
    
                         cout<<"\n O valor de Kelvin eh "<<cov;
                          }
    
                         else if(n0==6){
                         cout<<"\n Kelvin para Celsius ";
                         cout<<"\n Digite a temperatura :";
                         cin>>nt;
    
                         cov=nt+273;
    
                         cout<<"\n O valor de Celsius eh "<<cov;    
                          }
    
                         else {
                         
                         n0=0;
                         }
                         cout<<endl;
                        
                         }while(n0!=0); 
                         
                         cout<<"\n Fim do Programa !!\n";
                         system("PAUSE");
                          system("cls");       
                      break;
                     default:
                          cout<<"\n Fim do Programa !!\n";
                          system("PAUSE");
                          system("cls");               
                      break; 
                      }
      case 4://diversos
           opc4();
           cin>>opc4a;
               
               switch(opc4a){
                           
                   case 1:
                        system("cls");
                                
                    do{
                      cout<<"Digite o tipo de consumidor (1) para residencial e (2) para comercial:";
                      cin>>con;
                      cout<<"Digite o mes em que foi consumido a agua:";
                      cin>>mes;
                      cout<<"Digite o numero de metros cubicos de agua gastos:";
                      cin>>mc;
    
    
    
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
                      cout<<"\n Digite (0) para sair ou qualquer numero para continuar ";
                      cin>>d;
                      system("cls");
                      }while(d!=0);
                      
                      cout<<"\n Fim do Programa !!\n";
                      system("PAUSE");
                          
                  break;
                case 2:
                      system("cls");
                   do{
                      cout<<"\n Este eh um progama que calcula o gasto de energia apartir do consumido \n\n";
    
    
                      cout<<" Digite o nome do consumidor:";
                      cin>>nome;
                      cout<<" Digite o gasto em kw/h:";
                      cin>>kw;
                      cout<<" Digite o tipo de consumido (i)para industrial, "<<endl<<"(c)para comercial e (r)para residencial:";
                      cin>>te;
                      cout<<endl;
    
                      i=1.29;
                      co=0.48;
                      ri=0.60;
                      p=i*kw;
                      mi=c*kw;
                      g=r*kw; 
    
    
    
                     if(te=="i"){
                      cout<<" O gasto do consumidor industrial eh R$"<<p;        
                     }
                     else if(te=="c"){
                      cout<<" O gasto do consumidor comercial eh R$"<<mi;     
                     }
                     else if(te=="r"){
                      cout<<" O gasto do consumidor residencial eh R$"<<g;     
                     }
                     else{
                     
                     cout<<"\n consumidor invalido \n";
                     
                     }
                      cout<<"\n\n Digite (0) para sair ou qualquer numero para continuar ";
                      cin>>o;
                      system("cls");
                     }while(o!=0);
                     cout<<"\n Fim do Progama !!\n";
                     system("PAUSE");
                     
                break;
               case 3:
                    system("cls");
                    cout<<"\n ESTE EH UM PROGAMA QUE CALCULA O PESO IDEAL \n\n";
                    cout<<"\n\n Digite (0) para sair ou qualquer numero para continuar ";
                     cin>>o;
                    
                    while(o!=0){
         
                  cout<<"\n\n Digite seu nome:";
                  cin>>nome;
                  cout<<" Digite a sua altura:";
                  cin>>al;
                  cout<<" Digite seu sexo (M)para masculino e (F)para feminino:";
                  cin>>sexo;
                     
                  max=(72.7*al)-58;
                  f=(62.1*al)-44.7;
        
    
                 if(sexo=="f"){
                 cout<<"\n O peso ideal da "<<nome<<" eh " <<f;    
                  }
                else if(sexo=="m"){
                cout<<"\n O peso ideal do "<<nome<<" eh "<<max;        
                  }
                else{
                cout<<"\n Erro ao digitar o sexo";
                }
                
                cout<<"\n\n Digite (0) para sair ou qualquer numero para continuar ";
                cin>>o;
                }
                
    
               cout<<"\n Fim do Progama !!";
               system("PAUSE");
                          
              break;
            default:
                  cout<<"\n Fim do Progama !!\n"; 
                  system("PAUSE");
                          system("cls");
              break;
              }                 
    default:
            system("cls");
       cout<<"\n Fim do Progama !!";
                                                       
       break;
}
   
    
    system("PAUSE>null");
    return EXIT_SUCCESS;
}
