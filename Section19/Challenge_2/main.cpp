// Section 19
// Challenge 2
// Automated Grader
#include <iostream>
#include <fstream>
#include <vector>
#include <iomanip>

using namespace std;

int first_column = 15;
int second_column = 10;

void line() {
    cout << setw(first_column + second_column + 1) << setfill('-') << " " << endl;
    cout << setfill(' ');
}

void calcAvgScores(vector<int> &scores) {
    
    double avgScore = 0.0;
    int sumScores = 0;
    
    for(int score : scores) {
        sumScores += score;
    }
    
     avgScore = static_cast<double>(sumScores) / scores.size();
    
    cout << setw(first_column) << left << "Average score" << setw(second_column) << right << fixed << setprecision(2) << avgScore << endl;
}


int main() {
    fstream in_file;
    string rule = "";
    string currLine = "";
    vector<int> scores{};
    
    //for each user
    string tempName = "";
    int tempScore = 0;
    
    
    in_file.open("responses.txt");
    
    
    if(!in_file) {
        cerr << "Error opening file" << endl;
        return 1;
    }
    
    
    in_file >> rule;
    
    
    /* Headers */
    cout << setw(first_column) << left << "Student" << setw(second_column) << right << "Score" << endl;
    
    line();
    
    
    bool isName = true;
    while(in_file >> currLine) {
        if(isName) {
             cout << setw(first_column) << left << currLine;
            
        } else {
            tempScore = 0;
            for(size_t i = 0; i < currLine.length(); i++) {
                if(currLine[i] == rule[i]) {
                    tempScore++;
                }
            }
            scores.push_back(tempScore);
            cout << setw(second_column - 2) << right << tempScore << endl;
        }
        
     
        
         isName = !isName;
    }
    
    line();
    calcAvgScores(scores);
    
    return 0;
}

