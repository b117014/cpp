#include<iostream>
#include<cstring>
using namespace std;

class user{
   protected : static int x;

   string fname;
   string lname;
   string email;
   string mob;
   string user_name;
   string pass_word;
   int seat;
   public :
      void get();




};

class login{
   protected : string password,username;
    public : void getuser()
    {
      cout << "Enter username : ";
      cin >> username;
      cout << "Enter Password : ";
      cin >> password;
    }
};
int user:: x=0;

void user::get()
{
  cout << "Enter first name : ";
  cin >> fname;
  cout << "Enter last name : ";
  cin >> lname;
  cout << "Enter mobile no. : ";
  cin >> mob;
  cout << "Email Id : ";
  cin >> email;
  cout << "Enter username : ";
  cin >> user_name;
  cout << "Enter password : ";
  cin >> pass_word;

}
static int p=0;
static int y=1;

class res:public user , public login{

   char busn[10];
   char arr_t[5];
   char dep_t[5];
   char from[100];
   char to[100];




   public :

     void Add();
     void allotment();
     void avail();
     void display();




}bus[10][32];

void res::Add()
{
   cout << "Enter bus no. : ";
   cin >> bus[p][0].busn;
   cout << "Enter arrival time : ";
   cin >> bus[p][0].arr_t;
   cout << "Enter Departure time : ";
   cin >> bus[p][0].dep_t;
   cout << "from : ";
   cin >> bus[p][0].from;
   cout << "To : ";
   cin >> bus[p][0].to;
   p++;

}

void res:: allotment()
{
 int t;
 char num[10];
 cout << "Enter bus no. which you want to travell : ";
 cin >> num;

 for(t=0;t<=p;t++)
 {
   if(strcmp(bus[t][0].busn,num)==0)
   break;

 }
 int st;
 while(t<=p)
 {
   cout << "Enter seat no. : ";
   cin >> st;
   bus[t][y].seat=st;
   if(st>0 && st<=32)
   {
      bus[t][y].get();
      y++;
      x++;
      break;

   }
   else{
     cout << "This seat is reserved try another seat " << endl;
   }

 }

 if(t>p)
 {
  cout << "Your bus no. is not correct " << endl;

 }



}





void res::avail()
{
   for(int i=0;i<=p;i++)
   {
      cout << "Bus no. : " << bus[i][0].busn << endl;
    cout << "arrived time : " << bus[i][0].arr_t  << "             departure time : " << bus[i][0].dep_t << endl;
    cout << "from : " << bus[i][0].from << "                to : " << bus[i][0].to << endl;


    cout <<"*" << endl;

   }

}

void res::display()
{
int a1[100],a2[100],m,k,i=0;
    for(t=0;t<=p;t++)

    {
      for(k=0;k<y;k++)
      {
       if(username == bus[t][k].user_name && password==bus[t][k].pass_word)
       {
         a1[i]=t;
         a2[i]=k;
         i++;
        break;
       }
       }
    }
    for(k=0;k<i,k++){
    if(username == bus[l][m].user_name && password==bus[l][m].pass_word)
     {
       cout << "Name : " << bus[a1[k]][m].fname << " " << bus[l][m].lname << endl;
     cout << "Bus no. : " << bus[l][0].busn << endl;
    cout << "arrived time : " << bus[l][0].arr_t  << "             departure time : " << bus[l][0].dep_t << endl;
    cout << "from : " << bus[l][0].from << "                to : " << bus[l][0].to << endl;
    cout << "Seat no. : " << bus[l][m].seat << endl;

    cout <<"*" << endl;
     }
     else{
       cout << "you don't have any ticket "<< endl;
     }

}

int main()
{
  int ch;
while(1)
{ cout << "1 . user "<< endl;
  cout << "2 . Add any Bus details " << endl;
  cout << "3 . Total Bus available" << endl;
  cout << "4 . Reservation"<< endl;

  cout << "5 . exit" << endl;
  cin >> ch;


  switch(ch)
  {
   case 1 : bus[p][y].getuser();
            bus[p][y].display();
            break;

   case 2 :
       bus[p][0].Add();
       break;
   case 3 :
       bus[p][0].avail();
       break;
   case 4 :
       bus[p][0].allotment();
       break;

   case 5 :
    exit(0);
  }

}
  return 0;

}



