#include <iostream>
#include <list>
#include <vector>
#include <string>
#include "./punto3.cpp"


using namespace std;

int main(){

    VideoGame game;
    string nombre;
    Categoria category;
    string nombreCategoria;


    cout<<"Ingrese el nombre del videojuego: ";
    cin>>nombre;
    game.setNombre(nombre);

    cout<<"Ingrese el nombre de la categoria: ";
    cin>>nombreCategoria;
    category.setNombre(nombreCategoria);

    category.anadirJuego(game);

    cout<<"Los juegos de la categoria "<<category.getNombre()<<" son: "<<endl;
    category.mostrarJuegos();

    return 0;
}