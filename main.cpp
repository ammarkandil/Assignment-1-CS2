#include "Car.hpp"
#include "Road.hpp"
#include "Queues.hpp"
#include <iostream>
using namespace std;

int main() {
   
    Car Truck;
    Car Bus;
    Car MC;
    queue q;
    Road r;
    
    q.enqueue(Truck);
    q.enqueue(MC);
    q.enqueue(Bus);
    
    while(!q.isEmpty()){
        Car temp;
        temp=q.dequeue();
        
        r.Radar(temp.getspeed(), r.getroadtype());
        r.allow(Truck.getcartype());
    
        
    
    
    
    
  
}
    if(r.getcounta()>r.getcountb() && r.getcounta()>r.getcountc()){
        int ta,tb,tc;
        ta=r.getcounta();
        tb=r.getcountb();
        tc=r.getcountc();
        cout<<"Road A efficency is"<<(ta/ta)*100<<endl;
        cout<<"Road B efficency is"<<(tb/ta)*100<<endl;
        cout<<"Road C efficency is"<<(tc/ta)*100<<endl;
    }
    else if(r.getcountb()>r.getcounta() && r.getcountb()>r.getcountc()){
            int ta,tb,tc;
            ta=r.getcounta();
            tb=r.getcountb();
            tc=r.getcountc();
            cout<<"Road A efficency is"<<(ta/tb)*100<<endl;
            cout<<"Road B efficency is"<<(tb/tb)*100<<endl;
            cout<<"Road C efficency is"<<(tc/tb)*100<<endl;
    }
    else{
        int ta,tb,tc;
        ta=r.getcounta();
        tb=r.getcountb();
        tc=r.getcountc();
        cout<<"Road A efficency is"<<(ta/tc)*100<<endl;
        cout<<"Road B efficency is"<<(tb/tc)*100<<endl;
        cout<<"Road C efficency is"<<(tc/tc)*100<<endl;
    }
}
