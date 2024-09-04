#include <vector>
#include <string>
#include <cctype> // For std::tolower

using namespace std;

// Function to convert a string to lowercase
string toLowerCase(const string& input) {
    string result = input;
    for (char& c : result) {
        c = tolower(c); // Convert each character to lowercase
    }
    return result;
}

class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string row1 = "qwertyuiop";
        string row2 = "asdfghjkl";
        string row3 = "zxcvbnm";
        vector<string> result;
        
        for (const string& word : words) {
            string lowerWord = toLowerCase(word); // Convert word to lowercase
            
            bool inRow1 = row1.find(lowerWord[0]) != string::npos;
            bool inRow2 = row2.find(lowerWord[0]) != string::npos;
            bool inRow3 = row3.find(lowerWord[0]) != string::npos;
            
            if (inRow1) {
                for (char c : lowerWord) {
                    if (row1.find(c) == string::npos) {
                        inRow1 = false;
                        break;
                    }
                }
            }
            
            if (inRow2) {
                for (char c : lowerWord) {
                    if (row2.find(c) == string::npos) {
                        inRow2 = false;
                        break;
                    }
                }
            }
            
            if (inRow3) {
                for (char c : lowerWord) {
                    if (row3.find(c) == string::npos) {
                        inRow3 = false;
                        break;
                    }
                }
            }
            
            if (inRow1 || inRow2 || inRow3) {
                result.push_back(word);
            }
        }
        
        return result;
    }
};
