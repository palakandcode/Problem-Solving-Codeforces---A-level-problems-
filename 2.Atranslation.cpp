The translation from the Berland language into the Birland language is not an easy task. 
Those languages are very similar: a Berlandish word differs from a Birlandish word with the same meaning a little: 
it is spelled (and pronounced) reversely. For example, a Berlandish word code corresponds to a Birlandish word edoc. 
However, making a mistake during the "translation" is easy. Vasya translated the word s from Berlandish into Birlandish as t. 
    
Help him: find out if he translated the word correctly.

Input
The first line contains word s, the second line contains word t. The words consist of lowercase Latin letters.
The input data do not contain unnecessary spaces. The words are not empty and their lengths do not exceed 100 symbols.

Output
If the word t is a word s, written reversely, print YES, otherwise print NO.
    
#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s[100005], t[100005];
    cin >> s;
    cin >> t;

    int n = strlen(s);

    if (n != strlen(t)) {
        cout << "NO";
        return 0;
    }

    for (int i = 0; i < n; i++) {
        if (s[i] != t[n - 1 - i]) {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}

