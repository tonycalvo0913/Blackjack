// Assignment 2: Blackjack
//Anthony Calvo, CS-110B
// h = hit me
// s = stay

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int firstCard, newCard;
    int total = 0;

    char next = 'h';

    srand(time(NULL));
    firstCard = rand()%10 + 1;
    cout << "First Card: " << firstCard << endl;

    do
    {
        cout << "Do you want another card? (h/s)";
        cin >> next;

        newCard = rand()%10 + 1;
        cout << "Card: " << newCard << endl;

        total += newCard + firstCard;
        cout << total << endl;

        if (total == 21)
            cout << "Blackjack! You win" << endl;
        
        if (total >= 21) 
        {
            cout << "Bust!!" << endl;
            cout << "Your hand is over" << endl;
        }

        //if (total <= 21)
        //{
            //cout << "You lose" << endl;
            //cout << "Your hand is under" << endl; 
        //}
    } while(next == 'h'||next == 'H');
    return 0;
}