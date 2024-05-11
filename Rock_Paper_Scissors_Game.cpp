#include<iostream>
#include<ctime>
using namespace std;
int main()
{
    srand(time(0));
    char choice;
    int playerChoice, computerChoice;
    char playAgain = 'y';
    while (playAgain == 'y' || playAgain == 'Y') {
        cout << "Enter Your Choice (R for Rock, P for Paper, S for Scissors) : ";
        cin >> choice;
        switch (choice)
        {
            case 'r':
            case 'R':
                playerChoice = 0;
                break;
            case 'p':
            case 'P':
                playerChoice = 1;
                break;
            case 's':
            case 'S':
                playerChoice = 2;
                break;
            default:
                cout << "Invalid Choice. Please Try Again." << endl;
                continue;
        }
        computerChoice = rand() % 3;
        if ((playerChoice == 0 && computerChoice == 2) ||
            (playerChoice == 1 && computerChoice == 0) ||
            (playerChoice == 2 && computerChoice == 1)) 
        {
            cout << "You Win..!!" << endl;
        } else if (playerChoice == computerChoice) 
        {
            cout << "It's A Draw..!!" << endl;
        } else 
        {
            cout << "Computer Wins..!!" << endl;
        }
        cout << "Do You Want To Play Again? (Y/N) : ";
        cin >> playAgain;
    }
return 0;
}