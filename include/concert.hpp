#ifndef CONCERT_H
#define CONCERT_H



class Concert {

public:

	Concert();
	Concert(std::String concertName, std::vector<std::String> friends, int desire, tm date);
	bool Concert::operator(const Concert& other) const;
	


private:
	
	std::string concertName;
	
	std::vector<std::String> friends;
	
	int desire;
	
	tm date;
};













#endif
