// Arithmetic

#include <iostream>
using namespace std;

int main()
{
    float side_1;
    float side_2;
    float side_3;
    float half;

    side_1 = 4.2; 
    side_2 = 5.6;
    side_3 = 7.0;
    half = 0.5;

    double perimeter = side_1 + side_2 + side_3;
    double area = half * side_1 * side_2;

    cout << " the perimeter of the triangle is : " << perimeter << endl;
    cout << " the area of the triangle is : " << area << endl;
    return 0;
}


