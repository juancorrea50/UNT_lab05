#ifndef RAT_H
#define RAT_H
#include <string>
//Header file for the rat class that stores information into the below variables and functions
//that use the information to display or set the object's variables.
using namespace std;

class Rat{
	public:
	//Default constructor
	Rat();
	//Param Constuctor
	Rat(string brd, float wgt, string nm, char gndr, string fFd, string clr, string cmt);
	//Accessors
	string getBreed();
	float getWeight();
	string getName();
	char getGender();
	string getFavFood();
	string getColor();
	string getComments();
	//Mutators
	void setBreed(string brd);
	void setWeight(float wght);
	void setName(string nm);
	void setGender(char gndr);
	void setFavFood(string fFd);
	void setColor(string clr);
	void setComments(string cmt);
	//Function methods
	void printInfo();


	private:
	string breed;
	float weight;
	string name;
	char gender;
	string favFood;
	string color;
	string comments;


};

#endif
