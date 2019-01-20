#include<iostream>
using namespace std;

class point{
    protected : double x,y;
    public:
        virtual void find_length()=0;

};

class line:public point{
     protected : double res;

    public:
        void find_length(point a,point b){
               res = sqrt((a.y-b.y)*(a.y-b.y) + (a.x-b.x)*(a.x-b.x));
               cout << "length is : "<< res;
        }


};

class triangle:public line{
  protected : double res2;
     public :
       void find_length(point a,point b,point c)
             {

             }


}
