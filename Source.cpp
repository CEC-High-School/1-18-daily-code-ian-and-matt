#include <iostream>
using namespace std;
int answer;
int main() {
	cout << "How many HASHTAGS do you want?" << endl;
	cin >> answer;
	for (int i = 0; i < answer; i++) {
		for (int k = 0; k < answer; k++)
			cout << "#";
		cout << endl << endl;
	}






}