//PROGRAM TO CALCULATE THE SUM OF SERIES 12+22+32+………+N

#include<iostream>
using namespace std;

int main()
  {
    int i,n,sum=0;
    cout<<endl<<"Program To Calculate Sum Of Series 12+22+32+....+N";
    cout<<endl<<"--------------------------------------------------" ;

    cout<<endl<<"Please enter the value of N:";
    cin>>n;
    for(i=12; i<=n; i+=10)
    sum+=i;
    cout<<endl<<"The Sum of Series is:"<<sum;
    return 0;
}


