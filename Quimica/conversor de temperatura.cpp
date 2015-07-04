#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    float conv, n1;
    
    cout<<"\n Digite a temperatura :";
    cin>>n1;
    
    conv=((n1/5)*9)+32;
    
    cout<<"\n O valor em Fahrenheit eh "<<conv;
    system("PAUSE>null");
    return EXIT_SUCCESS;
}
