#include <iostream>
#include <string>

using namespace std;

#include "rat.h"
//Main cpp file for rat class and header: Executes a loop that takes in informtion of a rat object and
//allocates it into an array of 6 rats.
int main(){
	string brd, nm, cmt, clr, fFd;
	int cap;
	float wgt;
	char gndr;

	//Ask for rat capacity
	do{
		cout << "How many rats to be recorded?(1-6)" << endl;
		cin >> cap;
	}while(cap < 1 || cap > 6);




	//Change to 6 rats before turn in
	Rat* ratArray = new Rat[cap];

	for(int i = 0; i< cap; i++){
		cout << "Please enter the name of the rat " <<"( #" << i+1 << ")" <<endl;
		cin >> nm;
		cout << "Please enter the breed of the rat " << endl;
		cin >> brd;
		cout << "Please enter the color of the rat " << endl;
		cin.ignore();
		getline(cin, clr);
		cout << "Please enter the weight of the rat " << endl;
		cin >> wgt;
		cout << "Please enter the gender of the rat " << endl;
		cin >> gndr;
		cout << "Please enter the Rat's favorite food " << endl;
		cin >> fFd;
		cout << "Please enter any other comments for the rat"<< endl;
		cin.ignore();
		getline(cin, cmt);
		ratArray[i] = Rat(brd,wgt,nm,gndr,fFd,clr,cmt);
	}
	for(int i = 0; i < cap;i++){
		cout << "Rat #: " << i+1 << endl;
		ratArray[i].printInfo();
	}
	delete [] ratArray;
}
