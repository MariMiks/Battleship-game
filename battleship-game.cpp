#include <iostream>
#include <string>

using namespace std;


//construcao do mapa
int places[10][10];

void showMap(int places[][10]){

    cout << "Battleship Game\n\n";

    cout << "   | A | B | C | D | E | F | G | H | I | J |\n" << "1  | ";

    for (int row = 0; row < 10; row++){
        for (int column = 0; column < 10; column++)
                cout << places[row][column] << " | ";
            if (row < 8)
                cout << endl << row+2 << "  | ";
            if (row ==  8)
                cout << endl << row+2 << " | ";



    }
}

//lista de navios
void showList(){
    string ships[5] =
        {"\n\n1. Carrier (5)\n",
        "2. Battleship (4)\n",
        "3. Destroyer (3)\n",
        "4. Submarine (3)\n",
        "5. Patrol Boat (2)\n"};

    for (int contList = 0; contList < sizeof ships/sizeof ships[0]; contList++) {
        cout << ships[contList];
    };

}

void showShip(int ship, int row, int col){
    switch(ship){
        case 5:
            if (col != 10){
                        places[row-1][col-1]=5;
                        places[row-1][col]=5;
                        break;
                    }

        case 4:
            if (col < 9){
                        places[row-1][col-1]=4;
                        places[row-1][col]=4;
                        places[row-1][col+1]=4;
                        break;
                    }


        case 3:
            if (col < 9){
                        places[row-1][col-1]=3;
                        places[row-1][col]=3;
                        places[row-1][col+1]=3;
                        break;
                    }

        case 2:
            if (col < 8){
                        places[row-1][col-1]=2;
                        places[row-1][col]=2;
                        places[row-1][col+1]=2;
                        places[row-1][col+2]=2;
                        break;

                    }

        case 1:
            if (col < 7){
                        places[row-1][col-1]=1;
                        places[row-1][col]=1;
                        places[row-1][col+1]=1;
                        places[row-1][col+2]=1;
                        places[row-1][col+3]=1;
                        break;
                    }


                default:
                    cout << "\nShip out of the map\n\n";
                    break;
            }
}



//jogo rodando
int main (){

for (int row = 0; row < 10; row++)
    for (int column = 0; column < 10; column++)
        places[row][column]= 0;

showMap(places);


//posicionamento do mapa

    int choiceShip;
    int choiceRow;
    int choiceCol;
    int cont = 0;
    do {


        showList();
        cout << "Choose your ship: \n";
        cin >> choiceShip;

        if (choiceShip > 5){
            cout << "Thats not an option \n";
            cout << "Choose another ship: \n";
            cin >> choiceShip;
        }

        cout << "Choose it place\n";
        cout << "Row: \n";
        cin >> choiceRow;
        cout << "Column: \n";
        cin >> choiceCol;

        if (places[choiceRow-1][choiceCol-1] != 0 || choiceCol < 0 || choiceCol > 10 || choiceRow < 0 || choiceRow > 10){
            cout << "\nNot empty or out of the map. Choose again.\n\n";
            cout << "Row: \n";
            cin >> choiceRow;
            cout << "Column: \n";
            cin >> choiceCol;
        };

        showShip(choiceShip, choiceRow, choiceCol);

        showMap(places);
        cont++;


    } while (cont < 6);



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
