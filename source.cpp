#include <iostream>
#include <map>
#include <queue>
using namespace std;



int main() {
    char a[100001];
    cin >> a;

    queue <char> ds;

    map <char, bool> b;
    for (int i = 0; a[i] != '\0'; i++) {
        if (b[a[i]] == true)
            continue;
        else {
            ds.push(a[i]);
            b[a[i]] = true;
        }
    }

    while (ds.size() != 0) {
        cout << ds.front();
        ds.pop();
    }
    return 0;
}