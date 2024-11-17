#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "nhap n: ";
    cin >>n;
    cout << "nhap mang: ";
    int arr[n];
    int i=0;
    int sum=0;
    while(i<n){
        cin >> arr[i];
        sum=sum+arr[i];
        i++;
    }
    cout << "tong cac phan tu trong mang la: " << sum;

    return 0;
}


