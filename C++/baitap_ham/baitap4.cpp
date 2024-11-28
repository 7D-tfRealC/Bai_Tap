/*
Tạo hàm total theo các yêu cầu sau:
Có 2 tham số:
1. 1 mảng numbers chứa các số nguyên.
2. 1 số nguyên n (n là số lượng phần tử của mảng numbers).
Hàm trả về tổng giá trị của các phần tử trong mảng numbers.
*/
#include <iostream>
using namespace std;
int total(int numbers[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+numbers[i];
    }
    return sum;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << total(arr,5);
    return 0;
}