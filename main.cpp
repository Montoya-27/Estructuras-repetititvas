/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int main() {
    
    int opcioUsuario;
    int opcionComputadora;
    
    std::cout <<"Bienvenido al juego Piedra, Papel o Tijera!"<< std::endl;
    std::cout <<"Seleccione su jugada:"<< std::endl;
    std::cout <<"1. Piedra"<< std::endl;
    std::cout <<"2. Papel"<< std::endl;
    std::cout <<"3. Tijera"<< std::endl;
    std::cout <<"Su eleccion:";
    std::cin >> opcionUsuario;
    
    //Se utiliza el tiempo del sistema para obtener un valor "aleatorio"
    opcionComputadora = (static_cast<int>(time(0))% 3)+1;
    
    std::cout <<"La computadora elige:"<< opcionComputadora << std::endl;
    
    switch(opcionUsuario){
        case 1:
        switch(opcionComputadora){
        case 1:
        std::cout<<"¡Empate!" <<std::endl;
        break;
        case 2:
        std::cout<<"¡La computadora gana!" <<std::endl;
        break;
        case 3:
        std::cout<<"¡Ganaste!" <<std::endl;
        break;
        }
        break;
        case 2:
        switch(opcionComputadora){
        case 1:
        std::cout<<"¡Gnaste!" <<std::endl;
        break;
        case 2:
        std::cout<<"¡Empate!" <<std::endl;
        break;
        case 3:
        std::cout<<"¡La computadora gana!" <<std::endl;
        break;
        }
        break;
        case 3:
        switch(opcionComputadora){
        case 1:
        std::cout<<"¡La computadora gana!" <<std::endl;
        break;
        case 2:
        std::cout<<"¡Ganaste!" <<std::endl;
        break;
        case 3:
        std::cout<<"¡Empate!" <<std::endl;
        break;
        }
        break;
        default:
        std::cout<<"Opcion invalida. Por favor seleccione 1, 2 o 3." <<std::endl;
        break;
    }
     return 0;
}
