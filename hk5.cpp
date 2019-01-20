#include<iostream>
using namespace std;

class Box{
     int l,b,h;

  public:
     Box():l(0),b(0),h(0){}
     Box(int x,int y,int z):l(x),b(y),h(z){}
     Box(const Box& cp){
        this.l=cp.l;
        this.b=cp.b;
        this.h=cp.h;
     }
     int getLength(){
       return l;
     }
     int getBreadth(){
       return b;
     }
     int getHeight(){
       return h;
     }
    long long CalculateVolume(){
       return (l*b*h);
    }

    void operator <(Box &B){

    }

};
