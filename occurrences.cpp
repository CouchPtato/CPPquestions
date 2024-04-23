#include <iostream>
using namespace std;

int stringlen(const char *str) {
    int len = 0;
    while (str[len] != '\0') {
        len++;
    }
    return len;
}

char tolower(char c) {
    if (c >= 'A' && c <= 'Z') {
        return c + ('a' - 'A');
    }
    return c;
}

bool isalpha(char c) {
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int main(int argc, char *argv[]) {
    // Array to store counts of each letter, initialized to 0.
    // Assumes letters 'a' to 'z' only.
    int letterCounts[26] = {0};

    // Iterate over each command line argument
    for (int arg = 1; arg < argc; arg++) {
        // Process each character in the argument
        int len = stringlen(argv[arg]);
        for (int i = 0; i < len; i++) {
            char c = tolower(argv[arg][i]); // Convert to lowercase
            if (isalpha(c)) {
                // Increment count for this letter
                letterCounts[c - 'a']++;
            }
        }
    }

    // Print the results
    cout << "Alphabet\tCount" << endl;
    for (int i = 0; i < 26; i++) {
        char letter = 'a' + i;
        cout << letter << "\t\t" << letterCounts[i] << endl;
    }

    return 0;
}
