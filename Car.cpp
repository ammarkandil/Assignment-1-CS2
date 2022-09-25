#include "Car.hpp"
#include <string>
#include <iostream>
using namespace std;

Car::Car(){
    
}

Car::Car(string C,int MS,int Y){
    Car_Brand = C;
    speed = MS;
    Year_Model = Y;
}
void Car::setcarbrand(<#string#> x) {
    Car_Brand = x;
    
}
string Car::getcarbrand() {
    return Car_Brand;
}

void Car::setcartype(string a) {
    Car_Type = a;
    
}
string Car::getcartype() {
    return Car_Type;
}

void Car::setcarplate(<#string#> b) {
    Car_Plate =b;
}
string Car::getcarplate() {
    return Car_Plate;
}
void Car::setspeed(int c) {
    speed = c;
}
int Car::getspeed () {
    return speed;
}
void Car::setyearmodel(<#int#> z) {
    Year_Model = z;
}
int Car::getyearmodel() {
    return Year_Model;
}
