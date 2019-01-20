#include<iostream>
using namespace std;

bool Books(int P[], int n, int mid, int m){
    int sum = 0, ct = 1;
    for(int i = 0; i < n; i ++){
        sum += P[i];
        if(sum > mid){
            ct ++;
            sum = P[i];
        }
    }
    return (ct <= m);
}

int main()
{

 int n;  // no. of books
 int m; //no. of students
 cin >> n >> m;

 int arr[100];
 int maxvalue=0,total=0;
 for(int i=0;i<n;i++)
 {
     cin >> arr[i];
     total=total+arr[i];
     maxvalue=max(maxvalue,arr[i]);

 }

 int start=maxvalue,last=total;
 while(start<last)
 {
   int mid=(start+last-maxvalue)/2;

   if(Books(arr,n,mid,m))
   {

      last=mid;
   }
   else{
     start=mid+1;
   }

 }
  cout << last << endl;
  return 0;

}
