//Kevin Gonzalez #101828
#include <iostream>

using namespace std;

int main()
{
    int ast,cant_de_ast; //llame ast(asterisco) para el loop for, que escriba los #, y llame cant_de_ast para la cantidad de veces que corera el loop de 5 a 1

    for (cant_de_ast = 5; cant_de_ast>0; cant_de_ast = cant_de_ast - 1) //este es el loop para la cantidad de veces que se escribira el #
        {
    for (ast = cant_de_ast; ast>0; ast = ast - 1) //este loop es para escribir el # las veces que cant_de_ast lo haga
    {
    cout << "#";}
    cout<<"\n";}
    return 0;
}
