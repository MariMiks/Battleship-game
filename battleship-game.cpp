#include <iostream>
#include <string>

using namespace std;


//construcao do mapa


void showMap(int places[][10]){

    cout << "Battleship Game\n\n";

    cout << "  | A | B | C | D | E | F | G | H | I | J |\n" << "1 | ";

    for (int row = 0; row < 10; row++){
        for (int column = 0; column < 10; column++)
                cout << places[row][column] << " | ";
            if (row < 9)
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

int main (){

int places[10][10];

for (int row = 0; row < 10; row++)
    for (int column = 0; column < 10; column++)
        places[row][column]= 0;

showMap(places);


//posicionamento do mapa

    int cont = 0;
    while (cont < 10){
        int choiceShip;
        int choiceRow;
        int choiceCol;

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

        if (choiceCol < 0 || choiceCol > 10 || choiceRow < 0 || choiceRow > 10){
            cout << "Row or column out of the map. Choose again.\n\n";
            cout << "Row: \n";
            cin >> choiceRow;
            cout << "Column: \n";
            cin >> choiceCol;
        };
        
        

        switch(choiceShip){
            case 5:
                if (choiceCol != 10){
                    places[choiceRow-1][choiceCol-1]=5;
                    places[choiceRow-1][choiceCol]=5;
                    break;
                }

            case 4:
                if (choiceCol < 9){
                    places[choiceRow-1][choiceCol-1]=4;
                    places[choiceRow-1][choiceCol]=4;
                    places[choiceRow-1][choiceCol+1]=4;
                    break;
                } 
                

            case 3:
                if (choiceCol < 9){
                    places[choiceRow-1][choiceCol-1]=3;
                    places[choiceRow-1][choiceCol]=3;
                    places[choiceRow-1][choiceCol+1]=3;
                    break;
                } 

            case 2:
                if (choiceCol < 8){
                    places[choiceRow-1][choiceCol-1]=2;
                    places[choiceRow-1][choiceCol]=2;
                    places[choiceRow-1][choiceCol+1]=2;
                    places[choiceRow-1][choiceCol+2]=2;
                    break;

                }
                
            case 1:
                if (choiceCol < 7){
                    places[choiceRow-1][choiceCol-1]=1;
                    places[choiceRow-1][choiceCol]=1;
                    places[choiceRow-1][choiceCol+1]=1;
                    places[choiceRow-1][choiceCol+2]=1;
                    places[choiceRow-1][choiceCol+3]=1;
                    break;
                } 
                
            
            default:
                cout << "\nShip out of the map\n\n";
                break;
        }

        

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
