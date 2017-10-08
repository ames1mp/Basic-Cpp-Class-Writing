#ifndef CONCERT_H
#define CONCERT_H

#include <string>

class Concert {

public:

	Concert();
	Concert(std::string concertName, std::vector<std::string> friends, int desire, tm date);
	bool operator<(const Concert& other) const;

	std::string getConcertName()const; 
	std::vector<std::string> getFriends()const;
	int getDesire()const;
	tm getDate()const;

private:
	
	std::string concertName;
	
	std::vector<std::string> friends;
	
	int desire;
	
	tm date;
};

ostream& operator<<(ostream& os, const Concert& concert) {
	os << concert.concertName << " " << concert.date.tm_mon + 1 
	<< "/" << concert.date.tm_mday << "/" 
	<< concert.date.year + 1900 << " Desire: " << concert.desire 
	<< std::endl;
}











#endif
