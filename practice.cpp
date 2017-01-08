
#include "stdafx.h"

#include <iostream>
#include <sstream>
#include <vector>

typedef short int16;
typedef unsigned short uint16;
typedef int int32;
typedef unsigned int uint32;

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

class darts{
private:
	uint16 width;
	uint16 height;

public:
	uint16 getWidth() { return width; }
	uint16 getHeight() { return height; }
	darts::darts(){
		width = 10;
		height = 10;
	}
};

int practice_main(){
	vector<int32> test;
	string str;
	uint16 cnt;

	darts dart;

	test.push_back(1);
	test.push_back(-1);
	test.push_back(-1);
	test.push_back(-2);

	for (auto itr = test.begin(); itr != test.end(); itr++){
		cout << *itr << endl;
	}

	auto first = test.begin();
	auto last = test.end();

	cnt = std::count(test.begin(), test.end(), 1);
	cout << cnt << endl;

	cout << dart.getWidth() << endl;

	getline(cin, str);

	return 0;
}