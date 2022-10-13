#include <iostream>
#include <conio.h>

using namespace std;

bool log(char u,char p,char v,char c)
{
	
	char a=u,b=p;
	
	char d=v,o=c;
	
	if(a==d && b==o)
	{
		return true;
	}
	else
	{
		return false;
	}
}
int main()
{
	char u,p,v,c;
	char l;
	cout<<"Enter R for Register & S for Sign in:";
	cin>>l;
	switch(l)
	{
		case 'R':
			cout<<"Enter The Username:";
			cin>>u;
			cout<<"Enter The Password:";
			cin>>p;
			cout<<"Registered!"<<endl;
			break;
		case 'S':
			cout<<"Register Your self first"<<endl;
			system("Color 04");
			break;
	}
	cout<<"Enter R for Register & S for Sign in:";
	cin>>l;
	
	switch(l)
	{
		case 'R':
			char d;
			cout<<"Y for regester N for previous one:";
			cin>>d;
			switch(d)
			{
				case 'Y':
					cout<<"Enter The Username:";
					cin>>u;
					cout<<"Enter The Password:";
					cin>>p;
					cout<<"Registered!"<<endl;
					break;
				case 'N':
					break;
					
			}
	
		case 'S':
			cout<<"Username:";
			cin>>v;
			cout<<"Password:";
			cin>>c;
			if(log(u,p,v,c))
			{
				cout<<"Successfully Logged in!"<<endl;
				system("Color 02");
			}
			else
			{
				cout<<"Wrong Credentials"<<endl;
				system("Color 04");	
			}
			break;
		default:
			cout<<"Wrong";
	}
	
	getch();
	return 0;
}
