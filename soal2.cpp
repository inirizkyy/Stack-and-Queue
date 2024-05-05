#include <iostream>
using namespace std;

int main() {
    int a;
    cin >> a;
    
    int arr[a];
    for(int i = 0; i < a; i++) {
        cin >> arr[i];
    }
    
    for(int i = 1; i < a; i += 2) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
