#include <iostream>
#include <string>

using namespace std;

//Se declara la estructura
struct a{
	string equipo;
	string director;
	int p_jugados, p_ganados, p_perdidos;
	int goles_favor, goles_contra;
	bool tiene_porra;
};

//Creo un tipo de dato registro_equio con la forma de la estructura a
typedef a registro_equipo;


int main(){
	//Creo dos arreglos del tipo registro_equipo
	registro_equipo grupoA[6], grupoB[4];

	for(int i=0; i<6; i++){
		cout << "Datos para el equipo " << i+1 << endl;

		cout << "Dame el nombre del equipo: ";
		cin >> grupoA[i].equipo;
		cout << "Cuantos partidos gano: ";
		cin >> grupoA[i].p_ganados;
	}
}
