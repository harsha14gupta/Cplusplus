//PROGRAM TO CALCULATE THE SUM OF SERIES 1+2^2/2!+3^3/3!+….n^n/n!

#include<iostream>
#include<math.h>
using namespace std;

long fact(int n){
long f=1;
while(n>0){
f=f*n;
n--;
}
return f;
}

int main()
{
int i,j,n;
double sum=0.0;
cout<<"Enter a number : ";
cin>>n;
cout<<"The series with sum is :\n";
for(i=1; i<=n; i++)
{
cout<<i<<"^"<<i<<"/"<<i<<"!";
(i==n)?cout<<" = ":cout<<" + ";

sum += pow(i,i)/(double)fact(i);
}
cout<<sum;
return 0;
}
