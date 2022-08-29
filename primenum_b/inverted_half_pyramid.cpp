#include<iostream>
using namespace std;
int main()
{
    int i,j,row,column;
    cout<<"<enter rows and columns"<<endl;
    cin>>row>>column;
    for(i=row;i>=1;i--){
        for(j=i;j>0;j--){
            cout<<"*";
        }
        cout<<endl;

    }
    return 0;
}