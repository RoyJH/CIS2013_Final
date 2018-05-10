#include <iostream>
#include <string>
#include "motorcycle.h"
using namespace std;

motorcycle::motorcycle(){
	get_colors();
	get_years();
	get_makes();
	get_models();
}
void motorcycle::set_colors(string color){
	colors = color;
}
string motorcycle::get_colors(){
	cout << "What color should your motorcycle be?" << endl;
	cin >> colors;
return colors;}
void motorcycle::set_years(int year){
	years = year;
}
int motorcycle::get_years(){
	cout << "What year is the bike?" << endl;
	cin >> years;
return years;}
void motorcycle::set_makes(string make){
	makes = make;
}
string motorcycle::get_makes(){
	cout << "Who's the maker of the bike?" << endl;
	cin >> makes;
return makes;}
void motorcycle::set_models(string model){
	models = models;
}
string motorcycle::get_models(){
	cout << "and what is the motorcycle's model?" << endl;
	cin >> models;
return models;}
motorcycle::print(){
	cout << "Your bike's color is " << colors << ". " << endl;
	cout << "The year of your bike is "<< years << ". " << endl;
	cout << "The maker of the motorcycle is " << makes << ". "<< endl;
	cout << "and the model is " << models << ". " << endl;
}