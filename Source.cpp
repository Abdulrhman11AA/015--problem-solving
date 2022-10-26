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
/*
Another way 

#include <iostream>
using namespace std;
int main() {
 
	char mat[5][5];
	int counter=0,one=0;
	for (int i = 0; i <5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> mat[i][j];
			counter++;
			if (mat[i][j] == '1') {
				one = counter;
			}
		}
	}
	if (one == 13)cout << "0";
	return 0;
	(one > 13) ? cout << one - 13 :  cout << 13 - one;
 
	return 0;
}
*/
