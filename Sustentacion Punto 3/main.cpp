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
    int eleccion;


    cout<<"¿Qué desea hacer?:\n(1) Para añadir un juego.\n(2) Para ingresar una categoria.\n(3) Para mostrar los juegos de las categorias."<<endl;
        cin>>eleccion;
    
    switch(eleccion){
        case 1:{
            cout<<"Ingrese el nombre del videojuego: ";
                cin>>nombre;
            game.setNombre(nombre);
            cout<<"Ingrese el nombre de la categoria: ";
                cin>>nombreCategoria;
            category.setNombre(nombreCategoria);
        }
        case 2:{
            cout<<"Ingrese el nombre de la categoria: ";
                cin>>nombreCategoria;
            category.setNombre(nombreCategoria);
        }
        case 3:{

        }
    }

    category.anadirJuego(game);

    cout<<"Los juegos de la categoria "<<category.getNombre()<<" son: "<<endl;
    category.mostrarJuegos();

    return 0;
}