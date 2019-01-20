#include<iostream>
using namespace std;

class matrix{
        int **p;
        int d1,d2;
        public:
           matrix(int x,int y){
                  d1=x;
                  d2 = y;
                  p= new int *[d1];
                  for(int i=0;i<x;i++)
                  {
                    p[i]=new int [d2];
                  }
           }
           void get(int i,int j,int value){
                  p[i][j]=value;
           };
           int &put(int i,int j){
             return p[i][j];
           }
           ~matrix(){
               for(int i=0;i<d1;i++)
               {
                  delete []p[i];
               }
               delete []p;
           }
};

int main(){

int x,y;
cin >> x >> y;
   matrix m(x,y);
   for(int i=0;i<x;i++)
   {
     for(int j=0;j<y;j++)
     {
     int value;
         cin >> value;
         m.get(i,j,value);
     }

   }
    cout<<m.put(1,2);
    return 0;
}
