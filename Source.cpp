#include <iostream>
using namespace std;
int main() {

	char mat[5][5];
	int counter=0,one=0,ii=0,jj=0;
	for (int i = 0; i <5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> mat[i][j];
			if (mat[i][j] == '1') ii = i, jj = j;
			
		}
	}
	bool x = true;
	while (x) {
		if (ii == 2 && jj == 2) {
			cout << counter;
			break;
		}
		if (ii > 2) {
			while (ii != 2) {
				ii--;
				counter++;
			}
		}
		if (ii < 2) {
			while (ii!= 2) {
				ii++;
				counter++;
			}
		}
		if (jj > 2) {
			while (jj != 2) {
				jj--;
				counter++;
			}
		}
		if (jj < 2) {
			while (jj != 2) {
				jj++;
				counter++;
			} 
		}
	}

	return 0;
}
