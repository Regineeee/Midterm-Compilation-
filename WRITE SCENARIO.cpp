#include<iostream>
using namespace std;
void page();
void kian();
void regine();
int main()
{
	page();
	return 0;
}
void page ()
{
	int b;
	  cout<<"***DATA STRUCTURE AND ALGORITHM***\n\n";
	  cout<<"1. ARETALLA\n";
	  cout<<"2. VALENZUELA\n";
	  cout<<"ENTER YOUR CHOICE: ";
	  cin>> b;
	  
	  switch(b)
	  {
	  
	  case 1:
	  	
	  	kian();
	  	system("cls");
	  	case 2:
	  	
	  	regine();
	  	system("cls");


}

}
void kian()
{
	system("cls");
	cout<<"***COOKING PAKBET****\n\n";
	  	 string a,c,d,e,f;
	  	 cout<<"ENTER THE INGREDIENTS\n\n";
	  	 cout << endl;
	  	 cout <<"1. ";
	  	 cin >>a;
	  	 cout <<"2. ";
	  	 cin >> c;
	     cout <<"3. ";
	  	 cin >>d;
	  	 cout <<"4. ";
	  	 cin >>e;
	  	 cout <<"5. ";
	  	 cin >>f;
	  	 system ("cls");

	   cout <<"Pakbet Ingredients"<<endl;
	  	cout<< "1. " << a << endl;
	  	cout<< "2. " << c << endl;
	  	cout<< "3. " << d<< endl;
	  	cout<< "4. " << e<< endl;
	  	cout<< "5. " << f<< endl;
	  	
	  	system ("pause");
	  	page();
	  	
	  	
}
void regine()
{
	system("cls");
	float a,b;
	double c;
	int sum=c;
	
	string add = "+";
	string sub = "-";
	string mul = "*";
	string div = "/";
	
	string operation;
	
	
	cout<<"enter num: "<<endl;
	cin>>a;
	cout<<"enter num2: "<<endl;
	cin>>b;
	cout<<"enter operation: "<<endl;
	cin>>operation;
	
	if(operation == add){
		(c = a +b);
		cout << a<< "+" << b <<"=" <<c <<endl;
	}
	else if (operation == sub)
	
	{
		(c = a-b);
		cout << a<< "-" << b <<"=" <<c <<endl;
	}
	else if (operation == mul)
	{
		(c = a*b);
		cout << a<< "*" << b <<"=" <<c <<endl;
	}
	else if (operation == div)
	{
		(c = a/b);
		cout << a<< "/" << b <<"=" <<c <<endl;
	}
	
	  	system ("pause");
	  	page();
	  	
	  	
}


	  
