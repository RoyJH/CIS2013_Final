#include <iostream>
#include <cstring>
#include "motorcycle.h"
using namespace std;

string color;
int year;
string make;
string model;
string action;
bool running=true;

int main(){
	motorcycle mine;
		cout << "List of commands:"<< endl;
		cout << "Change color :  color" << endl;
		cout << "Change year :	year" << endl;
		cout << "Change make : make " << endl;
		cout << "Change model : model" << endl;
		cout << "Print attributes: print" << endl;
	while (running){
		cout << "Enter a command:" << endl;
		cin >> action;
		if (action == "print"){
			mine.print();}	
		else if (action=="color"){
			mine.get_colors();}
		else if (action=="year"){
			mine.get_years();}
		else if (action=="makes"){
			mine.get_makes();}
		else if (action=="model"){
			mine.get_models();}
		else if (action=="exit"){
			running = false;}
		else if (action =="list"){
			cout << "List of commands:"<< endl;
			cout << "Change color :  color" << endl;
			cout << "Change year :	year" << endl;
			cout << "Change make : make " << endl;
			cout << "Change model : model" << endl;
			cout << "Print attributes: print" << endl;}
		else
			cout << "Invalid command: enter list to see options" << endl;
	}
	return 0;	//mine motorcycle ();
}