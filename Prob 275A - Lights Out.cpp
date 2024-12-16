#include <iostream>;
using namespace std;

int main(){
int a1,a2,a3,a4,a5,a6,a7,a8,a9;
int o1,o2,o3,o4,o5,o6,o7,o8,o9;
cin >> a1 >> a2 >> a3;
cin >> a4 >> a5 >> a6;
cin >> a7 >> a8 >> a9;
o1 = (a1+a4+a2+1)%2;
o2 = (a1+a2+a3+a5+1)%2;
o3 = (a2 + a3 + a6 + 1)%2 ;
o4 = (a1+a4+a5+a7 + 1)%2 ;
o5 = (a2+a4+a5+a6+a8+1)%2;
o6 = (a3+a5+a6+a9+1)%2;
o7 = (a4 + a7 + a8 + 1)%2;
o8 = (a5 + a7 + a8 + a9 + 1)%2;
o9 = (a6+a8+a9+1)%2;
cout << o1 << o2 << o3 << endl;
cout << o4 << o5 << o6 << endl;
cout << o7 << o8 << o9 << endl;
return 0;
}
