#include <iostream>

using namespace std;



int main() {
	int rank, suit;

	cout << "Pick a card (rank followed by a suit)" << endl
		<< "Ranks (2 - 10, Ace = 1, Jack = 11, Queen = 12, King = 13)" << endl
		<< "Choose your rank: ";
	cin >> rank;

	cout << "Suits (1 = Clubs, 2 = Diamonds, 3 = Hearts, 4 = Spades)" << endl
		<< "Choose you suit: ";
	cin >> suit;

	if (rank >= 1 && rank <= 13 && suit >= 1 && suit <= 4) {
		switch (rank) {
		case 1: if (suit == 1)
			cout << "The card you picked is Ace of Clubs";
			  else if (suit == 2)
			cout << "The card you picked is Ace of Diamonds";
			  else if (suit == 3)
			cout << "The card you picked is Ace of Hearts";
			  else
			cout << "The card you picked is Ace of Spades";
			break;
		case 2: if (suit == 1)
			cout << "The card you picked is 2 of Clubs";
			  else if (suit == 2)
			cout << "The card you picked is 2 of Diamonds";
			  else if (suit == 3)
			cout << "The card you picked is 2 of Hearts";
			  else
			cout << "The card you picked is 2 of Spades";
			break;
		case 3: if (suit == 1)
			cout << "The card you picked is 3 of Clubs";
			  else if (suit == 2)
			cout << "The card you picked is 3 of Diamonds";
			  else if (suit == 3)
			cout << "The card you picked is 3 of Hearts";
			  else
			cout << "The card you picked is 3 of Spades";
			break;
		case 4: if (suit == 1)
			cout << "The card you picked 4 Ace of Clubs";
			  else if (suit == 2)
			cout << "The card you picked 4 Ace of Diamonds";
			  else if (suit == 3)
			cout << "The card you picked 4 Ace of Hearts";
			  else
			cout << "The card you picked 4 Ace of Spades";
			break;
		case 5: if (suit == 1)
			cout << "The card you picked is 5 of Clubs";
			  else if (suit == 2)
			cout << "The card you picked is 5 of Diamonds";
			  else if (suit == 3)
			cout << "The card you picked is 5 of Hearts";
			  else
			cout << "The card you picked is 5 of Spades";
			break;
		case 6: if (suit == 1)
			cout << "The card you picked is 6 of Clubs";
			  else if (suit == 2)
			cout << "The card you picked is 6 of Diamonds";
			  else if (suit == 3)
			cout << "The card you picked is 6 of Hearts";
			  else
			cout << "The card you picked is 6 of Spades";
			break;
		case 7: if (suit == 1)
			cout << "The card you picked is 7 of Clubs";
			  else if (suit == 2)
			cout << "The card you picked is 7 of Diamonds";
			  else if (suit == 3)
			cout << "The card you picked is 7 of Hearts";
			  else
			cout << "The card you picked is 7 of Spades";
			break;
		case 8: if (suit == 1)
			cout << "The card you picked is 8 of Clubs";
			  else if (suit == 2)
			cout << "The card you picked is 8 of Diamonds";
			  else if (suit == 3)
			cout << "The card you picked is 8 of Hearts";
			  else
			cout << "The card you picked is 8 of Spades";
			break;
		case 9: if (suit == 1)
			cout << "The card you picked is 9 of Clubs";
			  else if (suit == 2)
			cout << "The card you picked is 9 of Diamonds";
			  else if (suit == 3)
			cout << "The card you picked is 9 of Hearts";
			  else
			cout << "The card you picked is 9 of Spades";
			break;
		case 10: if (suit == 1)
			cout << "The card you picked is 10 of Clubs";
			  else if (suit == 2)
			cout << "The card you picked is 10 of Diamonds";
			  else if (suit == 3)
			cout << "The card you picked is 10 of Hearts";
			  else
			cout << "The card you picked is 10 of Spades";
			break;
		case 11: if (suit == 1)
			cout << "The card you picked is Jack of Clubs";
			  else if (suit == 2)
			cout << "The card you picked is Jack of Diamonds";
			  else if (suit == 3)
			cout << "The card you picked is Jack of Hearts";
			  else
			cout << "The card you picked is Jack of Spades";
			break;
		case 12: if (suit == 1)
			cout << "The card you picked is Queen of Clubs";
			  else if (suit == 2)
			cout << "The card you picked is Queen of Diamonds";
			  else if (suit == 3)
			cout << "The card you picked is Queen of Hearts";
			  else
			cout << "The card you picked is Queen of Spades";
			break;
		case 13: if (suit == 1)
			cout << "The card you picked is King of Clubs";
			  else if (suit == 2)
			cout << "The card you picked is King of Diamonds";
			  else if (suit == 3)
			cout << "The card you picked is King of Hearts";
			  else
			cout << "The card you picked is King of Spades";
			break;
		}
	}
	else
		cout << "Error: invaled card selection" << endl;


	return 0;
}