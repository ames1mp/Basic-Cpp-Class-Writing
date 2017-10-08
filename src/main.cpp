#include <vector>
#include <iostream>
#include <algorithm>
#include <ctime>
#include "concert.hpp"



int main() {
	std::vector<std::string> concertNames = {"Coheed and Cambria",
	"Pink Floyd", "Paul McCartney", "System of a Down", "Eminem",
	"A Day to Remeber", "Walter Trout", "Tech N9ne", "Modest Mouse",
	"Gorillas"};
	
	std::vector<std::string> friends = {"Andrew Bowen", 
	"William McKinley", "Raudel Esparza", "Matt Ames"};

	int year = 100; //117 years since 1900 = 2017
	int mon = 0; //0 months since Jan = January
	int day = 1;

	std::vector<std::tm> dates;
	for (int i = 0; i < 10; ++i) {
		//I looked up rand calls from 
		//http://www.cplusplus.com/reference/cstdlib/rand/
		int day = rand() % 28 + 1;
		int month = rand() % 11;
		int year = rand() % 17 + 100;
		std::tm temp{0,0,0,day,month,year,0,0,0};
		dates.push_back(temp); 
	}

	//same year and month, different days
	std::tm temp1{0,0,0,11,4,117,0,0,0}; //10
	std::tm temp2{0,0,0,15,4,117,0,0,0}; //11
	//same year and day, different months
	std::tm temp3{0,0,0,11,4,117,0,0,0}; //12
	std::tm temp4{0,0,0,11,6,117,0,0,0}; //13
	dates.push_back(temp1);
	dates.push_back(temp2); 
	dates.push_back(temp3);
	dates.push_back(temp4);

	std::vector<Concert> concerts;
	for (int i = 0; i < 10; ++i) {
		int desire = rand() % 10;
		Concert temp{concertNames[i], friends, desire, dates[i]};
		concerts.push_back(temp); 
	}
	//same date different desire
	Concert c1("The Who", friends, 9, dates[0]);
	Concert c2("Led Zepplin", friends, 3, dates[0]);
	//same year and month, different days, same desire
	Concert c3("Bob Dylan", friends, 3, dates[10]);
	Concert c4("GVSU Laker Marching Band", friends, 3, dates[11]);
	//same year and day, different months, same desire
	Concert c5("Psy", friends, 3, dates[12]);
	Concert c6("Ringo Starr", friends, 3, dates[13]);
	concerts.push_back(c1);
	concerts.push_back(c2);
	concerts.push_back(c3);
	concerts.push_back(c4);
	concerts.push_back(c5);
	concerts.push_back(c6);

	for(int i = 0; i < 15; ++i) {
		std::cout << concerts[i];
	}
	std::cout << std::endl;

	std::sort(concerts.begin(), concerts.end());

	for(int i = 0; i < 15; ++i) {
		std::cout << concerts[i];
	}

	return 0;
}