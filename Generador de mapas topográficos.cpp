#include<iostream>
#include<array>
#include <cstdlib>
#include <ctime>

using namespace std;

const int FILAS= 1000;
const int COLUMANS= 1000;

typedef array<int, COLUMANS> VFilTop;
typedef array<VFilTop, FILAS> MTop;

struct Mapa{
    MTop m;
    int f;
    int c;
    int mn;
    int mx;
    unsigned var;
};

struct Coordenada{
    int x;
    int y;
};

//Generador de mapa topográfico.

int main(){
    srand((unsigned) time(0));

    unsigned filas, columnas, minima, maximo, aux, varMaxCeldadasContiguas;
    bool mar;
    Mapa m;

    cout<<"GENERADOR DE MAPAS TOPOGRAFICOS.\n\n";
    cout<<"Especifique a continuacion las dimensiones, filas y columnas en ese orden:";
    cin>>filas;
    cin>>columnas;

    mapa.f=filas;
    mapa.c=columnas;

    cout<<"\n\nEspecifique altura minima y maxima, el 0 sera el nivel del mar:";
    cin>>minimo;
    cin>>maximo;

    if(minimo>maximo){
        aux=maximo;
        maximo=minimo;
        minimo=aux;
    }

    mapa.mn=minimo;
    mapa.mx=maximo;

    cout<<"\n\nEspecifique la variacion maxima de altura entre celdas contiguas:";
    cin>>varMaxCeldadasContiguas;

    mapa.var=varMaxCeldadasContiguas;

    cout<<"Enseguida generamos tu mapa...";

    generarMapaTopografico(mapa)
}

Mapa generarMapaTopografico(Mapa& m){
    Coordenada origen;

    origen.x=rand()%columnas;
    origen.y=rand()%filas;

    //Actualizamos los maximos y minimos. nuevo minimo


    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){

        }
    }
}
