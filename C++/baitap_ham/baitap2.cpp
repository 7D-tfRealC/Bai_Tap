// Tạo hàm tính giai thừa của n, với n là tham số.
#include <iostream>
using namespace std;
unsigned long long giai_thua(int n){
    unsigned long long a=1;
    for(int i=1;i<=n;i++){
        a=a*i;
    }
    return a;
}
int main(){
    int n;
    cin >> n;
    cout << giai_thua(n);
    return 0;
}