
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
