#include <iostream>
#include <ctime>

void drawBoard(char *spaces); // pointer to one dimensional array 'spaces' that will keep track of all the markers (what spots are taken)
void playerMove(char *spaces, char player);
void botMove(char *spaces, char bot);
bool checkWinner(char *spaces, char player, char bot);
bool checkTie(char *spaces);

int main () {
    char spaces[9] = {' ',' ',' ',' ',' ',' ',' ',' ',' ',};
    char player = 'X';
    char bot = 'O';
    bool running = true;

    drawBoard(spaces); // when we pass in an array to a fxn it decays into a pointer, don't need to create a pointer for this array

    while (running) { // when we exit out of the game, we will set running to false
        playerMove(spaces, player);
        drawBoard(spaces);

        if (checkWinner(spaces, player, bot)) { // periodically check if there's a winner after a player or bot move
            running = false;
            break;
        }
        else if (checkTie(spaces)) {
            running =  false;
            break;
        }

        botMove(spaces, bot);
        drawBoard(spaces);

        if (checkWinner(spaces, player, bot)) {
            running = false;
            break;
        }
        else if (checkTie(spaces)) {
            running =  false;
            break;
        }

    }

    std::cout << "Thanks for playing!\n";
    return 0;
}

void drawBoard(char *spaces) {
    // formatting for the board
    std::cout << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  " << spaces[0] << "  |   " << spaces[1] << " |  " << spaces[2] << "  " << '\n';
    std::cout << "_____|_____|_____" << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  " << spaces[3] << "  |   " << spaces[4] << " |  " << spaces[5] << "  " << '\n';
    std::cout << "_____|_____|_____" << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << "  " << spaces[6] << "  |   " << spaces[7] << " |  " << spaces[8] << "  " << '\n';
    std::cout << "     |     |     " << '\n';
    std::cout << '\n';
}

void playerMove(char *spaces, char player) {
    int number;

    do{
        std::cout << "Enter a spot to place a marker (1-9): ";
        std::cin >> number;
        number--; // cuz array starts with 0, however user will not this little detail, best to remove this detail from user

        if (spaces[number] == ' ') {
            spaces[number] = player;
            break;
        }

    }while(!number > 0 || !number < 8);
}

void botMove(char *spaces, char bot) {
    int number;
    srand(time(0));

    while(true) {
        number = rand() % 9;
        if (spaces[number] == ' ') {
            spaces[number] = bot;
            break;
        }


    }

}

bool checkWinner(char *spaces, char player, char bot) {
    /*
        0 1 2
        3 4 5
        6 7 8
    
    */
    if (spaces[0] == spaces[1] && spaces[1] == spaces[2] && (spaces[0] != ' ')) { // check if first row has all matching characters
        spaces[0] == player ? std::cout << "YOU WIN!!!\n" : std::cout << "YOU LOSE!!!\n";
    }
    else if (spaces[3] == spaces[4] && spaces[4] == spaces[5] && (spaces[3] != ' ')) { // check if second row has all matching characters
        spaces[3] == player ? std::cout << "YOU WIN!!!\n" : std::cout << "YOU LOSE!!!\n";
    }
    else if (spaces[6] == spaces[7] && spaces[7] == spaces[8] && (spaces[6] != ' ')) { // check if third row has all matching characters
        spaces[6] == player ? std::cout << "YOU WIN!!!\n" : std::cout << "YOU LOSE!!!\n";
    } 
    else if (spaces[0] == spaces[3] && spaces[3] == spaces[6] && (spaces[0] != ' ')) { // check if first col has all matching characters
        spaces[0] == player ? std::cout << "YOU WIN!!!\n" : std::cout << "YOU LOSE!!!\n";
    }
    else if (spaces[1] == spaces[4] && spaces[4] == spaces[7] && (spaces[1] != ' ')) { // check if second col has all matching characters
        spaces[1] == player ? std::cout << "YOU WIN!!!\n" : std::cout << "YOU LOSE!!!\n";
    }    
    else if (spaces[2] == spaces[5] && spaces[5] == spaces[8] && (spaces[2] != ' ')) { // check if third col has all matching characters
        spaces[2] == player ? std::cout << "YOU WIN!!!\n" : std::cout << "YOU LOSE!!!\n";
    } 
    else if (spaces[0] == spaces[4] && spaces[4] == spaces[8] && (spaces[0] != ' ')) { // check if diagonal 0 4 8 has all matching characters
        spaces[0] == player ? std::cout << "YOU WIN!!!\n" : std::cout << "YOU LOSE!!!\n";
    } 
    else if (spaces[2] == spaces[4] && spaces[4] == spaces[6] && (spaces[2] != ' ')) { // check if diagonal 2 4 6 has all matching characters
        spaces[2] == player ? std::cout << "YOU WIN!!!\n" : std::cout << "YOU LOSE!!!\n";
    }
    else { // IF THERE IS NO WIN CONDITIONS (IN THE CASE OF TIE) => return false
        return false;
    }

    return true; // otherwise, return true (somebody won)
}

bool checkTie(char *spaces) {
    for (int i = 0; i < 9; i++) { // if there's still spots left and NO ONE has won yet, no tie yet (false)
        if (spaces[i] == ' ') {
            return false;
        }
    }
    // no spots left and winner hasn't been determined? => TIE (true)
    std::cout << "IT'S A TIE!\n";

    return true;
}