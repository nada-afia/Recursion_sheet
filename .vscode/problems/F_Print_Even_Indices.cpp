#include <iostream>
using namespace std;
void print(int arr[], int num, int index){
    if(index >= num)
        return;

    print(arr, num, index + 2);

    cout << arr[index] << " ";
}

int  main(){
    int num;
    cin>>num;
    int array[num];
    for(int i=0; i<num; i++){
        cin>>array[i];
    }
    print(array, num, 0);

    
    return 0;
}