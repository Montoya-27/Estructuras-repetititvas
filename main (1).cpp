/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int main()
{
   int n; 
   cout <<"ingrese un numero positivo entero";
   cin >> n;
    int i = 0;
    for (i=2; i <= n; i+=2)
    {
        cout << i <<"\n"; 
    }
    return 0;
}