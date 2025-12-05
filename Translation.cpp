#include <iostream>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;
    string rev = "";
    for (int i = s.length() - 1; i >= 0; i--) {
        rev += s[i];
    }

    if (rev == t)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}