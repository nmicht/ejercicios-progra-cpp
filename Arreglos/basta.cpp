#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main(){
    char letra, opt;
    string basta[100][6];
    string titulos[6] = {"Nombre: ",
                         "Apellido: ",
                         "Ciudad/Pais: ",
                         "Flor/Fruto: ",
                         "Animal: ",
                         "Cosa: "};


   for(int f=0; f<100; f++){
        srand(time(NULL));
        letra = rand() % 26 + 65;

        cout << "Juego con la letra " << letra << endl << endl;

        for (int c=0; c<6; c++){
            cout << titulos[c];
            cin >> basta[f][c];
        }

        cout << "Quieres otro juego? s=si  ";
        cin >> opt;

        if(opt != 's' || opt != 'S')
            break;
    }

    return 0;
}
