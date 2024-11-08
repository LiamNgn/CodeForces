// https://codeforces.com/problemset/problem/263/A

#include <iostream>
#include <cstdlib>

using namespace std;
int main() {
    int n = 5;
    int a1,a2,a3,a4,a5;
    for(int i = 0; i<n; ++i) {
        cin >> a1 >> a2 >> a3 >> a4 >> a5;
        if (a1 == 1){
            cout << abs(2 - i) + abs(1 - 3);
        }
        else if (a2 == 1){
            cout << abs(2 - i) + abs(2-3);
        }
        else if (a3 == 1){
            cout << abs(2 - i) + abs(3 - 3);
        }
        else if (a4 == 1){
            cout << abs(2-i) + abs(4-3);
        }
        else if (a5 == 1){
            cout << abs(2 - i) + abs(5-3);
        }
        else{
            continue;
        }
    };

}