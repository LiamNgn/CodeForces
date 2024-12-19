#include <iostream>
using namespace std;

int main(){
	int64_t n;
	int64_t partial_sum = 0;
	int64_t total_sum;
	int64_t missing;
	cin >> n;
	int64_t temp;
	total_sum = n*(n+1)/2;
	for (int i = 1; i < n; i++){
	cin >> temp;
	partial_sum += temp;
	}
	missing = total_sum - partial_sum;
	cout << missing;
}
