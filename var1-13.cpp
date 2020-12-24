#include <iostream>
#include <string>

using namespace std;

int main()
{
	string n;
	cout << "Enter your number" << endl;
	cin >> n;
	int array[10] = { 0,0,0,0,0,0,0,0,0,0, };
	for (int i = 0; i < n.length(); i++) {
		char ch[2];
		ch[0] = n[i];
		ch[1] = '\0';
		array[atoi(ch)]++;
	}
	for (int i = 9; i >= 0; i--) {
		for (int j = 0; j < array[i] && array[i] != 0; j++) {
			cout << i;
		}
	}
	system("pause");
}