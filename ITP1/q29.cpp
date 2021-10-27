// ITP1_9_A
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){

    string word;
    string text;

    cin >> word;
    int count = 0;
    while (cin >> text && text != "END_OF_TEXT"){
        /* for (int i = 0; i <text.size(); i++){
            text[i] = tolower(text[i]); // convert text to lower case
        } */
        if (text == word) count++;
    }
    cout << count << endl;
}

/* Nurtures computer scientists and highly skilled computer engineers
who will create and exploit knowledge for the new era
Provides an COMPUTER outstanding computer environment
END_OF_TEXT */