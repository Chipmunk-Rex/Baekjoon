#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main()
{
    stack<int> s;
    string input;
    getline(cin, input);
    while (input != ".") {
        bool isFail = false;
        for (int j = 0; j < input.length(); j++) {

            switch (input[j])
            {
            case '(':
                s.push(0);
                break;
            case '[':
                s.push(1);
                break;
            case ')':
                if (s.size() != 0 && s.top() == 0) {
                    s.pop();
                }else
                    isFail = true;
                break;
            case ']':
                if (s.size() != 0 && s.top() == 1) {
                    s.pop();
                }
                else
                    isFail = true;
                break;
            }
        }
        cout << (s.size() == 0 && isFail == false ? "yes" : "no") << endl;
        s = stack<int>();
        getline(cin, input);
    }
    return    0;
}