#include "Address.h"

Address::Address(){}

Address::Address(std::string streetNumber, std::string streetName, std::string city, std::string country) {
    this->streetNumber = streetNumber;
    this->streetName = streetName;
    this->city = city;
    this->country = country;
}

Address::~Address(){}

std::string Address::getCity(){ return this->city; }
std::string Address::getCountry(){ return this->country; }
std::string Address::getStreetNumber(){ return this->streetNumber; }
std::string Address::getStreetName(){ return this->streetName; }

void Address::setCity(std::string city){ this->city = city; }
void Address::setCountry(std::string country){ this->country = country; }
void Address::setStreetNumber(std::string streetNumber){ this->streetNumber = streetNumber; }
void Address::setStreetName(std::string streetName){ this->streetName = streetName; }

void Address::printAddress() {
	std::cout << this->streetNumber << " " << this->streetName << std::endl;
	std::cout << this->city << ", " << this->country << std::endl;
}

std::string Address::formate() {
    std::string result = "";
    result += this->streetNumber + ":" + this->streetName + ":" + this->city + ":" + this->country;
	return result;
}
