/*Tạo hàm total theo các yêu cầu sau:

1.Có 2 tham số:
. 1 mảng 2 chiều numbers chứa các số nguyên.
. 1 số nguyên m (m là số hàng của mảng numbers).
. 1 số nguyên n (n là số cột của mảng numbers).
2.Hàm trả về tổng giá trị của các phần tử trong mảng numbers.*/
#include <iostream>
using namespace std;
int total(int numbers[][10],int m,int n){
    int sum=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            sum=sum+numbers[i][j];
        }
    }
    return sum;
}
int main(){
    int m,n;
    cin >> m >> n;
    int numbers[10][10];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           cin >> numbers[i][j];
        }
    }
    cout << total(numbers,m,n);
    return 0;
}