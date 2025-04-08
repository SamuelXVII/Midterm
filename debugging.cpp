#include<iostream>
using namespace std;

int main() {
    int number = 10;
    if(number == 20) { //add = sign here to make it equality
        cout << "Number is 20" << endl;
    } 
    else {
        cout << "Number is not 20" << endl;
    }

    for(int i = 0; i <= 5; i++) // remove semi colon here
        cout << i << endl;

    return 0;
}
