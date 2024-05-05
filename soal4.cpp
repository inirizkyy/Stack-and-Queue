#include <iostream>
#include <stack>
using namespace std;

int main() {
    int num;
    cin >> num;
    

    stack<int> a;
    for (int i = 0; i < num; i++) {
        string command;
        cin >> command;
        if (command == "push") {
            int n;
            cin >> n;
            a.push(n);
        } else if (command == "pop" && !a.empty()) {
            a.pop();
        }
        if (!a.empty()) {
            stack<int> show = a;
            while (!show.empty()) {
                cout << show.top() << " ";
                show.pop();
            }
            cout << endl;
        }
    }
    return 0;
}
