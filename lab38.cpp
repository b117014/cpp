#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main()
{
   int n;
   double price;
   string code,name;
   cout << "Enter no. of times"<< endl;
   cin >> n;
   ofstream out;
   out.open("product",ios::app);
   for(int i=0;i<n;i++)
   {
      cout << "Enter price : ";
      cin >> price;
      cout << "Enter name : ";
      cin >> name;
      cout << "Enter code : ";
      cin >> code;
            out << name << ",";

      out << price << ",";
      out << code << endl;
   }
  out.close();
  ifstream in;
  string line;
  in.open("product");
  while(in)
  {
      in>> line;
      cout << line << endl;
  }
  in.close();
  return 0;

}
