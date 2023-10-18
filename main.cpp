#include <iostream>
#include "sculptor.h"

int main() {

    Sculptor blackhole(100, 100, 100); // Cria um objeto da classe sculptor.h com dimensões 100x100x100 unidades

    //quinta camada (exterior)
    blackhole.setColor(130, 0, 15, 1.0); //Define a cor dos proximos objetos que serão criados.
    blackhole.putEllipsoid(50, 50, 50, 40, 2, 30); //Coloca uma elipsoide na horizontal.
    blackhole.putEllipsoid(50, 50, 50, 30, 26, 2); //Cria uma elipsoide perpendicular a anterior.

    //Os demais são análagos ao que foi dito acima
  
    //Quarta camada
    blackhole.setColor(220, 70, 20, 1.0);
    blackhole.putEllipsoid(50, 50, 50, 35, 2, 27);
    blackhole.putEllipsoid(50, 50, 50, 30, 24, 2);

    //Terceira camada
    blackhole.setColor(210, 100, 0, 1.0); 
    blackhole.putEllipsoid(50, 50, 50, 30, 2, 24);
    blackhole.putEllipsoid(50, 50, 50, 29, 22, 2);
  
    //Segunda camada
    blackhole.setColor(205, 130, 60, 1.0);
    blackhole.putEllipsoid(50, 50, 50, 25, 2, 21);
    blackhole.putEllipsoid(50, 50, 50, 25, 20, 2);

    //Primeira camada (interior)
    blackhole.setColor(245, 235, 180, 1.0);
    blackhole.putEllipsoid(50, 50, 50, 20, 2, 18);
    blackhole.putEllipsoid(50, 50, 50, 20, 18, 2);
  
    //Núcleo
    blackhole.setColor(0, 0, 0, 1.0); 
    blackhole.putSphere(50, 50, 50, 15);//Cria uma esfera no centro na matriz.
    blackhole.cutSphere(50, 50, 50, 14);//Corta os voxels na mesma posição da esfera anterior, porém com raio menor, deixando-a oca e economizando voxels.
  
    blackhole.writeOFF("blackhole.off"); //Salva o arquivo em formato OFF chamado "blackhole.off".

}