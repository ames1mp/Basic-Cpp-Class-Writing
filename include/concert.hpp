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

	/*
	void setConcertName(); 
	void <std::string> setFriends();
	void setDesire();
	void setDate();
	*/


private:
	
	std::string concertName;
	
	std::vector<std::string> friends;
	
	int desire;
	
	tm date;
};













#endif
