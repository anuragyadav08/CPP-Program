#include<iostream.h>
#include<conio.h>
class A
{
 private:
      int hra,da,food;
      long int sal,gsal;
 public:
      long int get_deta()
      {
       cout<<"Enter Salary : ";
       cin>>sal;
       return sal;
      }
      void put_deta(long int sal)
      {
       if(sal<=20000)
       {
	cout<<"Gross Salary : "<<sal;
       }
       else if(sal>20000 && sal<=40000)
       {
	gsal=sal+sal*((10+3+2)/100);
	cout<<"Gross Salary : "<<gsal;
       }
       else if(sal>40000 && sal<=90000)
       {
	gsal=sal+sal*((15+6+4)/100);
	cout<<"Gross Salary : "<<gsal;
       }
       else if(sal>90000)
       {
       gsal=sal+sal*((20+7+8)/100);
       cout<<"Gross Salary : "<<gsal;
       }
       else
       {
	cout<<"Salary Can't be negative";
       }
      }
};
void main()
{
A obj;
long int c;
clrscr();
c=obj.get_deta();
obj.put_deta(c);
getch();
}