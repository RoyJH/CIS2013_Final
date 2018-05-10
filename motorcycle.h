#include <iostream>
#include <string>
using namespace std;

class motorcycle{
	private:
		string colors;
		int years;
		string makes;
		string models;
	public:
		motorcycle();
		void set_colors(string color);
		string get_colors();
		void set_years(int year);
		int get_years();
		void set_makes(string make);
		string get_makes();
		void set_models(string model);
		string get_models();
		print();
};