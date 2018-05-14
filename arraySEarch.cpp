#include <iostream>
int indexFun(int *arr, int f, int l, int cam) {
    int mid;
    if(f <= l){
    mid = (f + l) / 2;
    if(arr[mid] == cam){
       std::cout << "Index is" << mid;
       return mid
    } else if(arr[mid] > cam){
       return  indexFun(arr, f, mid, cam);
    } else if(arr[mid] < cam){
       return indexFun(arr, mid, l, cam);
    }
    } else {
      std::cout << "No matches";
        return 0;
    }
}

int main() {
    int len = 6;
    std::cout << "input arr length > 1 or it will be done by default\n";
    std::cin >> len ;
    if(len < 2){
        len = 6;
    }
    
    int * arr = new int[len];

    for(int i = 0; i < len; ++i) {
    std::cout << "arr[" << i << "]= ";
    std::cin >> arr[i];
    std::cout << "\n";
    }
    int num;
    std::cin >> num;
    std::cout << indexFun(arr, 0, len-1, num);
    
    delete [] arr;
}
