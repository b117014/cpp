#include<iostream>
#include<vector>
using namespace std;

int main()
{
 int n,q,col;
  cin >> n >> q;;
 vector<vector<int>> arr(n);
  for(int i=0;i<n;i++)
  {
     cin >> col;
     arr[i]=vector<int>(col);
     for(int j=0;j<col;j++)
     {
        cin >> arr[i][j];
     }
  }
  int r,num;
  for(int i=0;i<q;i++)
  {
     cin >> r >> num;
     cout << arr[r][num] << endl;

  }



return 0;
}
