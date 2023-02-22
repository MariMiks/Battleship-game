#include <iostream>
#include <string>

using namespace std;

//construcao do mapa
void map(){
    cout << "Battleship Game\n";

    cout << "   | A | B | C | D | E |\n";
    cout << " 1 |   |   |   |   |   |\n";
    cout << " 2 |   |   |   |   |   |\n";
    cout << " 3 |   |   |   |   |   |\n";
    cout << " 4 |   |   |   |   |   |\n";
    cout << " 5 |   |   |   |   |   |\n\n";



};



int main (){
    /* regras:
         - um mapa para posicionar os navios
        (definir area do mapa, limitar os navios que podem ocupar, nao deixar colocar onde ja tem, *exibir lista de navios com diferentes tamanhos*)
         - mesmo mapa marca tiros do oponente
        (mandar alerta "navio tal atingido", mandar alerta "navio tal abatido")

         mapa:
            - apenas 5 navios (independente do tipo)
            - escolher posicao
            - comparar texto com a posicao no mapa
            - verificar posiciao se adequada ("sem espaco", "fora do mapa")
            -


         *opcional/n necessario para o projeto*
         - outro mapa marca meus tiros para o oponente
        (mapa limpo apenas para mandar comandos e acertar no oponente)
    */

map();

//lista de navios
    string ships[5] =
        {"1. Carrier (5)\n",
        "2. Battleship (4)\n",
        "3. Destroyer (3)\n",
        "4. Submarine (3)\n",
        "5. Patrol Boat (2)\n"};

    int contList = 0;
    while(contList < sizeof ships/sizeof ships[0]){
      cout << ships[contList];
      contList++;
    };

//posicionamento do mapa

    int cont = 0;
    while (cont < 5){
        string choiceShip;
        int choiceLine;
        char choiceCol;

        cout << "Choose your ship: \n";
        cin >> choiceShip;



        cout << "Choose it place\n";
        cout << "Line: \n";
        cin >> choiceLine;
        cout << "Column: \n";
        cin >> choiceCol;
        cont++;


    };


}


