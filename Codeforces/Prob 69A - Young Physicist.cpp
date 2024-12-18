// https://codeforces.com/problemset/problem/69/A
#include <iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    int theInputNumbers[n];
    int sum_a = 0;
    int sum_b = 0;
    int sum_c = 0;
    int a,b,c;
    
    for(int i = 0; i<n; ++i) {
        cin >> a >> b >> c;
        sum_a += a;
        sum_b += b;
        sum_c += c;
    };
    if (sum_a == 0 && sum_b == 0 && sum_c ==0){
        cout << "YES";
    } 
    else {
        cout << "NO";
    }
}