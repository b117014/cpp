#include<iostream>
#include<cstring>
#include<fstream>

using namespace std;


class admin{
    protected: string adm_username;
               string adm_password;

    public :
           void get_adm(){
             cout << "Admin username : ";
             cin >> adm_username;
             cout << "Admin password : ";
             cin >> adm_password;

           }

};

class login {
  protected : string user_name;
              string pass_word;
  public :
      void get_login();

};
class regist   {

    public: string fname;
                string lname;
                string mob;
                string email;
                string username;
                string password;
                string busn;
                string from;
                string to;
                string dep_t;
                string arr_t;
                int seat;
    public :
           void get_register();




}reg[100][100];
class res:public regist,public login,public admin{

      protected: string busn;
                string from;
                string to;
                string dep_t;
                string arr_t;



     public :
            void Add();
            void reservation();
            void display_user();
            void display_bus();



}bus[100];


static int p=0;

void regist:: get_register(){
  ofstream reg_file("reg.txt",ios::app);

  cout << "Enter first name : ";
  cin >> fname;
  cout << "Enter last name : ";
  cin >> lname;
  cout << "Enter mobile no. : ";
  cin >> mob;
  cout << "Email Id : ";
  cin >> email;
  cout << "Enter username : ";
  cin >> username;
  cout << "Enter password : ";
  cin >> password;
  reg_file << fname << ",";
   reg_file << lname << ",";
    reg_file << mob << ",";
     reg_file << email << ",";
      reg_file << username << ",";
       reg_file << password  << endl;
       reg_file.close();

  p++;
}


void login::get_login(){
   cout << "Enter username : ";
   cin >> user_name;
   cout << "Enter password : ";
   cin >> pass_word;
}


void res:: Add()
{
   get_adm();

   ofstream bus_file("bus.txt",ios::app);
  if(adm_username=="prabhat" && adm_password=="hello"){
  cout << "Enter bus no. : ";
   cin >> bus[p].busn;
   cout << "Enter arrival time : ";
   cin >> bus[p].arr_t;
   cout << "Enter Departure time : ";
   cin >> bus[p].dep_t;
   cout << "from : ";
   cin >> bus[p].from;
   cout << "To : ";
   cin >> bus[p].to;
   bus_file << bus[p].busn << ",";
   bus_file << bus[p].arr_t<< ",";
   bus_file << bus[p].dep_t<< ",";
   bus_file << bus[p].from<< ",";
   bus_file << bus[p].to<< endl;
   p++;
   bus_file.close();
   }

   else{
    cout << "Enter correct username or password" << endl;
   }

}
static int j=0;
int top;
void res::reservation(){
    get_login();

    string s;
    int i,k;
    cout << "Enter buss no. which you want to travell : " ;
    cin >> s;
    for(i=0;i<=p;i++)
    {
       if(s==bus[i].busn)
         break;
    }
  int se;
  int l=1;
    if(i<=p)
    {

       for( k=0;k<=10;k++){
       if(user_name==reg[k][0].username && pass_word==reg[k][0].password)
       break;

       }
       if(user_name==reg[k][0].username && pass_word==reg[k][0].password){
        cout << "Enter seat no. : ";
      cin >> se;
       while(reg[k][l].busn.length()>0)
       {
         l++;
       }
    ofstream f1((username+".txt").c_str(),ios::app);
         reg[k][l].seat=se;
         reg[k][l].busn=bus[i].busn;
         reg[k][l].dep_t=bus[i].dep_t;
         reg[k][l].arr_t=bus[i].arr_t;
         reg[k][l].from=bus[i].from;
         reg[k][l].to=bus[i].to;
         top=l;
         f1<< se;
         f1 << bus[i].busn << ",";
         f1 << bus[i].dep_t << ",";
         f1 << bus[i].arr_t << ",";
         f1 << bus[i].from << ",";

         f1 << bus[i].to << endl;
         f1.close();


         }
         else{
            cout << "Your username or password is wrong please login again or register" << endl;
         }

    }
    if(i>p)
    {

      cout << "Your bus no. is incorrect" << endl;
    }
}

void res:: display_user(){
   get_login();



        if(pass_word==reg[i][0].password && user_name==reg[i][0].username)
        {
          ifstream f3((user_name+".txt").c_str)
          for(int i=0;i<=10;i++)
      {
          getline(f3,n1[i])
          for(int m=1;m<=top && reg[i][m].busn.length()>0;m++){
             cout <<"*****************************************************************************"<< endl;
             cout << "Bus no. : " << reg[i][m].busn << endl;
             cout << "departure time : " << reg[i][m].dep_t << "                     arrival time : " << reg[i][m].arr_t << endl;
             cout << "from : " << reg[i][m].from << "                                to : " << reg[i][m].to << endl;
             cout << "Seat no. : " << reg[i][m].seat << endl;

             cout <<"****************************************************************************" << endl;

             }


        }
      }
      }
void res::display_bus(){
int i=0;
     while(bus[i].busn.length()>0)
     {
        cout <<"*****************************************************************************"<< endl;
             cout << "       Bus no. : " << bus[i].busn << endl;
             cout << "departure time : " << bus[i].dep_t << "            arrival time : " << bus[i].arr_t << endl;
             cout << "          from : " << bus[i].from << "                      to : " << bus[i].to << endl;


             cout <<"****************************************************************************" << endl;
             cout << i << " " << bus[i].busn.length() << endl;

        i++;

     }

}


int main()
{
int ch;


   while(1)
   {
     cout << " 1 . Reservation" << endl;
     cout << " 2 . Add bus details" << endl;
     cout << " 3 . Display user ticket" << endl;
     cout << " 4 . Register" << endl;
     cout << " 5 . Total bus available"<< endl;


     cin >> ch;
      switch(ch){
        case 1 : bus[p].reservation();
        break;
        case 2 : bus[p].Add();
                 break;
        case 3 :
                 bus[p].display_user();
                 break;
        case 4 : reg[p][0].get_register();

           break;
        case 5 : res ob;
               ob.display_bus();
               break;






      }
   }




  return 0;

}

