#include<iostream>
using namespace std;
static int top=-1;
template<class T>
class stacke
{

   T arr[100];
  public:
     void push(T x)
        {

          top=top+1;
          arr[top]=x;

        }
    void pop()
    {
       T k=arr[top];
       top=top-1;
       cout << k << " : " << " deleted" << endl;

    }

    void display()
    {
      cout << " elment is : ";
      for(int i=0;i<=top;i++)
      {
       cout << arr[i] << " ";

      }
      cout << endl;

    }

};


int main()
{
 stacke <int> ob;
  int ch;
  while(1)
  {

  cout << "1 . Push element "<< endl;
  cout << "2 . Pop element " << endl;
  cout << "3 . Display total elements " << endl;
  cout << "4 . Exit" << endl;
  cin >> ch;
  switch(ch)
  {
      case 1 :
              int a;
              cout << "Enter data : ";
              cin >> a;
              ob.push(a);
              break;
      case 2 :
              ob.pop();
              break;
      case 3 :
              ob.display();
              break;
      case 4 :
             exit(0);

  }
  }
  return 0;

}
