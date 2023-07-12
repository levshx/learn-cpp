#include <iostream>
#include <windows.h>
//#include "../vendor/glad/include/glad/glad.h"


using std::cout;
using std::cin;
using std::endl;

int main() {
    cout<<"PROGRAM VERSION 0.1"<<endl;

    setlocale(0, "");

    int a, b;
    cout<<"enter number a: ";
    cin>>a;
    cout<<"enter number b: ";
    cin>>b;
    if (a+b>10) {
        cout<<"BIG";
    }
    else {
        cout<<"little";
    }

    

    return 0;
}