#include <iostream>
using namespace std;
long long print(int num){
    if(num<=1){
        return 1;
    }
    return num * print(num-1);
}

int  main(){
    int num;
    cin>>num;
    cout<<print(num)<<endl;
    return 0;
}