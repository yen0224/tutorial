#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int inputA, inputB;
    cin>>inputA>>inputB;
    cout<<"the bigger one is "<<((inputA>inputB)?"inputA":"inputB");
    return 0;
}
