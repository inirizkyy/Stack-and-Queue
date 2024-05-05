#include <iostream>
#include <queue>
using namespace std;

int main() {
    int num;
    cin >> num;
    

    queue<int> q;
    for (int i = 0; i < num; i++) {
        string command;
        cin >> command;
        if (command == "push") {
            int n;
            cin >> n;
            q.push(n);
        } else if (command == "pop" && !q.empty()) {
            q.pop();
        }
        if (!q.empty()) {
            queue<int> show = q;
            while (!show.empty()) {
                cout << show.front() << " ";
                show.pop();
            }
            cout << endl;
        }
    }
    return 0;
}
