//PROGRAM TO CALCULATE THE SUM OF SERIES 1+1/3+1/5+....+1/(2N-1)

#include<iostream>
using namespace std;

int main()
  {
    int i,n;
    float sum=0.0,term=0.0;
    cout<<endl<<"Program To Calculate Sum Of Series 1+1/3+...+1/(2N-1)";
    cout<<endl<<"--------------------------------------------------------" ;
    cout<<endl<<"Please enter the value of N=";
    cin>>n;
    for(i=1; i<=n; i++)
      { 
            term=float(1.0/((2*i)-1));
            sum+=term;
     }
    cout<<endl<<"The Sum of Series is:"<<sum;
    return 0;
}

