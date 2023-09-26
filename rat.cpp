#include<iostream>
#include <string>
#include "rat.h"
//Definition of the rat class and defines all functions found in the header file
using namespace std;

Rat::Rat(){
	breed = " ";
	weight = 0.00;
	name = " ";
	gender = ' ';
	favFood = " ";
	color = " ";
	comments = " ";
}
Rat::Rat(string brd, float wgt,string nm, char gndr, string fFd, string clr, string cmt){
	breed = brd;
	weight = wgt;
	name = nm;
	gender = gndr;
	favFood = fFd;
	color = clr;
	comments = cmt;
}
//Accessors
string Rat::getBreed(){
	return breed;
}
float Rat::getWeight(){
	return weight;
}
string Rat::getName(){
	return name;
}
char Rat::getGender(){
	return gender;
}
string Rat::getFavFood(){
	return favFood;
}
string Rat::getColor(){
	return color;
}
string Rat::getComments(){
	return comments;
}
//Mutators
void Rat::setBreed(string brd){
	breed = brd;
}
void Rat::setWeight(float wgt){
	weight = wgt;
}
void Rat::setName(string nm){
	name = nm;
}
void Rat::setGender(char gndr){
	gender = gndr;
}
void Rat::setFavFood(string fFd){
	favFood = fFd;
}
void Rat::setColor(string clr){
	color = clr;
}
void Rat::setComments(string cmt){
	comments = cmt;
}
//print info
void Rat::printInfo(){
	cout << "Name: " << name << endl <<  " Breed: " << breed << endl <<
	       	" Weight: " << weight << endl <<  " Gender: " << gender << endl <<
	      	" Color: " << color << endl << " Favorite Food: " << favFood << endl <<
	       	" Comments: " << comments << endl;
}
