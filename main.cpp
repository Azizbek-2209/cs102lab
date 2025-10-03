#include <iostream>
using namespace std;#include <cmath>

//problem1
// int multiply(int a, int b) {
//     return a * b;
// }
// int main() {
//     int num1, num2;
//     cout << "Enter num1: ";
//     cin >> num1;
//     cout << "Enter num2: ";
//     cin >> num2;
//     int result = multiply(num1, num2);
//     cout << "product: " << result << endl;
//     return 0;
// }

//problem2
// double acceleration(double v1, double v2, double t) {
//     if (t == 0) {
//         cout << "Time can't be a zero!" << endl;
//         return 0;
//     }
//     return (v2 - v1) / t;
// }
//
// int main() {
//     double v1, v2, t;
//     cout << "Enter v1: ";
//     cin >> v1;
//     cout << "Enter v2: ";
//     cin >> v2;
//     cout << "Enter t: ";
//     cin >> t;
//
//     cout << "Acc: " << acceleration(v1, v2, t) << endl;
//     return 0;
// }

//problem3
// void fun(double r) {
//     double circumference = 2 *3.1415* r;
//     double area =3.1415 * r * r;
//     cout << "circumference: " << circumference << endl;
//     cout << "Area: " << area << endl;
// int main() {
//     double radius;
//     cout << "enter radius: ";
//     cin >> radius;
//     fun(radius);
//     return 0;
// }

//problem4
// void fun(double r) {
//     double circumference = 2*3.1415*r;
//     double area =3.1415*r*r;
//     cout << "circumference: " << circumference << endl;
//     cout << "Area: " << area << endl;
// }
// void fun(double a, double b) {
//     double perimeter = 2 * (a + b);
//     double area = a * b;
//     cout << "Perimeter: " << perimeter << endl;
//     cout << "Area: " << area << endl;
// }
//
// int main() {
//     double r, a, b;
//     cout << "radius of circle: ";
//     cin >> r;
//     fun(r);
//     cout << "sides of rectangle: ";
//     cin >> a >> b;
//     fun(a, b);
//     return 0;
// }

//problem5
// void swapNumbers(int &a, int &b) {
//     a = a + b;
//     b = a - b;
//     a = a - b;
// }
//
// int main() {
//     int x, y;
//     cout << "Enter two numbers: ";
//     cin >> x >> y;
//     swapNumbers(x, y);
//     cout << "After swap: x = " << x << ", y = " << y << endl;w
//     return 0;
// }

//problem6
// long long Factorial(int n = 1) {
//     long long fact = 1;
//     for (int i = 1; i <= n; i++) {
//         fact *= i;
//     }
//     return fact;
// }
// int main() {
//     int num;
//     cout << "Enter a number: ";
//     if (cin >> num) {
//         cout << "Factorial: " << Factorial(num) << endl;
//     } else {
//         cout << "Factorial: " << Factorial() << endl;
//     }
//     return 0;
// }

//problem7
// int gcd(int num1, int num2) {
//     while (num2 != 0) {
//         int temp = num2;
//         num2 = num1 % num2;
//         num1 = temp;
//     }
//     return num1;
// }
// int main() {
//     int a, b;
//     cout << "Enter two numbers: ";
//     cin >> a >> b;
//     cout << "Gcd = " << gcd(a, b) << endl;
//     return 0;
// }

//problem8
// void printMax(int a, int b, int c) {
//     int maxVal = a;
//     if (b > maxVal) maxVal = b;
//     if (c > maxVal) maxVal = c;
//     cout << "Max: " << maxVal << endl;
// }
// void printMin(int a, int b, int c) {
//     int minVal = a;
//     if (b < minVal) minVal = b;
//     if (c < minVal) minVal = c;
//     cout << "Min: " << minVal << endl;
// }
// int main() {
//     int x, y, z;
//     cout << "Enter three numbers: ";
//     cin >> x >> y >> z;
//     printMax(x, y, z);
//     printMin(x, y, z);
//     return 0;
// }

