#include <iostream>
#include "hangman.h"
#include "wordgen.h"
using namespace std;
void Game::game(){

    char l;
    Check c;
    GFruit f;
    GRussia r;
    int enter,k;
    GEurovision e;
    string word,w,a,s, res;

    cout<<"Hangman is a classic paper and pencil game. "<<endl<<
          "The idea of the gallows may be a little morbid, but it also adds to the excitement of the game, especially for boys."<<endl<<
          "Everyone wants to save the poor person from a grim fate!"<<endl<<endl;
    cout<<"Input something and press Enter to contilnue!"<<endl;
    cin>>a;
    system("cls");
    cout<<"Take a paper and pen or use notepad app! You have to use it!"<<endl<<endl;
    cout<<"Input something and press Enter to contilnue!"<<endl;
    cin>>a;
    system("cls");

    system("cls");
    cout<<"Categories: "<<endl;
    cout<<" 1 - Fruits"<<endl<<" 2 - Evrovision Countries"<<endl<<" 3 - Russian Cities"<<endl;
    cout<<"Input number 1, 2 or 3"<<endl;

    cin>>k;

    switch (k) {
    case 1: word = f.getWord();break;
    case 2: word = e.getWord();break;
    case 3: word = r.getWord();break;
    }

    char wordChars[word.size()];
    for(int i = 0; i < word.size(); i++){
        wordChars[i] = '_';
    }

    cout<<"Total attempts: 15"<<endl;
    cout<<wordChars<<endl;
    cout<<"Input letter in word"<<endl;
    cin>>l;
    res = c.check(word, l, wordChars);
    cout<<res<<endl;
    cout<<"Input something and press Enter to contilnue"<<endl;
    cin>>a;
    system("cls");
    for(int i = 14; i > 0; i--){
        cout<<res<<endl<<endl;
        cout<<"Choose option: "<<endl;
        cout<<" 1 - Contilnue"<<endl<<" 2 - End"<<endl;

        cin>>enter;
        switch(enter){
        case 1: break;
        case 2:
            cout<<"Input your answer"<<endl;
            cin>>w;
            s = this->end(w, word);
            if(s == "Right answer!"){
                cout<<s<<endl;
                switch (k) {
                case 1: f.printFact(); break;
                case 2: e.printFact(); break;
                case 3: r.printFact(); break;
                }
                exit(0);
            }else{
                cout<<s<<endl;
            }
        }
        system("cls");
        cout<<"Total attempts: "<<i<<endl;
        cout<<res<<endl;
        cout<<"Input letter in word"<<endl;
        cin>>l;
        res = c.check(word, l, wordChars);
        cout<<res<<endl;
        cout<<"Input something and press Enter to contilnue"<<endl;
        cin>>a;
        system("cls");
    }
    cout<<"Input your answer"<<endl;
    cin>>w;
    s = this->end(w, word);
    if(s == "Wrong answer!"){
        cout<<s<<endl;
        cout<<"Right answer is "<<word<<endl;
    }else
        cout<<s<<endl;
    switch (k) {
    case 1: f.printFact(); break;
    case 2: e.printFact(); break;
    case 3: r.printFact(); break;
    }
    exit(0);
}

string Game::end(string w, string ew){
    if(w == ew){
        return "Right answer!";
    }
    return "Wrong answer!";
}
