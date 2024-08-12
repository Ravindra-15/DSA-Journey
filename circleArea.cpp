#include <iostream>
using namespace std;
float getArea(float radious){
    float result = 3.14*radious*radious;
    return result;
}
int main() {
    float radious;
    cout << "Enter The Radious of Circle :";
    cin >> radious;
    float area = getArea(radious);
    cout << "The Area of Circle is :" << area;
    return 0;
}