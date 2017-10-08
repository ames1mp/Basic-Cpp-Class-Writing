#include <vector>
#include <iostream>
#include <algorithm>
#include "concert.hpp"



int main() {

	Concert c1;

	std::cout << c1.getDesire() << std::endl;
	std::cout << c1.getDate().tm_mon << std::endl;



	return 0;
}