#include <iostream>
#include <string>

using namespace std;

//construcao do mapa
void showMap(int places[10][10];){
    cout << "Battleship Game\n";

    cout << "    | A | B | C | D | E | F | G | H | I | J |\n";
    cout << " 1  | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 <<" |\n";
    cout << " 2  | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 <<" |\n";
    cout << " 3  | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 <<" |\n";
    cout << " 4  | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 <<" |\n";
    cout << " 5  | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 <<" |\n";
    cout << " 6  | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 <<" |\n";
    cout << " 7  | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 <<" |\n";
    cout << " 8  | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 <<" |\n";
    cout << " 9  | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 <<" |\n";
    cout << " 10 | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 << " | " << 0 <<" |\n\n";


};





int main (){
    /* regras:
         - um mapa para posicionar os navios
        (definir area do mapa, limitar os navios que podem ocupar, nao deixar colocar onde ja tem, *exibir lista de navios com diferentes tamanhos*)
         - mesmo mapa marca tiros do oponente
        (mandar alerta "navio tal atingido", mandar alerta "navio tal abatido")

         mapa:
            - imprimir como tabela
            - identificar cada parte
            - apenas 5 navios (independente do tipo)
            - escolher posicao
            - comparar texto com a posicao no mapa
            - verificar posiciao se adequada ("sem espaco", "fora do mapa")
            -


         *opcional/n necessario para o projeto*
         - outro mapa marca meus tiros para o oponente
        (mapa limpo apenas para mandar comandos e acertar no oponente)
    */

    int places[10][10];

showMap();

//lista de navios
    string ships[5] =
        {"1. Carrier (5)\n",
        "2. Battleship (4)\n",
        "3. Destroyer (3)\n",
        "4. Submarine (3)\n",
        "5. Patrol Boat (2)\n"};

    for (int contList = 0; contList < sizeof ships/sizeof ships[0]; contList++) {
        cout << ships[contList];
    };

//posicionamento do mapa

    int cont = 0;
    while (cont < 5){
        int choiceShip;
        int choiceLine;
        char choiceCol;

        cout << "Choose your ship: \n";
        cin >> choiceShip;


        if (choiceShip > 5){
            cout << "Thats not an option \n";
            cout << "Choose another ship: \n";
            cin >> choiceShip;
        }


        cout << "Choose it place\n";
        cout << "Line: \n";
        cin >> choiceLine;
        cout << "Column: \n";
        cin >> choiceCol;
        cont++;



    };


}


