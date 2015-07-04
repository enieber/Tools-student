#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int n1,n2;
    
    cout<<"Digite o numero de linhas: ";
    cin>>n1;
    cout<<"Digite o numero de colunas:";
    cin>>n2;
    
    for(int i=1; i<=n1; i++){
       cout<<endl;
       for(int j=1; j<=n2; j++){
       
       cout<< i << j <<" ";        
       }
    }
    
    cout<<"\n\n Transposta \n";
    
    for(int j=1; j<=n2; j++){
         cout<<endl;
       for(int i=1; i<=n1; i++){
       
       cout<< i << j <<" ";
       }
            
    }
    
    system("PAUSE>null");
    return EXIT_SUCCESS;
}
