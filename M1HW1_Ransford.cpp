// CSC-134
// M1HW1
// Shaine Ransford
// 1/27/2025
// This program will talk about a movie.

#include <iostream> 
using namespace std;

int main()
{
// The owner’s name
string name = "Inglorious Basterds";

// number of apples owned
int year = 2009;
// price per apple
double grossTotal = 321.5;

// print all the information about the movie
cout << "The movie " << name << " was released in " << year 
<< " and grossed a total of " << grossTotal << " million." << endl;
cout <<" " << endl;
cout << "About: In Nazi-occupied France during World War II, " 
     << "a plan to assassinate Nazi leaders" << endl << "by a group of Jewish " 
     << "U.S. soldiers coincides with a theatre owner's vengeful plans for the same."<< endl;
cout << " " << endl;
cout << name << " has a stellar cast featuring, Brad Pitt, Christoph Waltz, Eli Roth and Michael Fassbender." << endl;
cout << "Quentin Tarantino is credited as the writer and director for "<< name << endl;
cout << " " << endl;
cout << "My favorite scene from "<< name <<" is a scene that takes place in a bar."<< endl; 
cout << "During this scene an undercover American spy accidentally reveals himself to be a spy "<< endl;
cout << "to a german officer when he asked for '3 Glasses' of scotch. At the same time the American holds"<< endl;
cout << "his thumb and pinkie together while a German person would hold his pinkie and ring finger down."<< endl;

}
