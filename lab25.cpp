#include<iostream>
#include<algorithm>
using namespace std;

struct node{
   int info;
   struct node *link;

};

class link_list {
     node *tail,*start;

     public:
        link_list(){
            tail=NULL;
            start=NULL;

        }

        void add()
        {
          for(int i=0;i<5;i++)
            {
              node *temp;
              int n;
              temp= new node;
              cout << "enter data" << endl;
              cin >> n;
              temp->info=n;
              temp->link=NULL;
              if(start==NULL)
              {
                 start=temp;
                 tail=temp;
              }else{

               tail->link=temp;
               tail=tail->link;

              }

            }

        }
        void sorting();
        void display();


};
void link_list:: sorting(){
    int arr[5];
    node *ptr;
    ptr=start;
    for(int i=0;i<5;i++)
    {
       arr[i]=ptr->info;
       ptr=ptr->link;
    }
    sort(arr,arr+5);

    node *p;
    p=start;
    for(int i=0;i<5;i++)
    {
       p->info=arr[i];
       p=p->link;
    }

   display();

}
void link_list::display(){
    node *q;
    q=start;
    for(int i=0;i<5;i++)
    {
      cout << q->info << "  ";
      q=q->link;
    }


}

int main()
{
   link_list a;
    a.add();
    a.sorting();
    return 0;

}
