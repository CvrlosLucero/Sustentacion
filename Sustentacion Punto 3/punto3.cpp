#include <iostream>
#include <vector>

using namespace std;

class VideoGame {
    private:
        string nombre;

    public:
    VideoGame(string nombre):nombre(nombre) {}

        string getNombre() {
            return nombre;
        }

        void setNombre(string nombre) {
            this->nombre = nombre;
        }
};

class Categoria{
    private:
        string nombre;
        vector <VideoGame> videojuegos;

    public:
        Categoria(string nombre):nombre(nombre) {}

        string getNombre() {
            return nombre;
        }

        void setNombre(string nombre) {
            this->nombre = nombre;
        }

        void anadirJuego(VideoGame videogame) {
            videojuegos.push_back(videogame);
        }

        void mostrarJuegos() {
            for (int i = 0; i < videojuegos.size(); i++) {
                cout<<videojuegos[i].getNombre()<<endl;
            }
        }
};

