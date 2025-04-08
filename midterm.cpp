#include <iostream> //Standard c++ library
#include <cmath> //Math operations 
#include <string> //sentences 

using namespace std; //lets you use cin & cout

void calculateArea();
void isPrime();
void part3();


int main () { //Main function
//calculateArea();
//isPrime();
part3();
return 0;
}

void calculateArea() {
float length, width;
cout << "What's the length? ";
cin >> length;
cout << "What's the width? ";
cin >> width;
cout << "Your area is " << length * width << ".\n";
}

void isPrime() { //create a loop to check if remainder is 0 after dividing by n-1 and exclude 1
double number;
cout << "Type number here: ";
cin >> number;

//if (number % 2 == 0 and number % sqrt(number) == 0) {
        //cout << number << " is not prime.";
    //} 
    //else {
        //cout << number << " is prime.";
    //}
}

void part3() {
string n;
int a, num;
cout << "What's your name? ";
cin >> n;
cout << "What's your age? ";
cin >> a;
cout << "What's your favorite number? ";
cin >> num;
cout << "So your name is "<< n<< ", your "<< a<< " years old \n";
cout << "and your favorite number is " << num<< ".\n";
}