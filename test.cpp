#include <bits/stdc++.h>
using namespace std;

int main(){
	int r, c, arr[10][10], s[10];
	cin >> r >> c;
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			cin >> arr[i][j];
		}
	}
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	for(int i = 0; i < r; i++){
		s[i] = 0;
		for(int j = 0; j < c; j++){
			s[i] += arr[i][j];
		}
	}
	for(int i = 0; i < r; i++){
		cout << s[i] << " ";
	}
	return 0;
}

