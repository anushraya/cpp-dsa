// //while loop(loop continues till we print positive numbers nd terminates when we enter -ve number)

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n>0){
        cout<<n<<endl;
        cin>>n;

    }
    return 0;
}


// same program with do while

#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    do{
        cout<<n<<endl;
        cin>>n;

    }while(n>0);
    return 0;
}

//difference is that in do while loop will definitely run atleat once..even if we enter a -ve number whereas loop
// terminates immediately if we enter -ve number in while loop