// // program for going out  only on odd days, total pocket money is 3000 and each tym u go our u spend rs 300.
// #include <iostream>
// using namespace std;
// int main()
// {
//     int pocketmoney=3000;
//     for(int date=1; date<=30;date++)
//     {
//         if(date%2==0){           
//             continue;                //continue statements does the skipping thing,for eg in this case dates divisible by 2 will be skipped
//         }
//         if(pocketmoney==0){
//             break;
//         }
//         cout<<"go out today"<<endl;
//         pocketmoney=pocketmoney-300;
//     }
// return 0;
// }


//skip numbers divisible by 3
#include <iostream>
using namespace std;
int main()
{
    for(int i=1;i<=100;i++)
    {
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;
    }
return 0;
}
