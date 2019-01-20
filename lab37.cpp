

#include<iostream>
using namespace std;
void ascending(int arr[],int n);
void descend(int arr[],int n);


int main()
{
  int n,arr[100],ch;
  cout << "Enter size of array " << endl;
  cin >> n;
  cout << "Enter element in array" << endl;
  for(int i=0;i<n;i++)
  {
    cin >> arr[i];
  }
  cout << "1 . sort in ascending order"<<endl;
  cout << "2 . sort in descending order" << endl;
  cin >> ch;
  switch(ch){
    case 1 :ascending(arr,n);
           break;
    case 2 :
             descend(arr,n);
            break;

  }
  cout << "after sorting " << endl;
  for(int i=0;i<n;i++)
  {
   cout << arr[i] << " ";
  }

  return 0;
}



// asen_sort.h  file //


void ascending(int arr[],int n)
{
  for(int i=0;i<n-1;i++)
    {

    for(int j=0;j<n-i-1;j++)
    {
       if(arr[j]>arr[j+1])
       {
           int temp;
           temp=arr[j];
           arr[j]=arr[j+1];
           arr[j+1]=temp;

       }
    }
    }


}


//   desce_sort.h file //

void descend(int arr[],int n)
{


  for(int i=0;i<n-1;i++)
    {

    for(int j=0;j<n-i-1;j++)
    {
       if(arr[j]>arr[j+1])
       {
           int temp;
           temp=arr[j];
           arr[j]=arr[j+1];
           arr[j+1]=temp;

       }
    }
    }
  int arr2[100];
  for(int i=0;i<n;i++)
  {
     arr2[i]=arr[n-i-1];
  }
  for(int i=0;i<n;i++)
  {
    arr[i]=arr2[i];
  }
}

