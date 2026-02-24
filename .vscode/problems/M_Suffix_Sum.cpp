#include <iostream>
using namespace std;
long long  print(int arr[], int num, int index){
    if(index >= num)
        return 0;
    return arr[index] + print(arr, num, index + 1);

}

int  main(){
    int N,M;
    cin>>N>>M;
    int array[N];
    for(int i=0; i<N; i++){
        cin>>array[i];
    }
     cout<<print(array, N,N-M);

    
    return 0;
}