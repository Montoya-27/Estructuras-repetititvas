/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main(){
    int i, numero, factorial = 1;
    
    cout << "ingrese un numero";
    cin >> numero;
    
    for (int i = 1; i <= numero; i++)
    {
        factorial = factorial * i; 
    }
    cout << "el factorial de es:" <<factorial;
    return 0;
}
