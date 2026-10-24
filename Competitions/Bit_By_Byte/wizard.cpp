
#include <iostream>
#include <stack>
#include <map>
#include <string>

using namespace std;

int main() {
    map<char, char> pairs = {
        {'{', '}'},
        {'(', ')'},
        {'[', ']'}
    };

    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        stack<char> brackets;

        string s;
        cin >> s;

        bool dangerous = false;

        for (char c : s) {
            switch (c) {
                case '{':
                case '[':
                case '(':
                    brackets.push(pairs[c]);
                    break;

                case '}':
                case ']':
                case ')':
                    if (brackets.empty() || brackets.top() != c) {
                        dangerous = true;
                    } else {
                        brackets.pop();
                    }
                    break;
            }

            if (dangerous) {
                break;
            }
        }

        if (!brackets.empty()) {
            dangerous = true;
        }

        cout << (dangerous ? "DANGEROUS" : "SAFE") << '\n';
    }

    return 0;
}