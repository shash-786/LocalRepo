#include<iostream>

void feature(){
    std::cout << "new feature" << std::endl;
}

int main(){
    int arr[] = {3,2,1,0};
    int size = sizeof(arr)/sizeof(arr[0]);
    std::sort(arr,arr+size);
    for(auto i:arr){
        std::cout << i << " ";
    }
    return 0;
}