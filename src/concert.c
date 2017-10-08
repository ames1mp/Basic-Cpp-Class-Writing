#include <vector>
#include <ctime>
#include "concert.hpp"

Concert::Concert() {

	this->concertName = "";
	this->friends.push_back("");
	this->desire = 0;
	this->date = struct std::tm {};


}

Concert::Concert(std::string concertName, std::vector<std::string> friends, int desire>, std::tm date) {

	this->concertName = concertName;
	this->friends = friends;
	this->desire = desire;
	this->date = date;
}

