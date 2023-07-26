// Section 19
// Challenge 3
// Word counter
#include <iostream>
#include <fstream>
//#include <string>

using namespace std;

int main() {
    fstream in_file;
    int wordsProceed = 0;
    int wordFounded = 0;
    string userInput = "";
    
    string currentWord = "";
    
    in_file.open("romeoandjuliet.txt");
    
    if(!in_file) {
        cerr << "Error reading file" << endl;
        return 1;
    }
    
    while(userInput.empty()) {
        cout << "Enter a words that is being searched: ";
        cin >> userInput;
    }
    
    
    while(in_file >> currentWord) {
        wordsProceed++;
        if(currentWord == userInput) {
           wordFounded++; 
        }
    }
    
    cout << wordsProceed << " words were searched...";
    cout << endl;
    cout << "The substring love was found "<< wordFounded << " times";

    
    cout << endl;
    
    in_file.close();
        
        
    return 0;
}

