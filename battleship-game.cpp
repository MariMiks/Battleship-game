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
        "4. Submarine (2)\n",
        "5. Patrol Boat (1)\n"};

    for (int contList = 0; contList < sizeof ships/sizeof ships[0]; contList++) {
        cout << ships[contList];
    };

}


//bloquear ao redor do navio
void block(int row, int col){
    if (places[row-1][col-1] != 0){

    }
}


//escolha de navios
void showShip(int ship, int row, int col){
    switch(ship){
        case 5:
            if (col != 10){
                        places[row-1][col-1]=5;
                        break;
                    }

        case 4:
            if (col < 9){
                        places[row-1][col-1]=4;
                        places[row-1][col]=4;
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

        if (places[choiceRow-1][choiceCol-1] != 0){
            cout << "\nNot empty. Choose again.\n\n";

            if (places[choiceRow-1][choiceCol-1] == places[choiceRow][choiceCol-1]){
            cout << "too close";
            }

            cout << "Row: \n";
            cin >> choiceRow;
            cout << "Column: \n";
            cin >> choiceCol;
        };

        /*
        if (){
            cout << "\nToo close. Chose again.\n\n";
            cout << "Row: \n";
            cin >> choiceRow;
            cout << "Column: \n";
            cin >> choiceCol;
        }
        */

        showShip(choiceShip, choiceRow, choiceCol);

        showMap(places);
        cont++;


    } while (cont < 9);



}



    /* do:

        - determinar qntd de cada navio
            1. Carrier (5 casas) (1 qntd)
            2. Battleship (4 c) (2 q)
            3. Destroyer (3 c) (3 q)
            4. Submarine (2 c) (3 q)
            5. Patrol Boat (1 c) (2 q)


        - exibir mensagem de finalizacao de posicionamento


        - separar para dois jogadores
        {
        momento com dois humanos:
            - jogador 1 posiciona seus navios
            - jogador 2 posiciona seus navios
            - mapa para jogador 1 atingir navios do jogador 2 (mapa mostrando vazio porem armazenado as informacoes de cada um)
            - mapa para jogador 2 atingir navios do jogador 1 (mapa mostrando vazio porem armazenado as informacoes de cada um)
            - mandar alerta "navio tal atingido", mandar alerta "navio tal abatido"
        }


        - exibir vitoria (quando o oponente derruba todos os navios de um jogador)

         *opcional/n necessario para o projeto*
         - outro mapa marca meus tiros para o oponente
        (mapa limpo apenas para mandar comandos e acertar no oponente)
    */



    /* doing:
        - n deixar posicionar um navio do lado do outro

    */



    /*done:
     - um mapa para posicionar os navios
        (definir area do mapa, limitar os navios que podem ocupar, nao deixar colocar onde ja tem, *exibir lista de navios com diferentes tamanhos*)
        mapa:
            - identificar cada quadrado +
            - apenas 9 navios (independente do tipo) +
            - escolher posicao +
            - comparar input com a posicao no mapa +
            - verificar posiciao se adequada ("sem espaco", "fora do mapa") ++

    */

