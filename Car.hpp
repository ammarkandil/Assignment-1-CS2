
#include <string>
using namespace std;

class Car{

private:
    string Car_Brand;
    string Car_Type;
    string Car_Plate;
    int speed;
    int Year_Model;
public:
    Car();
    Car(string,int,int);
    
    void setcarbrand(string);
    string getcarbrand ();
    void setcartype(string);
    string getcartype();
    void setcarplate(string);
    string getcarplate();
    void setspeed(int);
    int getspeed();
    void setyearmodel(int);
    int getyearmodel();
    
};

