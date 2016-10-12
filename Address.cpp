#include "Address.h"

Address::Address(std::string city, std::string country, int streetNumber, std::string streetName) {
    this->city = city;
    this->country = country;
    this->streetNumber = streetNumber;
    this->streetName = streetName;
}
Address::~Address(){
}
std::string Address::getCity(){ return this->city; }
std::string Address::getCountry(){ return this->country; }
int Address::getStreetNumber(){ return this->streetNumber; }
std::string Address::getStreetName(){ return this->streetName; }

void Address::setCity(std::string city){ this->city = city; }
void Address::setCountry(std::string country){ this->country = country; }
void Address::setStreetNumber(int streetNumber){ this->streetNumber = streetNumber; }
void Address::setStreetName(std::string streetName){ this->streetName = streetName; }

void Address::printAddress() {
	std::cout << this->streetNumber << " " << this->streetName << std::endl;
	std::cout << this->city << ", " << this->country << std::endl;
}