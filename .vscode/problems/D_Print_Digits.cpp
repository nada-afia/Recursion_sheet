#include <iostream>
using namespace std;
void print(int num){
    if(num==0){
        return;
    }
    print(num/10);
    cout<<num%10<<" ";
}

int  main(){
    int num;
    cin>>num;
    while (num--)
    {
        int number;
        cin>>number; 
        if(number == 0){
            cout << 0;
        } else {
            print(number);
        }
        
        cout << endl;
    
    }
    return 0;
}