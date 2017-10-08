#ifndef CONCERT_H
#define CONCERT_H



class Concert {

public:

	Concert();
	Concert(std::string concertName, std::vector<std::string> friends, int desire>, std::tm date);
	bool Concert::operator<(const Concert& other) const;
	


private:
	
	std::string concertName;
	
	std::vector<std::string> friends;
	
	int desire;
	
	std::tm date;

 
};













#endif
