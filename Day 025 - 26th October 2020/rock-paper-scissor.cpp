#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int rule(char p, char c)
{ // p for player ; c for computer

    // return 0 - when tie; return 1 when wins; return -1 when lose
    // Cases for tie
    // if player == scissors and computer == scissors; tie
    // if player == rock and computer == rock; tie
    // if player == paper and computer == paper; tie
    if (p == c)
    {
        return 0;
    }

    // Non-tie conditions
    // Possible cases -
    // if player == rock and computer == paper; computer wins
    // if player == scissors and computer == paper; player wins

    // if player == paper and computer == rock; player wins
    // if player == scissors and computer == rock; computer wins

    // if player == rock and computer == scissors; player wins
    // if player == paper and computer == scissors; computer wins

    if (p == 'r' && c == 'p'){
        return -1;
    }
    else if (p == 's' && c == 'p'){
        return 1;
    }
    else if (p == 'p' && c == 'r'){
        return 1;
    }
    else if (p == 's' && c == 'r'){
        return -1;
    }
    else if (p == 'r' && c == 's'){
        return 1;
    }
    else if (p == 'p' && c == 's'){
        return -1;
    }
}

int main()
{
    
    char computer;
    char player;
    char playmore;
    // Asking user for input -
    cout << "Welcome to Rock, Paper and Scissors Game. Enjoy!" << endl;
    do
    {
        int number = 0;
        srand(time(0));        // initialized time to 0
        number = rand() % 100; // will choose a number in range 0 - 99
        // r - for rock
        // p - for paper
        // s - for scissors
        if (number < 33)
        {
            computer = 'r';
        }
        else if (number > 66)
        {
            computer = 's';
        }
        else
        {
            computer = 'p';
        }
        cout << "Note: \"r\" for \"Rock\", \"p\" for \"Paper\", \"s\" for \"Scissor\"." << endl;
        cout << "Enter your choice: ";
        cin >> player;
        int result = rule(player, computer);
        if(result == 1){
            cout << "You won! Hurray" << endl;
        }
        else if(result == -1){
            cout << "You lose! Bad Luck" << endl;
        }
        else{
            cout << "Woah! That's Tie!" << endl; 
        }
        cout << "Do you want to Play Again?" << endl;
        cout << "Note: Press 'n' to exit! Press Anything to continue" << endl;
        cin >> playmore;
    }while(playmore != 'n');

    return 0;
}