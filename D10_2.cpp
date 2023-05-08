#include <fstream>
#include <string>
#include <iostream>

using namespace std;

string find_word_starting_with_a(const string& filename) {
    ifstream file(filename);
    string word;
    while (file >> word) {
        if (word.front() == 'a' || word.front() == 'A') {
            return word;
        }
    }
    return "";
}

int main() {
    string filename = "t.txt";
    string word = find_word_starting_with_a(filename);
    if (!word.empty()) {
        cout << "First word starting with 'a': " << word << endl;
    }
    else {
        cout << "No word found in file starting with 'a'" << endl;
    }
    return 0;
}
