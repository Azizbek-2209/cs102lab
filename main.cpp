#include <iostream>
#include <unistd.h>
using namespace std;

//question11
// int main() {
//     int sum=0;
//     int pnum=0;
//     int nnum=0;
//     int num;
//     int inum=0;
//     do {
//         cout << "Enter a number:  ";
//         cin >> num;
//         if (num>0) {
//             pnum=pnum+1;
//             sum=sum+num;
//             inum=inum+1;
//         }
//         else if (num<0){
//             nnum=nnum+1;
//             sum=sum+num;
//             inum=inum+1;
//         }
//     }
//     while(num!=0);
//     cout << "The number of positive numbers: " << pnum << endl;
//     cout << "The number of negative numbers: " << nnum << endl;
//     cout << "The sum of the numbers: " << sum << endl;
//     cout << "The average of all numbers: " << sum/inum <<endl;
//     return 0;
// }

//question12
// int main() {
//     int n;
//     cout << "enter the number: ";
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }
//
//     return 0;
// }

//question13
// int main() {
//     int n;
//     cout << "enter the number: ";
//     int s=0;
//     cin >> n;
//     for (int i = 0; i <=n; i++) {
//         for (int j = 1; j <= i; j++) {
//             cout << "*";
//             s++;
//         }
//         cout << endl;
//     }
//
//     return 0;
// }

//question14
// int main() {
//     int n;
//     cout << "enter the number: ";
//     int s=0;
//     cin >> n;
//     for (int i = 0; i <=n; i++) {
//         for (int j = 1; j <= i; j++) {
//             cout << i;
//             s++;
//         }
//         cout << endl;
//     }
//
//     return 0;
// }

//question15
// int main() {
//     int num;
//     cin >> num;
//     double sum=0.0;
//     for (int i = 1; i <= num; i++) {
//         cout << "1/" << i;
//         if (i < num)
//             cout << " + ";
//         sum = sum + 1.0 / i;
//     }
//     cout << endl;
//     cout << "The sum is " << sum << endl;
//     return 0;
// }

//question16
// int main() {
//     double monthlyRent = 1000;
//     double yearlyRent;
//     double total5Years = 0;
//
//     for (int year = 1; year <= 5; year++) {
//         yearlyRent = monthlyRent * 12;
//         cout << "For year number " << year << "rent per month is" << monthlyRent << endl;
//         cout << "Thetotal for year" << year << "is" << yearlyRent << endl;
//         total5Years += yearlyRent;
//         monthlyRent *= 1.03;
//     }
//     cout << "5 years total rent is " << total5Years << endl;
//     return 0;
// }

//question17
// int main() {
//     int num;
//     cout << "Enter an integer: ";
//     cin >> num;
//
//     int sum = 0;
//     while (num > 0) {
//         sum += num % 10;
//         num /= 10;
//     }
//
//     cout << "The sum of digits is " << sum << endl;
//     return 0;
// }

//question18
// int main() {
//     long binary;
//     int decimal = 0, base = 1, lastdig;
//     cout <<"enter bin num: ";
//     cin >> binary;
//     while (binary > 0) {
//         lastdig = binary % 10;
//         decimal = decimal + lastdig * base;
//         base = base * 2;
//         binary = binary / 10;
//     }
//     cout <<"decimal number is "<< decimal << endl;
//     return 0;
// }

//question19
// int main() {
//     int n;
//     cout <<"enter num: ";
//     cin >> n;
//     for (int i = 2; i <= n; i++) {
//         while (n % i == 0) {
//             cout << i << " ";
//             n = n / i;
//         }
//     }
//     cout << endl;
//     return 0;
// }

//question21
// int main() {
//     int seconds;
//     cout << "seconds: ";
//     cin >> seconds;
//
//     for (int i = seconds - 1; i > 0; i--) {
//         cout << i << "second";
//         cout << " remaining" << endl;
//         sleep(1);
//     }
//     cout << "Stopped" << endl;
//     return 0;
// }

//question22
// int main() {
//     double km;
//     for (int miles = 1; miles <= 10; miles++) {
//         km = miles * 1.609;
//         cout << miles << "   " << km << endl;
//     }
//     return 0;
// }

//question24
// int main() {
//     int evenCount = 0, oddCount = 0;
//     srand(time(0));
//     for (int i = 0; i < 100000; i++) {
//         int num = rand();
//         if (num % 2 == 0)
//             evenCount++;
//         else
//             oddCount++;
//     }
//     cout << "even numbers: " << evenCount << endl;
//     cout << "odd numbers: " << oddCount << endl;
//     return 0;
// }