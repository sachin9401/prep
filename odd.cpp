#include <iostream>
using namespace std;
int main()
{
    int num1,num2;  
    cout<<"please enter a number\n";
    cin>>num1;
    // cout<<num1<<"is an even";
    // <<"is an odd";
    if (num1 % 2 == 0){
        cout<<"Given number is even";
    }
    else{
        cout<<"Given number is odd";
    }

    return 0;
}
