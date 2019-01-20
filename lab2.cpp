#include<iostream>
#include<cstring>
using namespace std;

class Customers{
   private :  int account_number;
   int balance_amount;
      string PAN_number;

   public:
        Customers(int x,int y,string z):account_number(x),balance_amount(y),PAN_number(z){}
          void display(){
              cout << "account_number" << account_number <<endl;
              cout << "balance_amount=" << balance_amount << endl;
              cout << "PAN_number= "<< PAN_number << endl;
          }
};



int main()
{
int x;
   int y;
   string z;
   int t;
   cout << "enter no. of customer" << endl;
   cin >> t;
   for(int i=0;i<t;i++){
  cout << "enter acount_no."<< endl;
  cin >> x;

   cout << "enter balance amount"<< endl;
   cin >> y;
   cout << "enter pan no." << endl;
   cin >> x;
   Customers bo(x,y,z);
   bo.display();
   }
   return 0;


}
