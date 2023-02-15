#include <iostream>
#include <string>
using namespace std;

int main (){
    // regras:
        // - um mapa para posicionar os navios
        //(definir area do mapa, limitar os navios que podem ocupar, nao deixar colocar onde ja tem, *exibir lista de navios com diferentes tamanhos*)
        // - mesmo mapa marca tiros do oponente
        //(mandar alerta "navio tal atingido", mandar alerta "navio tal abatido")
        // - outro mapa marca meus tiros para o oponente
        //(mapa limpo apenas para mandar comandos e acertar no oponente)
    string choice;

    string map[] = {};

    string ships[5] =
        {"1. Carrier (5)\n",
        "2. Battleship (4)\n",
        "3. Destroyer (3)\n",
        "4. Submarine (3)\n",
        "5. Patrol Boat (2)\n"};

    for (string typeShips : ships){
        cout << typeShips;
    }

    cout << "Choose yours ships: \n";
    cin >> choice;


}
