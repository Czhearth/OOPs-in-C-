#include <iostream>
using namespace std;

void printMessage() {
    cout << "Name:" << endl;
    cout << "Registration No:" << endl;
    cout << "PSUC grade:" << endl;
    cout << "%age in C:" << endl;
}

void declare_Variables() {
    int a, b;
    char c, d;
    float f;

}

void getUserInput() {
    int the_var;
    cout << "\nPlease enter an integer: ";
    cin >> the_var;
    cout << "\nYou entered: " << the_var << endl;
}
float calculateTriangleArea(float base, float height) {
    return 0.5 * base * height;
}

int addTwoNos(int a, int b) {
    return (a + b);
}

int main() {
    printMessage();
    declare_Variables();


float base, height, triangleArea;
cout << "Enter base of triangle: ";
cin >> base;
cout << "Enter height of triangle: ";
cin >> height;

triangleArea = calculateTriangleArea(base, height);
cout << "Area of triangle is " << triangleArea << endl;

int num1, num2, sum;
cout << "Enter first number: ";
cin >> num1;
cout << "Enter second number: ";
cin >> num2;

sum = addTwoNos(num1, num2);
cout << "Sum of " << num1 << " and " << num2 << " is " << sum << endl;

return 0;
}