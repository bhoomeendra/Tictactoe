#include<bits/stdc++.h>
// X==2 ' '==1 O==3
using namespace std;
char s[3][3];
int a[10]={0};
///////////////
void show()
{
	cout<<endl;
	int i=0;
	while(i<3)
	{	int j=0; 
	while(j<3)
	{
		cout<<s[i][j]<<"	";
		++j;
	}
	++i;
	cout<<endl<<endl<<endl;
	}
	
}
///////////
void intialize()
{
	int i=0;
	int k=1;
	while(i<3)
	{	int j=0; 
	while(j<3)
	{
		s[i][j]=48+k;
		a[k]=1;
		++k;
		++j;
	}
	++i;
	}
	s[1][1]='X';
	a[5]=3;
	show();
}

////////////////
int move()
{
	int k;
	cout<<"Enter the Position at which you want to enter"<<endl;
	do
	{
		cin>>k;
		if(a[k]!=1)
		{cout<<"Enter a Valid Position"<<endl;}
	}
	while(a[k]!=1);
	if(k<=3)
	{
		s[0][k-1]='O';
		a[k]=2;
	}
	else if(k<=6)
	{
		s[1][k-4]='O';
		a[k]=2;
	}
	else
	{
		s[2][k-7]='O';
		a[k]=2;
	}
	show();
	return k;
	
}
int work()
{
	int h[3]={0},v[3]={0},d1,d2;
	h[0]=a[1]*a[2]*a[3];
	h[1]=a[4]*a[5]*a[6];
	h[2]=a[7]*a[8]*a[9];
	v[0]=a[1]*a[4]*a[7];
	v[1]=a[2]*a[5]*a[8];
	v[2]=a[3]*a[6]*a[9];
	d1=a[1]*a[5]*a[9];
	d2=a[3]*a[5]*a[7];
	
	// the priority order is 9,4,3,2,1,6//
		
		
}
/////////////////////
////////////////////
int main()
{
intialize();




	return 0;
}
