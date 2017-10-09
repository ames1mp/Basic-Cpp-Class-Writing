
/***********************************************************************
 	@author Mike Ames
 	@version Fall 2017
***********************************************************************/
#include <vector>
#include <ctime>
#include <string>
#include "concert.hpp"

/***********************************************************************
 	Default constructor. Sets all fields to to null or 0.
***********************************************************************/
Concert::Concert() {

	this->concertName = "";
	this->friends.push_back("");
	this->desire = 0;
	std::tm date = {};
	this->date = date;
}

/***********************************************************************
 	Constructor. Sets fields to the passed in values.
***********************************************************************/
Concert::Concert(std::string concertName, 
	std::vector<std::string> friends, int desire, tm date) {

	this->concertName = concertName;
	this->friends = friends;
	this->desire = desire;
	this->date = date;
}

/***********************************************************************
 	Overload of the < operator. Compares two objects by their date.
 	An earlier date is considered to be less than a later date. Where
 	dates are equal, the objects' desire fields are compared. A higher
 	desire level is considered to be less than a lower one.
 	@return true if the other object is less than 'this' object. False 
 	is returned otherwise.
***********************************************************************/
bool Concert::operator<(const Concert& other) const {

	if(this->date.tm_year < other.date.tm_year)
		return true;
	if(this->date.tm_year > other.date.tm_year)
		return false;
	if(this->date.tm_mon < other.date.tm_mon)
		return true;
	if(this->date.tm_mon > other.date.tm_mon)
		return false;
	if(this->date.tm_mday < other.date.tm_mday)
		return true;
	if(this->date.tm_mday > other.date.tm_mday)
		return false;
	if(this->desire > other.desire)
		return true;
	return false;

}

/***********************************************************************
 	Overload of the << operator. Prints the contents of a concert 
 	object's concertName, desire, and date fields to the console.
 	@return os the modified output stream.
***********************************************************************/
std::ostream& operator<<(std::ostream& os, const Concert& concert) {
	os << concert.getConcertName() << " " 
	<< concert.getDate().tm_mon + 1 
	<< "/" << concert.getDate().tm_mday << "/" 
	<< concert.getDate().tm_year + 1900 << " Desire: " 
	<< concert.getDesire() 
	<< std::endl;
	return os;
}

/***********************************************************************
 	Accessor for the concertName field
 	@return concertName the contents of the object's conertName field.
***********************************************************************/
std::string Concert::getConcertName()const {
	return this->concertName;
}

/***********************************************************************
 	Accessor for the friends field
 	@return friends a vector containing the names of the friends you 
 	want to take to the concert.
***********************************************************************/
std::vector<std::string> Concert::getFriends()const {
	return this->friends;
}

/***********************************************************************
 	Accessor for the desire field
 	@return desire the contents of the object's desire field.
***********************************************************************/
int Concert::getDesire()const {
	return this->desire;
}

/***********************************************************************
 	Accessor for the date field
 	@return date a tm struct containing the date of the concert.
***********************************************************************/
tm Concert::getDate()const {
	return this->date;
}



