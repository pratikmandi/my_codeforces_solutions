#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    while (n--) {
        string name;
        int before, after;
        cin >> name >> before >> after;
        if (before >= 2400 && after > before) {
            count++;
        }
    }
    if (count)
        cout << "YES";
    else
        cout << "NO";
}