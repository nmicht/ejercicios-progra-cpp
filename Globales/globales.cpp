#include <iostream>

using namespace std;

string equipos[1000];
int puntaje[1000][3];
string puntajeTitulos[3] ={"Ganados","Perdidos","Empatados"};
int no_equipos = 0;

void capturaPartidos(int pos){
	for(int i=0; i<3; i++){
		cout << puntajeTitulos[i];
		cin >> puntaje[pos][i];
	}
}

void capturaEquipo(string nombre){
	equipos[no_equipos-1] = nombre;
}

int busca(string nombre){
	for(int pos=0; pos<no_equipos; pos++)
		if( equipos[pos].compare(nombre) ) 
			return pos;
	return -1;
}

int main(){
	string equipo;
	int pos;

	//Captura equipo
	cout << "Que equipo quieres capturar?: ";
	cin >> equipo;
	if ( pos = busca(equipo) != -1 ){
		cout << "El equipo ya existe" << endl;
		capturaPartidos(pos);
	}
	else{
		no_equipos++;
		capturaEquipo(equipo);
	}
}
