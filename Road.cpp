#include "Road.hpp"
#include "Car.hpp"
#include <string>
#include <iostream>
using namespace std;


Road::Road(){
    
}
Road::Road(char rd,int sl){
    Road_Type=rd;
    Speed_Limit=sl;
    
}
void Road::setroadtype(char x){
    Road_Type=x;
}
char Road::getroadtype() {
    return Road_Type;
}
void Road::setspeedlimit(int x) {
    Speed_Limit = x;
}
int Road::getspeedlimit() {
    return Speed_Limit;
}
void Road::setcounta(<#int#> c) {
    CountA = c;
}
int Road::getcounta() {
    return CountA;
}
void Road::setcountb(<#int#> z) {
    CountB = z;
}
int Road::getcountb() {
    return CountB;
}
void Road::setcountc(<#int#> q) {
    CountC = q;
}
int Road::getcountc() {
    return CountC;
}

bool Road::Radar(int Car_Speed, char Road_Type){
    if(Car_Speed>getspeedlimit()){
        cout<<"Car Brand: "<<c.getcarbrand()<<endl;
        cout<<"Car Type: "<<c.getcartype()<<endl;
        cout<<"Car Model Year: "<<c.getyearmodel();
        cout<<"Plates: "<<c.getcarplate()<<endl;
        cout<<"Speed: "<<Car_Speed<<endl;
        cout<<"This car will be fined";
        return true;
    }
    else{
        return false;
    }
}

void Road::allow(string car_type){
     
        if(car_type == "Motorcycle" || car_type == "Private" ){
        cout<<"Road A"<<endl;
            int temp;
            temp=getcounta()+1;
            setcounta(temp);
    }
    else if (car_type == "Trucks") {
        cout<< "Road C"<<endl;
        int temp;
        temp=getcountc()+1;
        setcountc(temp);
        
    }
    else {
        cout<< "Road B"<<endl;
        int temp;
        temp=getcountb()+1;
        setcountb(temp);   
    }
    }
int Road::age(int yearmodel){
    int age;
    age=2022-yearmodel;
    return age;
}


