#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;

int main()
{
string s[20],temp;
int n;
cout <<"enter no. of file" << endl;
cin >> n;
cout << "Enter file name" << endl;
  for(int i=0;i<n;i++)
  {
    cin >> s[i];
  }


for(int i=0;i<n-1;i++)
{
   for(int j=0;j<n-i-1;j++)
   {
      if(s[j]>s[j+1])
      {
      temp=s[j+1];
       s[j+1]=s[j];
       s[j]=temp;

      }
   }
}
       for(int i=0;i<n;i++)
       {
          ofstream file;
          file.open(s[i]+".txt");
          file.close();
        }
   cout << "lexicographic sorting" << endl;
    for(int i=0;i<n;i++)
    {
      cout << s[i] <<".txt" << endl;
    }

    string serch;

    cout <<"Enter file name which you want to search" << endl;
    cin >> serch;
    for(int i=0;i<n;i++)
    {
      if(s[i]==serch)
      {
      cout << "location of your file is : " << i+1 << endl;
      }
    }
  return 0;

}
