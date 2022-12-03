/*
Title:-             Concept of inheritance      
 
Problem Statement:-  Imagine a publishing company which does marketing for book and audio cassette versions.create a class
                     publication that store the title (a string) and price (type float) of a publication.
                     From this class derive two class: book,which adds a page count (type int), and tape, which adds a playing
                     time in minute(type float).
                     Write a program that instantiates the book and tape classes,allows user to enter data and display the data
                     member. if an exception is caught, replace all replace all the data member values with zero values.

Algorithm:-
     1]Start
     2]Accept data
     3]Display data
     4]End
*/


#include<iostream>
#include<string.h>
using namespace std;

//Class Definitions
class Publication
{
	public: 
		char title[20];
		float price;
	
		Publication()
		{
		  strcpy(title," ");
		  price=0;
		}
};

class Book:public Publication		//Inherited Publication Class
{
	public:
		int page;
	
		Book()
		{
		  page=0;
		}
	void Display(char title[20],float price,int page);	


}b;

class Tape: public Publication		//Inherited Publication Class
{
	public:
		float min;
	
		Tape()
		{
			min=0;
		}
	void Display(char title[20],float price,float min);
}t;

//Member Function Definition

void Book::Display(char title[20],float price,int page)		//Display For Book Class
{
	cout<<"\n Title: "<<title;
	cout<<"\n Price: "<<price;
	cout<<"\n No. Of Pages: "<<page<<endl;
}

void Tape::Display(char title[20],float price,float min)	//Display For Tape Class
{

	cout<<"\n Title: "<<title;
	cout<<"\n Price: "<<price;
	cout<<"\n Playback Time: "<<min<<endl;
}

//Main Function Definition
int main()
{
	  int ch;
	
  do
  { 
	cout<<"\n 1.Book Details\n 2.Audio cassette Details\n 0.Exit\n";
	cout<<"\n Enter Your Choice: ";
	cin>>ch;
   switch(ch)
   {
	  
	case 1:
		cout<<"\n Enter Details: \n" ;
	  	cout<<"\n Enter Title: ";
	  	cin>>b.title;
	  	cout<<"\n Enter Price: ";
	  	cin>>b.price;
	  	cout<<"\n Enter Pages: ";
	  	cin>>b.page;
		b.Display(b.title,b.price,b.page);
		cout<<endl;
		break;

	  case 2: 
		 cout<<"\n Enter Details: \n" ;
	  	cout<<"\n Enter Title: ";
	  	cin>>t.title;
	  	cout<<"\n Enter Price: ";
	  	cin>>t.price;
		cout<<"\n Enter Playback Time: ";
		cin>>t.min;
		t.Display(t.title,t.price,t.min);
		cout<<endl;
		break;
   }

  }while(ch!=0);	


	
return 0;
}
