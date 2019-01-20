#include<iostream>
using namespace std;

class student{
    protected:int id,marks;
    public:
      student(){
       cout << "enter id"<< endl;
      cin >> id;
      cout << "enter marks" << endl;
      cin >> marks;
      }
      void display(){
        cout << "your id is= "<< id << endl;
        cout << "your marks is= "<< marks << endl;

      }



};


int main()
{
   int n;

   cout << "enter array size of odject" << endl;
   cin >> n;

   student *ptr= new student[n];
   for(int i=0;i<n;i++)
   {
      ptr[i];

   }
   for(int i=0;i<n;i++)
   {
     ptr[i].display();
   }

   delete []ptr;
   return 0;

}
