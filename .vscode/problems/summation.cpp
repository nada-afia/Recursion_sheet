#include <iostream>
using namespace std;
long long  print(int arr[], int num, int index){
    if(index >= num)
        return 0;
    return arr[index] + print(arr, num, index + 1);

}

int  main(){
    int num;
    cin>>num;
    int array[num];
    for(int i=0; i<num; i++){
        cin>>array[i];
    }
     cout<<print(array, num, 0);

    
    return 0;
}