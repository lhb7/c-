#include<iostream>
#include<algorithm>
using namespace std;
int is(int a1);
int is(int a1)
{
	if(a1==0||a1==1)
	return 0;
	for(int i=2;i<a1;i++)
	{
		if(a1%i==0)
		return 0;
	}
	return 1;
}
int main() 
{
    int c1=0,c2=0,c3=0;
	for(int i=100;i<=999;i++)
	{
		int a1,a2,a3,b1,b2,b3;
		a1=i/100;
		a2=(i%100)/10;
		a3=i%10;
		b1=a1+a2+a3;
		b2=a1*a2*a3;
		b3=a1*a1+a2*a2+a3*a3;
		 
		if(is(i)&&is(b1)&&is(b2)&&is(b3))
		{
			c1++;
			c2=c2+i;
			if(i>c3)
			{
				c3=i;
			}
		}
	}
	cout<<c1<<' '<<c2<<' '<<c3<<endl;
	return 0;
}
