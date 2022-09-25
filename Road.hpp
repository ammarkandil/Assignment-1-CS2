#include "Car.hpp"
#include <string>
using namespace std;

class Road{
private:
    char Road_Type;
    int Speed_Limit;
    int CountA;
    int CountB;
    int CountC;
    
public:
    Road();
    Road(char,int);
    void setroadtype(char);
    char getroadtype ();
    void setspeedlimit(int);
    int getspeedlimit();
    void setcounta (int);
    int getcounta ();
    void setcountb (int);
    int getcountb ();
    void setcountc (int);
    int getcountc ();
    
    bool Radar(int, char);
    void allow(string);
    int age (int);
    Car c;
};

