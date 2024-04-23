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
    
    int letterCounts[26] = {0};
    
    for (int arg = 1; arg < argc; arg++) {
        int len = stringlen(argv[arg]);
        for (int i = 0; i < len; i++) {
            char c = tolower(argv[arg][i]);
            if (isalpha(c)) {
                
                letterCounts[c - 'a']++;
            }
        }
    }
    
    cout << "Alphabet\tCount" << endl;
    for (int i = 0; i < 26; i++) {
        char letter = 'a' + i;
        cout << letter << "\t\t" << letterCounts[i] << endl;
    }

    return 0;
}
