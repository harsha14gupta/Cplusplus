//PROGRAM TO FIND THE SUM OF SERIES 1+1/2!+1/3!+1/4!+……..1/N!

#include<iostream>
using namespace std;

int main ()
{
    int n;
    cout<<"Value  of  N to  calculate  sum  of  series  of  1/1! + 1/2!+ ..... + 1/N!=";
    cin>>n;
    float sum=0;
    int fact=1;
    for (int  i=1;i<=n;i++)
    {
       fact*=i;         
       sum+=1.0/fact;   
    }
    cout<<"Sum of Series= "<<sum<<endl;
    return 0;
}

