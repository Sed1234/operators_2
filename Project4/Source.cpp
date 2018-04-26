#include "MyPoint.h"

int main() {
	int x, y, z;
	MyPoint mp (3,4,6);
	std::cin >> mp;
	std::cout << mp<<std::endl;
	int x1 = mp;
	std::cout << x1 << std::endl;
	bool p = mp;
	std::cout << p << std::endl;
	system("pause");
	return 0;
}