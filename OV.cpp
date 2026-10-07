#include <iostream>
using namespace std;

// Volume of cube
double volume(double side)
{
    return side * side * side;
}

// Volume of cuboid
double volume(double length, double width, double height)
{
    return length * width * height;
}

// Volume of cylinder
double volume(double radius, double height, char)
{
    return 3.14159 * radius * radius * height;
}

int main()
{
    cout << "Volume of Cube = " << volume(5) << endl;

    cout << "Volume of Cuboid = "
         << volume(4, 5, 6) << endl;

    cout << "Volume of Cylinder = "
         << volume(3, 7, 'c') << endl;

    return 0;
}