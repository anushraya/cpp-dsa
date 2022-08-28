#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter num"<<endl;
    cin>>n;
    if(n%2==0&&n%3==0)
    {
        cout<<"num is divisible by both 2 and 3"<<endl;
    }
    else if(n%2==0){
        cout<<"num is only divisible by 2"<<endl;
    }
    else if(n%3==0){
        cout<<"num is divisible by 3"<<endl;
    }
    else{
        cout<<"neither divisible by 2 nor by 3"<<endl;
    }
    return 0;
}