/*Tạo hàm kiểm tra xem số nguyên n có phải số nguyên tố hay không với n là tham số của hàm.
Nếu n là số nguyên tố thì in ra 1, ngược lại thì in ra 0.*/
#include <iostream>
#include <math.h>
using namespace std;
int so_nguyen_to(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin >> n;
    cout << so_nguyen_to(n);
    return 0;
}