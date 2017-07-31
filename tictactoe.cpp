#include<bits/stdc++.h>
using namespace std;
char s[3][3];
int a[10]={0};
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
	a[5]=2;
}
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
		a[k]=3;
	}
	else if(k<=6)
	{
		s[1][k-4]='O';
		a[k]=3;
	}
	else
	{
		s[2][k-7]='O';
		a[k]=3;
	}
	return k;
	
}
/////////////////////
////////////////////
int main()
{
intialize();
show();
move();
show();


	return 0;
}
