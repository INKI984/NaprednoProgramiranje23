#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <vector>
using namespace std;
const int DECK_SIZE = 52;
const int SUIT_SIZE = 13;
string suits[4] = {"Hearts", "Diamonds", "Clubs", "Spades",};
string ranks[SUIT_SIZE] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King",};

int main() {
vector<string> deck(DECK_SIZE);     // Tuka nizata e smenata od array vo vector, dodadeni se 2 jokeri so funkcijata pushback, ja iskoristiv  prvata zadaca(NP=karti03)
deck.push_back("Joker of Red");
deck.push_back("Joker of Black");
int index = 0;
for (int i = 0; i < 4; i++) {
for (int j = 0; j < SUIT_SIZE; j++) {
deck[index] = ranks[j] + " of " + suits[i];  
index++;
}
}
for(int i=0; i<54;i++)
cout<<deck[i]<<endl;

cout<<endl;
srand(time(NULL));
for (int i = 0; i < 54; i++) {
int j = rand() % 54;
string temp = deck[i];
deck[i] = deck[j];
deck[j] = temp;
}
for (int i = 0; i < 54; i++) {
cout << deck[i] << endl;
}
return 0;
}