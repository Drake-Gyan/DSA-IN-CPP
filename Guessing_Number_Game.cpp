#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{
    srand(time(0));
    int secretNumber = rand() % 100 + 1;
    int guess;
    int tries = 0;
    cout << "Welcome To The Number Guessing Game..!!" << endl;
    cout << "I Have Chosen A Number Between 1 And 100. Try To Guess It..!!" << endl;
    do
    {
        cout << "Enter Your Guess : ";
        cin >> guess;
        tries++;
        if (guess == secretNumber) 
        {
            cout << "Congratulations..!! You Guessed The Correct Number In " << tries << " Tries." << endl;
            break;
        } else if (guess < secretNumber)
        {
            cout << "Too Low..!! Try Again." << endl;
        } else
        {
            cout << "Too High..!! Try Again." << endl;
        }
    } while (true);
    return 0;
}