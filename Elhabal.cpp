#include <iostream>
using namespace std;
char board[3][3] = {{'0', '1', '2'},{'3', '4', '5'},{'6', '7', '8'}};
char player1, player2 ; int check  , row , col ; int square1 = 0, square2 = 0 ;
void steal () ;
void display_board () ;
void game() ;
void enter(int sq) ;
int main () {
steal() ;
display_board() ;
game() ;
}
void enter(int sq) {
    cin >> sq ;

    if (sq == 0) {
    row =0 ;
    col =0 ;
    }
    else if (sq == 1) {
        row =0 ;
        col =1 ;
    }
    else if (sq == 2) {
        row =0 ;
        col =2 ;
    }
    else if (sq == 3) {
        row =1 ;
        col =0 ;
    }
    else if (sq == 4) {
        row =1 ;
        col =1 ;
    }
    else if (sq == 5) {
        row =1 ;
        col =2 ;
    }
    else if (sq == 6) {
        row =2 ;
        col =0 ;
    }
    else if (sq == 7) {
        row =2 ;
        col =1 ;
    }
    else if (sq == 8) {
        row =2 ;
        col =2 ;
    }
}
void steal () {
cout << "********************************************************************************" << endl ;
cout << "\t \t \t Welcome in X / O  Game " << endl ;
cout << "********************************************************************************" << endl ;
cout << "Instructions :" << endl ;
cout << "1-TO Play Insert Location :" << endl ;
cout << "Format :" << endl ;
cout << " square1 = 0 , square2 = 1 , square3 = 2 , square4 = 3 , square5 = 4 , square6 = 5 , square7 = 6 , square8 = 7,square9 = 8" << endl ;
cout << "2-Before Start Game Should The Two Player Chose X / O ." << endl ;
cout << "3-You Can Enter The X Or O In Any Case ." << endl ;
}
void display_board ()  {
    cout << "The Shape Of The Board : " << endl ;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << board[i][j] ;
            if (j < 2) cout << " | ";
        }
        cout << endl;
        if (i < 2) cout << "---------" << endl;
    }
}
void game() {
    cout << "Player1 Chose X Or O : " << endl;
    cin >> player1;
    tolower(player1) ;
    if (player1 == 'x') {
        player2 = 'o';
    } else {
        player2 = 'x';
    }
    cout << "Start Game : " << endl;

    char board[3][3] = {{'0', '1', '2'},{'3', '4', '5'},{'6', '7', '8'}};

    int count = -1;

    while (true) {
        cout << "********************************" << endl;

        cout << "Player1 Play : " << endl;

        count += 2;

        enter(square1);

        board[row][col] = player1;

        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                cout << board[i][j];
                if (j < 2) cout << " | ";
            }
            cout << endl;
            if (i < 2) cout << "---------" << endl;
        }
        if ((board[0][0] == player1 && board[1][1] == player1 && board[2][2] == player1) ||
            (board[0][2] == player1 && board[1][1] == player1 && board[2][0] == player1)) {
            cout << "player " << player1 << " win!" << endl;
            break;
        } else if ((board[0][0] == player1 && board[0][1] == player1 && board[0][2] == player1) ||
                   (board[1][0] == player1 && board[1][1] == player1 && board[1][2] == player1) ||
                   (board[2][0] == player1 && board[2][1] == player1 && board[2][2] == player1)) {
            cout << "player " << player1 << " win!" << endl;
            break;
        } else if ((board[0][0] == player1 && board[1][0] == player1 && board[2][0] == player1) ||
                   (board[0][1] == player1 && board[1][1] == player1 && board[2][1] == player1) ||
                   (board[0][2] == player1 && board[1][2] == player1 && board[2][2] == player1)) {
            cout << "player " << player1 << " win!" << endl;
            break;
        }

        if (count == 9) {
            cout << "Player1 and Player2 are equals" << endl;
            break;
        }
        cout << "************************************" << endl;
        cout << "Player2 Play : " << endl;
        enter(square2);
        board[row][col] = player2;
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                cout << board[i][j];
                if (j < 2) cout << " | ";
            }
            cout << endl;
            if (i < 2) cout << "---------" << endl;
        }
        if ((board[0][0] == player2 && board[1][1] == player2 && board[2][2] == player2) ||
            (board[0][2] == player2 && board[1][1] == player2 && board[2][0] == player2)) {
            cout << "player " << player2 << " win!" << endl;
            break;
        } else if ((board[0][0] == player2 && board[0][1] == player2 && board[0][2] == player2) ||
                   (board[1][0] == player2 && board[1][1] == player2 && board[1][2] == player2) ||
                   (board[2][0] == player2 && board[2][1] == player2 && board[2][2] == player2)) {
            cout << "player " << player2 << " win!" << endl;
            break;
        } else if ((board[0][0] == player2 && board[1][0] == player2 && board[2][0] == player2) ||
                   (board[0][1] == player2 && board[1][1] == player2 && board[2][1] == player2) ||
                   (board[0][2] == player2 && board[1][2] == player2 && board[2][2] == player2)) {
            cout << "player " << player2 << " win!" << endl;
            break;
        }
    }
        cout << "Enter 1 to continue " << endl;
        cout << "Enter 2 to stop " << endl;
        cin >> check;
        if (check == 1) {
            return game();
        } else {
            cout << "Thanks TO play The Game " << endl;
        }
    }
