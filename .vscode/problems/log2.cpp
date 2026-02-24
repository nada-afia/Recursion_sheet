#include <iostream>
using namespace std;
long long  log(long long num){
    if(num==1){
        return 0;
    }
        return 1 + log(num/2);

}

int  main(){
    long long num;
    cin>>num;
    cout<<log(num);
    return 0;
}