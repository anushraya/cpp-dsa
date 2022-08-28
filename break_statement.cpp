// program for going out  only on odd days
#include <iostream>
using namespace std;
int main()
{
    for(int date=1; date<=30;date++)
    {
        if(date%2==0){           
            continue;                //continue statements does the skipping thing,for eg in this case dates divisible by 2 will be skipped
        }
        cout<<"go out today"<<endl;
    }
return 0;
}

