//https://codeforces.com/problemset/problem/266/B
#include <iostream>
using namespace std;

int main(){
int n_children,time_transformed;
string queue;
cin >> n_children >> time_transformed;
cin >> queue;
for (int i =0; i < time_transformed; ++i){
  for (int j = 0; j < n_children; ++j){
 	if (queue[j] == 'B' && queue[j+1] == 'G'){
		queue[j] = 'G';
		queue[j+1] = 'B';
		++j;
		}else{
		continue;}
  }
	}
cout << queue;
}
