#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int x,y;
    int b;
    cout<<"x=?\n";
    cin>>x;
    cout<<"y=?\n";
    cin>>y;
    if(x>0){
        if(y>0)b=1;
        else b=4;
    }
    else{
        if(y>0)b=2;
        else b=3;
    }
    cout<<"("<<x<<","<<y<<")\n";
    cout<<b<<"象限"<<endl;
    return 0;
}
