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
