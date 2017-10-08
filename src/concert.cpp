#include <vector>
#include <ctime>
#include <string>
#include "concert.hpp"

Concert::Concert() {

	this->concertName = "";
	this->friends.push_back("");
	this->desire = 0;
	std::tm date = {};
	this->date = date;


}

Concert::Concert(std::string concertName, std::vector<std::string> friends, int desire, tm date) {

	this->concertName = concertName;
	this->friends = friends;
	this->desire = desire;
	this->date = date;
}

std::string Concert::getConcertName()const {
	return this->concertName;
}

std::vector<std::string> Concert::getFriends()const {
	return this->friends;
}

int Concert::getDesire()const {
	return this->desire;
}

tm Concert::getDate()const {
	return this->date;
}



