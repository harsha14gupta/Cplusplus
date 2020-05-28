//PROGRAM TO CALCULATE THE SUM OF SERIES 1+1/3*3+1/5*5+...+1/N*N

#include<iostream>
using namespace std;

int main()
{
int i,n;
float sum=0.0;
cout<<endl<<"Program to calculate sum of series 1+1/3*3..+1/N*N"; 
cout<<endl<<"===========================================";
cout<<endl<<"Please enter the value of N=";
cin>>n;
for(i=1;i<n;i+=2)
  sum+=1/(i*i);
cout<<endl<<"The sum of the series="<<sum;
return 0;
}

