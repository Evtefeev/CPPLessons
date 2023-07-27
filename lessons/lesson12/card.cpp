#include <iostream>
#include <string>
using namespace std;



struct Card {
    string mast;
    string nominal;
};


bool checkCard(string mast, string nominal, Card card){
    if(card.mast == mast && card.nominal == nominal){
        return true;
    } else {
        return false;
    }

}

int main() {
   Card myCard = {"tref", "10"};

   cout << checkCard("tref", "10", myCard);
}
