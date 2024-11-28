/*Tạo hàm is_prime và total_prime thỏa mãn các yêu cầu sau:

1.Hàm is_prime nhận vào số nguyên n và kiểm tra xem n có phải số nguyên tố hay không.
2.Hàm total_prime nhận vào 1 mảng số nguyên, số lượng phần tử của mảng và trả về tổng của;
các số nguyên tố có trong mảng, nếu không có số nguyên tố nào thì trả về 0.
*/
#include <iostream>
#include <math.h>
using namespace std;
bool is_prime(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
int total_prime(int numbers[],int n){
    int sum=0;
    for(int i=0;i<n;i++){
        if(is_prime(numbers[i])){
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
    cout << total_prime(numbers,n);
    return 0;
}