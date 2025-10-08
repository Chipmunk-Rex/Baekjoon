#include <iostream>
#include <set>

using namespace std;


void testcase() {
    multiset<int> Q;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        char operChar;
        cin >> operChar;
        int value;
        cin >> value;

        if (operChar == 'I')
            Q.insert(value);
        else 
        {
            if(!Q.empty())
            if (value == 1) {
                multiset<int>::iterator it = prev(Q.end());
                if (Q.find(*it) != Q.end())
                    Q.erase(it);
            }
            else 
            {

                multiset<int>::iterator it = (Q.begin());
                if (Q.find(*it) != Q.end())
                    Q.erase(it);
            }
        }
    }

    if (Q.size() == 0)
        cout << "EMPTY"; else
        cout << *prev(Q.end()) << ' ' << *(Q.begin());
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        testcase();
    }
}
