#include <iostream>
using namespace std;
int main(int argc, char* argv[])
{
    int first{};
    cout << "Enter First Number: " << endl;
    cin >> first;

    int second{};
    cout << "Enter Second Number: " << endl;
    cin >> second;
    int sum = 0;

    if (first < second){
        while(first < second){
            
            sum += first; //sum = sum + 1
            first++; //first = first +1
        }
        cout << "The sum is " << sum + second << endl;
    } else{
        cout << "Try again" << endl;
    }

    return 0;
}