//problem9
// int sum(int a, int b) {
//     return a + b;
// }
// int subtract(int a, int b) {
//     return a - b;
// }
// int product(int a, int b) {
//     return a * b;
// }
// double division(int a, int b) {
//     if (b == 0) {
//         cout << "Div by zero!" << endl;
//         return 0;
//     }
//     return (double)a / b;
// }
// int main() {
//     int num1, num2;
//     cout << "Enter two numbers: ";
//     cin >> num1 >> num2;
//     cout << "Sum: " << sum(num1, num2) << endl;
//     cout << "Subtract: " << subtract(num1, num2) << endl;
//     cout << "Product: " << product(num1, num2) << endl;
//     cout << "Division: " << division(num1, num2) << endl;
//     return 0;
// }

//problem10
// int getTriangularNumber(int n) {
//     return n * (n + 1) / 2;
// }
// int main() {
//     const int TOTAL = 75;
//     for (int i = 1; i <= TOTAL; i++) {
//         cout << getTriangularNumber(i) << "\t";  // print number with tab
//         if (i % 5 == 0) cout << endl;            // new line after every 5 numbers
//     }
//     return 0;
// }

//problem11
// void displayEven(int number) {
//     if (number < 0) number = -number;
//     int divisor = 1;
//     int temp = number;
//     while (temp >= 10) {
//         temp /= 10;
//         divisor *= 10;
//     }
//     while (divisor > 0) {
//         int digit = number / divisor;
//         if (digit % 2 == 0) cout << digit << " ";
//         number %= divisor;
//         divisor /= 10;
//     }
//     cout << endl;
// }
// int main() {
//     int num;
//     cout << "Enter an integer: ";
//     cin >> num;
//     cout << "Even digits: ";
//     displayEven(num);
//     return 0;
// }

//problem12
// int cubeOfDigits(int number) {
//     int sum = 0, digit;
//     int temp = (number < 0) ? -number : number;
//     while (temp > 0) {
//         digit = temp % 10;
//         sum += digit * digit * digit;
//         temp /= 10;
//     }
//     return sum;
// }
//
// void isArmstrong(int sum, int number) {
//     if (sum == number) {
//         cout << number << " is an Armstrong number." << endl;
//     }
//     else cout << number << " is NOT an Armstrong number." << endl;
// }
//
// int main() {
//     int num;
//     cout << "Enter an integer: ";
//     cin >> num;
//     int sum = cubeOfDigits(num);
//     isArmstrong(sum, num);
//     return 0;
// }

//problem13
// int numberOfDaysInFebruary(int year) {
//     if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
//         return 29;
//     else
//         return 28;
// }
// int main() {
//     cout << "Year\tDays in February" << endl;
//     for (int year = 1985; year <= 1993; year++) {
//         cout << year << "\t" << numberOfDaysInFebruary(year) << endl;
//     }
//     return 0;
// }

//problem14
// double futureInvestmentValue(double investmentAmount, double monthlyInterestRate, int years) {
//     double result = 1;
//     for (int i = 0; i < years * 12; i++) {
//         result *= (1 + monthlyInterestRate);
//     }
//     return investmentAmount * result;
// }
//
// int main() {
//     double investmentAmount, annualInterestRate;
//     cout << "invest amount: ";
//     cin >> investmentAmount;
//     cout << "int rate: ";
//     cin >> annualInterestRate;
//     double monthlyInterestRate = annualInterestRate / 100.0 / 12.0;
//     cout << "Future Value" << endl;
//     for (int year = 1; year <= 30; year++) {
//         double value = futureInvestmentValue(investmentAmount, monthlyInterestRate, year);
//         cout << year << "      " << value << endl;
//     }
//     return 0;
// }

//problem15
void printASCII(char ch1, char ch2, int numberPerLine) {
    int count = 0;
    for (char ch = ch1; ch <= ch2; ch++) {
        cout << ch << ":" << int(ch) << " ";
        count++;
        if (count % numberPerLine == 0) cout << endl;
    }
    if (count % numberPerLine != 0) cout << endl;
}
int main() {
    printASCII('a', 'm', 6);
    return 0;
}