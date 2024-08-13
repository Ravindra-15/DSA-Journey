#include <iostream>
using namespace std;
float getArea(float radius){
    float result = 3.14*radius*radius;
    return result;
}
int main() {
    float radius;
    cout << "Enter The Radius of Circle :";
    cin >> radius;
    float area = getArea(radius);
    cout << "The Area of Circle is :" << area;
    return 0;
}