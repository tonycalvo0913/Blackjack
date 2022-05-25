// Assignment 2: Blackjack
//Anthony Calvo, CS-110B
// h = hit me
// s = stay

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void displayMenu();
void displayRules();
/**
	Simple method that displays the rules of the game only
*/
void displayRules(){
	cout << "The rules of blackjack are fairly simple and your only opponent in the game is the dealer. Each player is dealt a two cards face up while the dealer only has one card face up. The goal is to have your two cards added total to be higher than the dealer’s two cards and under 21. If you go over 21 you “bust”, or lose, or if the dealers two cards added together are higher than yours you also lose.	 If your two card total is equal to the dealers then it is a “stand-off” or a tie. Cards values are usually face value, 2 is 2 and 10 is 10, while all face cards, jack/queen/king, are also 10. The only exception to this rule are Aces, they can take on the value of 1 or 11. To get your two cards total you simply add your two cards together. If you have any combination of an Ace or any card that is 10 points then you have what is called blackjack, 21 pts. Getting blackjack means you get paid more if you win. With all of that being said if you’re not satisfied with your two card total then you can take extra cards, called taking a hit, and for each hit you get you get one more card. The dealer does this as well but has a strict set of rules to follow on whether or not to take a hit. If a dealer’s hand is less than or equal to 16 or a “soft” 17, meaning they have an ace and a 6, they must take a hit. If it’s 17 or higher the dealer must stand.  So now that we know the dealer rules there are a few options for users.  As I stated earlier you can take hits to increase your card total. You may also split your cards and double down. Splitting can be done when your first two cards are of equal value and can only be split from the original hand, split hands cannot be split, the bet has to be equal or greater than the original bet for each hand. For each time you split you will receive and additional card for that hand and then you play like regular blackjack.  Users may also double down which consists of a user placing another bet of equal or lesser value when their first two cards total is equal to 9, 10, or 11 without aces. After doubling down you will only get one additional card. Some of you may have realized that if the dealer gets a blackjack or 21 you pretty much always lose, unless you yourself have blackjack. There is a way around this and it’s called insurance. If the dealer is dealt an ace face up then the dealer will ask if you want to take out insurance, equal to half of your original bet, to insure your hand if the dealer has blackjack and only when he has blackjack and helps insure you don’t lose money if he does have blackjack, insurance pays 2 to 1 so your insurance bet will cover the loss of your hand if you bet half." << endl; //displays the rules
}
/**
	Simple method that displays the menu for the game only
*/
void displayMenu(){
	cout << "Welcome to the game of Blackjack!" << endl; //output
	cout << "Please select an option below." << endl; //output
	cout << "1) Rules" << endl; //output
	cout << "2) Play" << endl; //output
}

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
        
        else if (total >= 21) 
        {
            cout << "Bust!!" << endl;
            cout << "Your hand is over" << endl;
        }

        //if (total <= 21)
        //{
            //cout << "You lose" << endl;
            //cout << "Your hand is under" << endl; 
        //}
    } while(next == 'h'|| next == 'H');
    return 0;
}