#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter first no.\n";
    cin>>a;
    cout<<"enter second no. \n";
    cin>>b;
    cout<<"enter third no.\n";;
    cin>>c;
    if(a>b)
    {
        if(a>c)
        {
            cout<<a<<endl;
        }
        else{
            cout<<c<<endl;
        }

    }
    else
    {
        if(b>c)
        {
            cout<<b<<endl;
        }
        else{
            cout<<c<<endl;
        }
    }
    return 0;
}