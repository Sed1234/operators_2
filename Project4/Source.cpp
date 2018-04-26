#include "MyPoint.h"
#include "Circle.h"
#include "Airplane.h"

int main() {
	/*int x, y, z;
	MyPoint mp (3,4,6);
	std::cin >> mp;
	std::cout << mp<<std::endl;
	int x1 = mp;
	std::cout << x1 << std::endl;
	bool p = (int)mp;
	std::cout << p << std::endl;*/
	/*Circle c1(5);
	Circle c2(5);

	bool v = (c1 == c2);
	std::cout << v << std::endl;*/

	Airplane air1, air2;
	air1.type = "Boeng";
	air1.counter = 10;
	air1.max_pasengers = 1000;
	air2.type = "TU154";
	air1.max_pasengers = 750;
	std::cout << (air1.type == air2.type)<<std::endl;
	air1.counter++;
	std::cout << air1.counter << std::endl;
	std::cout << (air1.max_pasengers > air2.max_pasengers) << std::endl;
	system("pause");
	return 0;
}