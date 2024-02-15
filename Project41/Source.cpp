#include <iostream>

using namespace std;

int main() {
	int n = 20;
	double d = 2.5;
	float f = 2.5;
	string s = "string";
	char c = 'q';
	bool b = true;
	cout << sizeof(n) << endl;
	cout << sizeof(d) << endl;
	cout << sizeof(f) << endl;
	cout << sizeof(s) << endl;
	cout << sizeof(c) << endl;
	cout << sizeof(b) << endl;

	//pointer

	int* pn;
	double* pd;
	float* pf;
	string* ps;
	char* pc;
	bool* pb;

	cout << sizeof(pn) << endl;
	cout << sizeof(pd) << endl;
	cout << sizeof(pf) << endl;
	cout << sizeof(ps) << endl;
	cout << sizeof(pc) << endl;
	cout << sizeof(pb) << endl;
	return 0;
}