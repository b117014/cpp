#include<iostream>
using namespace std;

int main()
{

  char arr[9][6]={"one","two","three","four","five","six","seven","eight","nine"};

  int a,b,i;
  cin >> a >> b;

  if(a<=9 && b<=9){
    for(i=a;i<=b;i++){
    cout << arr[i-1] << endl;

    }
  }
  else if(a<=9)
  {
       for(i=a;i<=9;i++)
       {
        cout << arr[i-1] << endl;
       }
  }
   i=10;

       for(int x=i;x<=b;x++)
       {
         if(x%2 == 0)
         {
          cout << "even" << endl;
         }else{
           cout << "odd" << endl;
         }
       }



  return 0;


}
