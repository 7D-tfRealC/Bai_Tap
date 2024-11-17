//dem so phan tu chan,le
#include <iostream>
using namespace std;
int main(){
    int n, so_chan=0,so_le=0;
    cout << "nhap n: ";
    cin >> n;
    cout << "nhap mang: ";
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            so_chan=so_chan+1;
        }
        else{
            so_le=so_le+1;
        }
    }
    cout << "so phan tu chan la: "<< so_chan << endl;
    cout << "so phan tu le la: " <<so_le;


    return 0;
}