// Shaine Ransford
// 4/29/2025
// M7T1 -  Restaurant Rating
// CSC-134
// Use the Restaurant class to store user ratings
#include <iostream>
using namespace std;

// Next time we'll put the class in a separate file
class Restaurant 
{
  private:
    string name;    // the name
    double rating;  // 0 to 5 stars

  public:
    // constructor
    Restaurant(string n, double r) 
    {
        name = n;
        rating = r;
    }
    // getters and setters
    void setName(string n) 
    {
        name = n; 
    }
    void setRating(double r) 
    {
        rating = r;
    }
    string getName() const 
    {
        return name;
    }
    double getRating() const 
    {
        return rating;
    }

    // print a formatted entry
    void printInfo() 
    {
        cout << "Name: " << name << " ";
        cout << "(" << rating << "/5 stars)" << endl;
    }
  
};

int main() 
{
    cout << "M7T1 - Restaurant Reviews" << endl;
    // create a restaurant
    // the constructor saves us from having to use 3 lines to set up
    //Restaurant lunch_place;
    //lunch_place.setName("Place");
    //lunch_place.setRating( 3.0);
    Restaurant lunch_place = Restaurant("Mi Casita", 4.5);

    Restaurant breakfast_place = Restaurant("Waffle House", 3.0);

    Restaurant dinner_place = Restaurant("Olive Garden", 1.0);

    Restaurant fast_food1 = Restaurant("McDonald's", 3.0);
    Restaurant fast_food2 = Restaurant("Wendy's", 3.0);
    Restaurant fast_food3 = Restaurant("In 'n Out", 5.0);

    cout << "Review info" << endl;

    cout << "\nBreakfast:" << endl;
    breakfast_place.printInfo();
    // writing printInfo() saves me typing all the cout code every time
    //cout << breakfast_place.getName() << " ";
    //cout << breakfast_place.getRating() << "/5 stars" << endl;

    cout << "\nLunch:" << endl;
    lunch_place.printInfo();

    cout << "\nDinner:" << endl;
    dinner_place.printInfo();

    cout << "\nFast Food:" << endl;
    fast_food1.printInfo();
    fast_food2.printInfo();
    fast_food3.printInfo();

    return 0;
}