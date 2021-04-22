#include<iostream.h>
#include<conio.h>
int main()
{
int a,b,c,d,n,sum;
clrscr();
sum=0;
cout<<"enter the five digit number :";
cin>>n;
a=n/10000;
n=n%10000;
b=n/1000;
n=n%1000;
c=n/100;
n=n%100;
d=n/10;
n=n%10;
sum=n+a;
cout<<"Sum of first and last number using % operator : "<<sum<<endl;
getch();
return 0;
}