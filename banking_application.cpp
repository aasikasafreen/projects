#include<iostream.h>
#include<conio.h>
#include<process.h>

class banking
{
  int uname,depo,wid,bal,acn,phn;
  public:
    void getdata();
    void deposit();
    void withdraw();
    void balance();
};
void banking::getdata()
{
   cout<<"\n\tenter a customer name of uname :";
   cin>>uname;
   cout<<"\n\tenter a account number acn:";
   cin>>acn;
   cout<<"\n\tenter a phone  number phn :";
   cin>>phn;
}
void banking::deposit()
{
  cout<<"\n\tenter your deposit amount:";
  cin>>depo;
  bal=bal+depo;
}
void banking::withdraw()
{
  cout<<"\n\tenter a amount you want:";
  cin>>wid;
  bal=bal-wid;
}
void banking::balance()
{
  cout<<"\n\tthe balance is:";
}
void main()
{
  clrscr();
  banking a;
  a.getdata();
  a.deposit();
  a.withdraw();
  a.balance();
  getch();

}




