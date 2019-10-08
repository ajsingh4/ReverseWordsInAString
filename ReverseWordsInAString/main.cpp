//
//  main.cpp
//  ReverseWordsInAString
//
//  Created by Aj Gill on 10/7/19.
//  Copyright © 2019 Aj Gill. All rights reserved.
//

#include <iostream>

using namespace std;

void reverseCharacters(string & str, int beginIndex, int endIndex){
    while(beginIndex < endIndex){
        swap(str[beginIndex], str[endIndex]);
        beginIndex++;
        endIndex--;
    }
}

void reverseWords(string & message){
    //Reverse the characters in the entire string
    reverseCharacters(message, 0, message.length()-1);
    int wordBeginIndex = 0;
    for(int i=0; i<=message.length(); i++){
        //Found the end of a word, reverse the characters of it again
        if(i == message.length() || message[i] == ' '){
            reverseCharacters(message, wordBeginIndex, i-1);
            wordBeginIndex = i+1;
        }
    }
}

int main() {
    string message = "cake pound steal";
    reverseWords(message);
    cout << message << "\n";
}
