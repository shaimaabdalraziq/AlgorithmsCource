#include <iostream>
#include<time.h>
using namespace std;
long double itfact(long double n)
{
 long double fact=1;
 for(long double i=1;i<=n;i++)
 fact*=i;
 return fact;
}
long double recfact(long double n)
{
 if(n==1)
 return 1;
 return n*recfact(n-1);
}
int main()
{
 long double n;
 clock_t startTime1, endTime1, startTime2, endTime2;
 cout<<"enter the value of n"<<endl;
 cin>>n;
 long double test;
 /* ================================================================= */
 startTime1=clock();
 test=itfact(n);
 endTime1=clock();
 long double t1=(((double)endTime1-startTime1)/CLOCKS_PER_SEC);
 t1=t1*1000000.000;
 /* ================================================================ */
 startTime2=clock();
 test=recfact(n);
 endTime2=clock();
 long double t2=(((double)endTime2-startTime2)/CLOCKS_PER_SEC);
 t2=t2*1000000.000;
 /* ================================================================= */
 cout << "fact(" << n << ") = " << test << "\nTime is taken by iterative function: "<< t1 << " microseconds." << endl;
 cout << "fact(" << n << ") = " << test << "\nTime is taken by recursive function: "<< t2 << " microseconds." << endl;
 return 0;
}
