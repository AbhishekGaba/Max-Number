#include <iostream>
using namespace std;

 int max( int num1, int num2) {

        int result;
        if ( num1 > num2){


            result = num1;


        } else {

            result = num2;


        }

    }



int main() {



    int a;
    int b;
    cout << "What is the first number?" << endl;
    cin >> a;
    cout << "What is the second number?" << endl;
    cin >> b;
    cout << "The bigger number is " << max(a,b);





    return 0;
}
