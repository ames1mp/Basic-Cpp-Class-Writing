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

bool Concert::operator<(const Concert& other) const {

	if(this->date.tm_year < other.date.tm_year)
		return true;
	if(this->date.tm_year > other.date.tm_year)
		return false;
	if(this->date.tm_mon < other.date.tm_mon)
		return true;
	if(this->date.tm_mon > other.date.tm_mon)
		return false;
	if(this->date.tm_mday > other.date.tm_mday)
		return true;
	if(this->date.tm_mday > other.date.tm_mday)
		return false;
	if(this->desire > other.desire)
		return false;
	return true;

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



