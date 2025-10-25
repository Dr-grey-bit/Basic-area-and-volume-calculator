#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double Pi = M_PI;
    double Area;
    double Volume;
    string AreaOrVolumeCalculation;
    cout << "Do you want to calculate the volume or the area of a shape: " << endl;
    cin >> AreaOrVolumeCalculation;
    if (AreaOrVolumeCalculation == "Area") {
        string Shape;
        cout << "Do you want to calculate the area of a rectangle, trigangle, square or circle: " << endl;
        cin >> Shape;
        if (Shape == "rectangle") {
            double Width;
            double Height;
            cout << "Please enter the width and the the height of the rectangle: " << endl;
            cin >> Width >> Height;
            Area = Width * Height;
        }
        else if (Shape == "triangle") {
            double Base;
            double Height;
            cout << "Please enter hte length of the base and the height of the triangle: " << endl;
            cin >> Base >> Height;
            Area = (Base + Height) / 2.0;
        }
        else if (Shape == "square") {
            double LengthOfSide;
            cout << "Please enter the length of any of the sides of the square: " << endl;
            cin >> LengthOfSide;
            Area = LengthOfSide * LengthOfSide;
        }
        else if (Shape == "circle") {
            double Radius;
            cout << "Please enter the radius of the circle: " << endl;
            cin >> Radius;
            Area = (Radius * Radius) * Pi;
        }
        else {
            cout << "Invalid input";
        }
    }
    else if (AreaOrVolumeCalculation == "Volume") {
        string Shape;
        cout << "Do you want to calculate the volume for a cube, cuboid or sphere";
        cin >> Shape;
        if (Shape == "cube") {
            double LengthOfSide;
            cout << "Please enter the length of any of the sides of the cube: " << endl;
            cin >> LengthOfSide;
            Area = LengthOfSide * LengthOfSide * LengthOfSide;
        }
        else if (Shape == "cuboid") {
            double Width;
            double Height;
            double Depth;
            cout << "Please enter the Width Height and Depth of the cuboid: " << endl;
            cin >> Width >> Height >> Depth;
            Area = Width * Height * Depth;
        }
        else if (Shape == "sphere") {
            double Radius;
            cout << "Please enter the radius of the shpere: " << endl;
            cin >> Radius;
            Area = (4 * ((Radius * Radius * Radius) * Pi)) / 3.0;
        }
        else {
            cout << "Invalid input";    
        }
    }
    else {
        cout << "Invalid input";
    }
    return 0;
}