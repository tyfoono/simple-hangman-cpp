#include <iostream>
#include <string>
#include "wordgen.h"

using namespace std;

string Check::check(string w, char c, char n[]){
    int s=0;
    string res;
    for(int i = 0; i < w.size(); i++){
        if(w[i]==c){
            n[i] = c;

            s++;
        }
        else if(i == w.size() - 1 && s == 0){
            res =  "There is no letter '"+string(1, c)+"' in word";
        }
    }
    return n;
}

string GFruit::getWord(){
    srand(time(NULL));
    r = rand() % 13;
    return fruits[r];
}
void GFruit::printFact(){
    cout<<smth[r];
}

string GRussia::getWord(){
    srand(time(NULL));
    r = rand() % 15;
    return rcities[r];
}
void GRussia::printFact(){
    cout<<smth[r];
}

string GEurovision::getWord(){
    srand(time(NULL));
    r = rand() % 39;
    return ecountries[r];
}
void GEurovision::printFact(){
    cout<<smth[r];
}

