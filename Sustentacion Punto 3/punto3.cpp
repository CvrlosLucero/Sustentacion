#include <iostream>
#include <vector>

using namespace std;

class VideoGame {
    private:
        string nombre;
        string fechaLanzamiento;

    public:
    VideoGame(string nombre, string fechaLanzamiento) : nombre(nombre), fechaLanzamiento(fechaLanzamiento) {}

        string getNombre() const{
            return nombre;
        }

        void setNombre(string nombre) {
            this->nombre = nombre;
        }

        string getFechaLanzamiento() const{
            return fechaLanzamiento;
        }

        void setFechaLanzamiento(int fechaLanzamiento) {
            this->fechaLanzamiento = fechaLanzamiento;
        }
};

class Categoria{
    private:
        string nombre;
    public:
        Categoria(string nombre):nombre(nombre) {}

        vector <VideoGame> videojuegos;
        vector <string> categorias;

        string getNombre() const{
            return nombre;
        }

        void setNombre(string nombre) {
            this->nombre = nombre;
        }

        void anadirJuego(VideoGame videogame) {
            videojuegos.push_back(videogame);
        }

        void anadirCategoria(string categoria) {
            categorias.push_back(categoria);
        }

        const vector<VideoGame> getVideojuegos() const { 
            return videojuegos;
        }
};

