#include <iostream>
#include <list>
#include <vector>
#include <string>
#include "./punto3.cpp"


using namespace std;

int main() {
    vector<Categoria> categorias;
    int eleccion;
    string nombre, nombreCategoria;

    while (true) {
        cout<<"¿Qué desea hacer?:\n(1) Para añadir un juego.\n(2) Para mostrar los juegos de las categorias.\n(3) Para salir."<<endl;
            cin>>eleccion;

        switch(eleccion) {
            case 1: {
                cout<<"Ingrese el nombre del videojuego: ";
                    cin>>nombre;
                cout<<"Ingrese el nombre de la categoria: ";
                    cin>>nombreCategoria;

                VideoGame videojuego(nombre);
                bool categoriaExiste = false;

                for (Categoria& categoria : categorias) {
                    if (categoria.getNombre() == nombreCategoria) {
                    categoria.anadirJuego(videojuego);
                    categoriaExiste = true;
                    break;
                    }
                }

                if (!categoriaExiste) {
                    Categoria nuevaCategoria(nombreCategoria);
                    nuevaCategoria.anadirJuego(videojuego);
                    categorias.push_back(nuevaCategoria);
                }

                break;
            }
            case 2: {
                for (Categoria categoria : categorias) {
                    cout<<"Categoria: "<<categoria.getNombre()<<endl;
                    for (VideoGame videojuego : categoria.getVideojuegos()) {
                        cout<<"Videojuego: "<<videojuego.getNombre()<<endl;
                    }
                }
                break;
            }
            case 3: {
                return 0;
            }
            default:{
                cout<<"Opción inválida."<<endl;
                break;
            }
        }
    }
}