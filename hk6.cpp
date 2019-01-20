
#include <iostream>
#include<cstring>
using namespace std;


class Person{

   protected: string name;
    int age;
    public:
     virtual void getdata()=0;
      virtual void putdata()=0;
};

class Professor: public Person{
    int publication;
    static int id_;
    int dum2;
public:
    void getdata(){
        cin >> name >> age >> publication;
        dum2=id_++;
    }
 void putdata(){
        cout << name << " " << age << " " << publication << " " << dum2 << endl;;
    }
};
int Professor::id_=1;

class Student: public Person{
    static int id;
    int dum;
    int marks[6];
    public:
 void getdata(){
          cin >> name >> age;
          for(int i=0;i<6;i++){
              cin >> marks[i];
          }
          dum=id++;
      }
   void putdata(){
          int sum=0;
          for(int i=0;i<6;i++){
              sum=sum+marks[i];
          }
          cout << name << " "<< age << " " << sum << " " << dum << endl;
      }
};
int Student::id=1;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}

