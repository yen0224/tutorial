#include <iostream>
using namespace std;
int main() {
    int inputA, inputB;
    cin>>inputA>>inputB;
    if (inputA>inputB)
    {
        cout<<"A>B";
    }
    else if(inputA<inputB){
        cout<<"A<B";
    }
    else{
        cout<<"A=B";
    }
    return 0;
}
