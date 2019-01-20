#include<iostream>

using namespace std;

class cases{
   public: unsigned int caseid;
           char activity;
     public:

         void get(){
             cout << "enter case id" <<endl;
             cin >> caseid;
             cout << "enter activity" <<endl;
             cin >> activity;

         }

};


int main()
{
int n;
  cases ob[50];
   cout << "enter no. of arr" << endl;
   cin >> n;
   for(int i=0;i<n;i++)
   {
     ob[i].get();

   }

int arr[10];

for(int i=0;i<n-1;i++)
{
   for(int j=0;j<n-i-1 ;j++)
   {
      if(ob[j].caseid > ob[j+1].caseid)
           {
                int t;
                  t=ob[j].caseid;
                  ob[j+1].caseid=ob[j].caseid;
                  ob[j].caseid=t;

           }

   }
}

 int j=0,ct=1;

   for(int i=0;i<n;i++)
   {

       if(ob[i].caseid==ob[i+1].caseid)
       {
         ct=ct+1;
       }

       else{
           ct=1;
           j++;
       }
        arr[j]=ct;

   }
   cout << "case is =" << j << endl;
   for(int t=0;t<j;t++){
       if(arr[0]==0)
       {
         arr[0]=1;
       }
   cout << "length =" << arr[t] << " ";
   }

return 0;
}

