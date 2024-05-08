/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main()
{
    char opcion; 
    char variable='x';
    
    do 
    {
    cout <<"Menu"<<"\n";
    cout <<"A Hamburguesa"<<"\n";
    cout <<"B Polo campero"<<"\n";
    cout <<"C Camarones"<<"\n";
    cout <<"Seleccione una opcion:"<<"\n";
    cin >> opcion;
    cout <<"opcion seleccionada"<< opcion <<"\n";
    
    }
    while (opcion !=variable);
    
    return 0;
}

