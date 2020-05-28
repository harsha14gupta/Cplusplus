//PROGRAM TO FIND THE SUM OF SERIES (1)+(1+2)+(1+2+3)+….(1+2+3+..N)

#include<iostream>
using namespace std;

int main()
{
	int n,sum,sum1=0,i,j;
	cout<<endl<<"Please enter an integer to calculate the sum of series, N=";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		sum=0;
		for(j=1;j<=i;j++)
			sum=sum+j;
		sum1=sum1+sum;
	}
	cout<<endl<<"The sum of series: (1)+(1+2)+(1+2+3) +....+ (1+2+3+..N)="<<sum1;
	return 0;
}

