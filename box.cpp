#include<iostream>
#include<cstring>
using namespace std;

class box{
    int l,b,h;
    public :
     box(int a=0,int x=0,int c=0):l(a),b(x),h(c){}
     box(box const &k)
     {
         l=k.l;
         b=k.b;
         h=k.h;
     }
     int getLength(){
        return l;
     }
     int getBreadth()
     {
        return b;

     }
     int getHeight(){
        return h;
     }
     int calculateVolume(){
          return (l*b*h);
     }

     bool operator<(box &t)
     {
        if(this->l<t.l)
        {
          return true;
        }
        else if(this->b<t.b && this->l==t.l)
        {
          return true;
        }
        else if(this->h<t.h && this->l==t.l && this->b==t.b)
        {
        return true;
        }
        else{

         return false;
        }
     }

    friend  ostream & operator << (ostream &dout,box &m);

};

ostream & operator << (ostream &dout,box &m){
        dout << "l= " << m.l << "  b= " << m.b << "  h= " << m.h << endl;
        return dout;
     }
int main()
{
 int ch;
 cout << "enter choice " << endl;
 cin >> ch;
 box temp(5,6,7);
 if(ch==1)
 {
  cout << temp << endl;
 }
 if(ch==2)
 {
   int p,q,r;
   cin >> p >> q >> r;
   box newbox(p,q,r);
   box temp=newbox;
   cout << temp;

 }
 if(ch==3)
 {
  int p,q,r;
   cin >> p >> q >> r;
   box newbox(p,q,r);
   if(temp<newbox)
   {
     cout << "lesser" << endl;
   }else{
      cout << "greater" << endl;
   }

 }
 if(ch==4)
 {
   cout << temp.calculateVolume()<< endl;
 }
 if(ch==5)
 {
   box newbox(temp);
   cout << newbox << endl;
 }

 return 0;

}
