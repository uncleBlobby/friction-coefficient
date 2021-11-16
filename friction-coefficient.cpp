#include <iostream>

using namespace std;

int main()
{
    // Program introduction and explanation
    cout << endl;
    cout << "             Physics: Friction Coefficient" << endl;
    cout << "*************************************************************" << endl;
    cout << endl;
    cout << "The force pushing or pulling an object is related to" << endl;
    cout << "the object's mass, acceleration, and coefficient of friction:" << endl;
    cout << "               F = (u * m * g) + (m * a)" << endl;
    cout << endl;
    cout << "where:" << endl;
    cout << "   F is force applied to push or pull object in Newtons (N)" << endl;
    cout << "   u is a coefficient of friction (smaller for smoother surfaces)" << endl;
    cout << "   m is an object's mass in kilograms (kg)" << endl;
    cout << "   g is the acceleration due to gravity, 9.8 m/s^2" << endl;
    cout << "   a is the object's acceleration in m/s^2" << endl;
    cout << endl;
    cout << "This program will calculate u based on F, m, and a." << endl;
    cout << "************************************************************" << endl;
    cout << endl;

    // Prompt user for inputs and store in double
    double newtons, mass, accel;
    cout << "Enter the force applied in Newtons: ";
    cin >> newtons;
    cout << "Enter the object's mass in kg: ";
    cin >> mass;
    cout << "Enter the object's acceleration in m/s^2: ";
    cin >> accel;

    // Compute output and display to user
    cout << "The coefficient for friction is: " << ((newtons - (mass * accel)) / (mass * 9.8));
    cout << endl;

    return 0;
}