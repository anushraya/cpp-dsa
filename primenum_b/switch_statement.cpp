#include<iostream>
using namespace std;
int main()
{
    char button;
    cout<<"enter a input";
    cin>>button;
    switch(button)
    {
        case 'a':
        cout<<"hello"<<endl;
        break;
        case 'b':
        cout<<"namaste"<<endl;
        break;
        case 'c':
        cout<<"hola"<<endl;
        break;
        case 'd':
        cout<<"ciao"<<endl;
        break;
        case 'e':
        cout<<"salut"<<endl;
        break;
        default:
        cout<<"I am still learning more"<<endl;
        break;

    }
 return 0;
}