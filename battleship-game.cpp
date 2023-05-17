#include <iostream>
#include <string>

using namespace std;


//construcao do mapa
int places[10][10];

void showMap(int places[][10]){

    cout << "               Battleship Game\n\n";
    cout << "               Battleship Game\n\n";

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

void cleanMap(int places[][10]){
    for (int row = 0; row < 10; row++)
    for (int column = 0; column < 10; column++)
        places[row][column]= 0;
}


//ships
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

void showPatrol(int ship, int row, int col){
    int cont = 0;
    
    while(ship == 5 && cont < 6){
        if(col != 10){
            if (places[row-1][col-2] == 0 && places[row-1][col] == 0){
                if (places[row-2][col-2] == 0 && places[row-2][col-1] == 0 && places[row-2][col] == 0) {
                    if (places[row][col] == 0 && places[row][col-1] == 0 && places[row][col-2] == 0){
                        
                        places[row-1][col-1] = 1;
                        
                    }
                    else {
                    cout << endl << "Too close" << endl;
                    cout << "Row: ";
                    cin >> row;
                    cout << "Column: ";
                    cin >> col;
            }
                    
                    
                }
                else {
                cout << endl << "Too close" << endl;
                cout << "Row: ";
                cin >> row;
                cout << "Column: ";
                cin >> col;
            }
                
            }
            else {
                cout << endl << "Too close" << endl;
                cout << "Row: ";
                cin >> row;
                cout << "Column: ";
                cin >> col;
            }
            
        }
        
        cont++;
        break;
    }
}

/*
void showShip(int ship, int row, int col){
        switch(ship){
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
                    cout << "\nShip out of map or too many of them\n\n";
                    break;
            }

}


void countingShips(int ship) {
    int cont1 = 0;
    int cont2 = 0;
    int cont3 = 0;
    int cont4 = 0;
    int cont5 = 0;


    for (int cont1 = 0; cont1 == 1; cont1++){
        if (ship == 1){
            cout << cont1;
            cout << "\nNot an option anymore\n\n";
            cout << "Please choose another one: \n";
            cin >> ship;
        }
    }

}
*/

//jogo rodando
int main (){


cleanMap(places);
showMap(places);


//posicionamento do mapa
    int choiceShip;
    int choiceRow;
    int choiceCol;
    int cont = 0;
    
    do {


        showList();
        cout << "Choose your ship: " << endl;
        cin >> choiceShip;

        if (choiceShip > 5){
            cout << "Thats not an option" << endl;
            cout << "Choose another ship: " << endl;
            cin >> choiceShip;
        }

        cout << "Choose it place" << endl;
        cout << "Row: ";
        cin >> choiceRow;
        cout << "Column: ";
        cin >> choiceCol;


        while (places[choiceRow-1][choiceCol-1] != 0){
            cout << endl << "Not empty. Choose again." << endl;
            cout << "Row: ";
            cin >> choiceRow;
            cout << "Column: ";
            cin >> choiceCol;
        };
        
        
        showPatrol(choiceShip, choiceRow, choiceCol);
        showMap(places);
        cont++;


    } while (cont < 9); {

        cout << endl << endl << "Lets play!!!";
    };


}
