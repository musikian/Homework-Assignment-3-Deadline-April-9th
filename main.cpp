#include <iostream>
#include <unordered_map>
using namespace std;

char firstNonRepeatingChar(const string& str) {
    unordered_map<char, int> freq;

    
    for (char ch : str) {
        freq[ch]++;
    }

    
    for (char ch : str) {
        if (freq[ch] == 1)
            return ch;
    }

    return -1;
}

int main() {
    string input = "swiss";
    char result = firstNonRepeatingChar(input);

    if (result != -1)
        cout << "First non-repeating character: '" << result << "'" << endl;
    else
        cout << "All characters repeat. Output: -1" << endl;

    return 0;
}
