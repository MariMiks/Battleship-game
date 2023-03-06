#include <iostream>
#include <string>

using namespace std;




//construcao do mapa

int showPlace(int place){

    if (place <= 10){
        return 1;
    } else {
        return 0;
    };

}


void showMap(int places[][10]){

    cout << "Battleship Game\n\n";

    cout << "  | A | B | C | D | E | F | G | H | I | J |\n" << "1 | ";

    for (int row = 0; row < 10; row++){
        for (int column = 0; column < 10; column++)
            cout<< places[row][column] << " | ";
        if (row < 9)
            cout << endl << row+2 << " | ";
        }
}




int main (){

int places[10][10];

for (int row = 0; row < 10; row++)
    for (int column = 0; column < 10; column++)
        places[row][column]= 0;

showMap(places);


//lista de navios
    string ships[5] =
        {"1. Carrier (5)\n",
        "2. Battleship (4)\n",
        "3. Destroyer (3)\n",
        "4. Submarine (3)\n",
        "5. Patrol Boat (1)\n"};

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

        places[choiceLine+1][choiceCol+1]=1;
        showMap(places);
        cont++;


    };



}




    /* regras:
         - um mapa para posicionar os navios
        (definir area do mapa, limitar os navios que podem ocupar, nao deixar colocar onde ja tem, *exibir lista de navios com diferentes tamanhos*)
         - mesmo mapa marca tiros do oponente
        (mandar alerta "navio tal atingido", mandar alerta "navio tal abatido")
         mapa:
            - identificar cada quadrado +
            - apenas 5 navios (independente do tipo) +
            - escolher posicao
            - comparar input com a posicao no mapa
            - verificar posiciao se adequada ("sem espaco", "fora do mapa")

         *opcional/n necessario para o projeto*
         - outro mapa marca meus tiros para o oponente
        (mapa limpo apenas para mandar comandos e acertar no oponente)
    */
