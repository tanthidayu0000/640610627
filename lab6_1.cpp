#include<iostream>
using namespace std;

int main(){
    int x;
    int evn = 0;
    int odn = 0;
    cout << "Enter an integer: ";
    cin >> x;
    while(x != 0){
        if(x % 2 == 0){
            evn += 1;
        }
        else{
            odn += 1;
        }
    cout << "Enter an integer: ";
    cin >> x;
    }
    cout << "#Even numbers = " << evn <<endl;
    cout << "#Odd numbers = " << odn;
    return 0;
}