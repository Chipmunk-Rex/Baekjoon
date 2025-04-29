#include <iostream>
using namespace std;
#define SIZE 100000
class Stack
{
public:
    void init() {
        this->topIndex = -1;
    }
    void
        push(char ch) {
        if (this->topIndex == SIZE - 1)
        { // 스택이 full 상태
            cout << "Stak" << this->name << " is full \n";
            return;
        }
        topIndex++;
        stackArr[topIndex] = ch;
        // 채우기
    }
    char
        pop() {
        if
            (this->topIndex == -1)
        {
            cout << "Stack " << this->name << " is empty \n";
            return
                0; // 스택이 빈 경우 NULL 반환
        }
        topIndex--;
        return stackArr[topIndex + 1];
        // 채우기
    }
    bool isEmpty() {

        return this->topIndex == -1;
    }

    int topIndex;
    char name;
    char stackArr[SIZE];
};

int main()
{
    Stack s1;
    s1.init();
    int k;
    cin >> k;
    for (int i = 0; i < k; i++) {
        int input;
        cin >> input;
        if (input == 0)
            s1.pop();
        else
            s1.push(input);
    }
    int sum = 0;
    while (!s1.isEmpty()) {
        sum += s1.pop();
    }
    cout << sum;
    return    0;
}