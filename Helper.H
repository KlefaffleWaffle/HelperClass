#ifndef HELPER_H
#define HELPER_H

#include <string>
#include <vector>

using namespace std;

class Helper {
private:
public:

	static int displayYN();
	static int displayChoice(string s, string s2);
	static int displayChoiceVector(vector<string>);

};

#endif