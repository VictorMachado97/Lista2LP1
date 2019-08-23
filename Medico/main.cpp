#include <iostream>
#include "FiguraGeometrica.h"
#include "Triangulo.h"
#include "Quadrado.h"
#include "Circulo.h"

using namespace std;

int main()
{
    FiguraGeometrica *t1 = new Triangulo(9,7);
    FiguraGeometrica *q1 = new Quadrado(8);
    FiguraGeometrica *c1 = new Circulo(10);

    cout<<"Figura:  "<<t1->getNome()<<endl
    <<"Area: "<<t1->calcularArea()<<"cm"<<endl;

    cout<<"Figura: "<<q1->getNome()<<endl
    <<"Area: "<<q1->calcularArea()<<"cm"<<endl;

    cout<<"Figura: "<<c1->getNome()<<endl
    <<"Area: "<<c1->calcularArea()<<"cm"<<endl;


    return 0;
}
