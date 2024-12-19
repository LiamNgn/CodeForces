#include <iostream>
using namespace std;

int main(){
	std::string dna;
	cin >> dna;
	int max_len = 1;
	int curr_len = 1;
	int length_dna = dna.length();
	char prev_tmp;
	prev_tmp = dna[0];
	for (int i = 1; i < length_dna; ++i){
		if (dna[i] == prev_tmp){
			curr_len += 1;
			if (curr_len > max_len){
				max_len = curr_len;
			}

		}
		else if (dna [i] != prev_tmp){
			prev_tmp = dna[i];
			curr_len = 1;
		}


	}
	cout << max_len;
}
