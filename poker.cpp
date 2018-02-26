//
//  Created by Xalion on 25.02.2018.
//  Copyright © 2018 Xalion. All rights reserved.
//

#include <iostream>
#include <map>
//Расскоментить на Windows, если не будет работать
//#include <utility>

using namespace std;

const string value[14] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};

const string suit[4] = {"\033[1;31m\u2665\033[0m", "\033[1;30m\u2660\033[0m", "\033[1;30m\u2663\033[0m", "\033[1;31m\u2666\033[0m"};

//Обвъявление пары: (значение, значение) и создания своего типа данных hand и layout
typedef map<string, string> hand;
typedef map<string, string> layout;

//Объявление функций
hand handingOverCards();
layout layoutCards();
void play();


int main() {
    play();
    return 0;
}



hand handingOverCards() {
    srand(static_cast<unsigned int>(time(NULL)));
    
    hand handPlayer = {
        {value[rand() % 14], suit[rand() % 4]},
        {value[rand() % 14], suit[rand() % 4]} };
    
    return handPlayer;
}

layout layoutCards() {
    srand(static_cast<unsigned int>(time(NULL)));
    
    layout layoutCards = {
        { value[rand() % 14], suit[rand() % 4] },
        { value[rand() % 14], suit[rand() % 4] },
        { value[rand() % 14], suit[rand() % 4] },
        { value[rand() % 14], suit[rand() % 4] },
        { value[rand() % 14], suit[rand() % 4] } };
    
    return layoutCards;
}

void play() {
    hand handPlayer = handingOverCards();
    layout cardsOnTable = layoutCards();
    
    cout << "Cards on the table: ";
    
    for (auto i = cardsOnTable.begin(); i != cardsOnTable.end(); ++i) {
        cout << i->first << i->second << " ";
    }
    
    cout << endl;
    cout << "Cards in your hand: ";
    
    for (auto i = handPlayer.begin(); i != handPlayer.end(); ++i) {
        cout << i->first << i->second << " ";
    }
    
    cout << endl;
}

