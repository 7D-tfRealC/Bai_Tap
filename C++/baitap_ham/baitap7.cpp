/*Tạo hàm total_odd theo các yêu cầu sau:

1.Có 2 tham số:
- 1 mảng numbers chứa các số nguyên.
- 1 số nguyên n (n là số lượng phần tử của mảng numbers).
2.Hàm trả về tổng các số lẻ trong mảng numbers, nếu mảng không có số lẻ nào, hãy trả về 0.*/
#include <iostream>
using namespace std;
int total_odd(int numbers[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        if(numbers[i] % 2 != 0){
            sum=sum+numbers[i];
        }
    }
    return sum;
}
int main(){
    int n;
    cin >> n;
    int numbers[n];
    for(int i=0;i<n;i++){
        cin >> numbers[i];
    }
    cout << total_odd(numbers,n);
    return 0;
}