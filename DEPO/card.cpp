#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::ios;

#include<iomanip>

using std::setiosflags;
using std::setw;

#include <cstdlib>
#include <ctime>

struct Card{
    char *face;
    char *suit;
};

void fillDeck( Card * const, char *[], char*[]);
void shuffle( Card * const);
void deal ( Card * const);

int main(){
    Card deck[ 52 ];
    char *suit[] = {"Hearts","Diamonds","Clubs","Spades"};
    char *face[] = {"Ace", "Deuce", "Three", "Four","Five", "Six", "Seven", "Eight","Nine", "Ten", "Jack", "Queen","King"}; 

    srand(time(0)); // randomize
    fillDeck( deck,face,suit);
    shuffle( deck);
    deal(deck);



    return 0;
}

void shuffle( Card * const wDeck){
    for( int i = 0; i < 52; i++){
        int j= rand() %52;
        Card temp = wDeck[i];
        wDeck[i] = wDeck[j];
        wDeck[j] = temp; 
    }
}

void deal( Card * const wDeck) {
    for(int i = 0; i< 52; i++){
        cout<<setiosflags(ios::right)
            <<setw(5)<<wDeck[i].face <<" of "
            <<setiosflags( ios::left)
            <<setw(8)<<wDeck[i].suit
            <<((i+1) % 2 ? '\t':'\n');
    }
}