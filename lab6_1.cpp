#include<iostream>
using namespace std;

int main(){
    int input,odd=0,even=0;
    cout << "Enter an integer: ";
    cin >> input;
    while(input!=0){
        if(input%2!=0){
            odd++;
        }else{
            even++;
        }
        cout << "Enter an integer: ";
        cin >> input;
    }
    cout << "#Even numbers = " << even;
    cout << endl;
    cout << "#Odd numbers = " << odd;
    return 0;
}


