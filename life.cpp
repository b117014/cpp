#include<iostream>
using namespace std;

int main()
{
  int arr[100];
  int i=0;
    while(1)
    {
      cin >> arr[i];

      if(arr[i]==42)
      {
        break;
      }
      i++;
    }

    for(int t=0;t<i;t++)
    {
      cout << arr[t]<< endl;
    }

return 0;
}
