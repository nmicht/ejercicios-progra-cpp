#include <iostream>
#include <string>

using namespace std;

int main(){
    string datos[5][3];
    string titulos[3] = {"Nombre: ",
                         "Apellido Materno: ",
                         "Apellido Paterno: "};

    for(int f=0; f<5; f++){
        cout << endl << "Datos del alumno " << f+1 << endl;
        for (int c=0; c<3; c++){
            cout << titulos[c];
            cin >> datos[f][c];
        }
    }

    return 0;
}
