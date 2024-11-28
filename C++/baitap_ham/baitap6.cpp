/*
Tạo hàm max theo các yêu cầu sau:

1.Có 2 tham số:
. 1 mảng numbers chứa các số nguyên.
. 1 số nguyên n (n là số lượng phần tử của mảng numbers).
2.Hàm trả về giá trị lớn nhất của mảng numbers.*/
#include <iostream>
using namespace std;
int gia_tri_lon_nhat(int numbers[],int n){
    int max=0;
    for(int i=0;i<n;i++){
        if(numbers[i]>max){
            max=numbers[i];
        }
    }
    return max;
}
int main(){
    int n;
    cin >> n;
    int numbers[n];
    for(int i=0;i<n;i++){
        cin >> numbers[i];
    }
    cout << gia_tri_lon_nhat(numbers,n);
    return 0;
}