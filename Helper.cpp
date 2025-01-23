
#include "Helper.h";
#include <iostream>
using namespace std;


int Helper::displayYN() {
	cout << "1. Yes\n2. No\n\n";
	int x;
	cin >> x;
	return x;
}

int Helper::displayChoice(string s1, string s2) {
	cout << "1. " << s1 << "\n2. " << s2 << "\n\n";;
	int x;
	cin >> x;
	return x;
}

int Helper::displayChoiceVector(vector<string> v) {

	for (int i = 0; i < v.size(); i++) {
		cout << (i + 1) << ". " << v.at(i) << "\n";
	}
	cout << "\n";

	int x;
	cin >> x;
	return x;
}

