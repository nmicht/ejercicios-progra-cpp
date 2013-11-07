#include <iostream>
#include <string>

#define MAX_CANCIONES 20
#define MAX_ALBUMS 50
#define MAX_ARTISTAS 1000

using namespace std;

struct c{
	string nombre;
	float duracion;
	string genero;
};
typedef c cancion;

struct a{
	string nombre;
	int tracks;
	int anio;
	cancion canciones[MAX_CANCIONES];
};
typedef a album;

struct aa{
	string nombre;
	album albums[MAX_ALBUMS];
};
typedef aa artista;

//Prototipos
void capturaCancion();
void capturaAlbum();
void capturaArtista(int pos);

//Globales
artista artistas[MAX_ARTISTAS];
cancion micancion;
album mialbum;

int main(){
	int opcion, cantidad_artistas=0;

	do{
		cout << "1. Cancion" << endl;
		cout << "2. Album" << endl;
		cout << "3. Artista" << endl;
		cout << "4. Salir" << endl;
		cin >> opcion;
	}while(opcion != 4);

	switch(opcion){
		case 1:
			capturaCancion();
			break;
		case 2:
			capturaAlbum();
			//Verifico que exista una cancion captura
			if(micancion.duracion > 0){
				cout << "quieres agregar la cancion? ";
				mialbum.canciones[0] = micancion;
			}
			break;
		case 3:
			capturaArtista(cantidad_artistas);
			break;
	}
}

//Mis funciones
void capturaCancion(){
	cout << "Nombre de la cancion: ";
	cin >> micancion.nombre;

	cout << "Duracion: ";
	cin >> micancion.duracion;

	cout << "Genero: ";
	cin >> micancion.genero;
}

void capturaAlbum(){
	cout << "Nombre el album: ";
	cin >> mialbum.nombre;

	cout << "Cantidad de canciones: ";
	cin >> mialbum.tracks;

	cout << "Anio: ";
	cin >> mialbum.anio;
}

void capturaArtista(int pos){
	cout << "Nombre del artista: ";
	cin >> artistas[pos].nombre;
}