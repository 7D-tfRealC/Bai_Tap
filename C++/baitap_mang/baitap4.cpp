//Nhập vào một số nguyên dương 
#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "nhap n: ";
    cin >> n;
    int count = 0;
    while(n>0){
        n/=10;
        count=count + 1;

    }
    cout<< "so chu so la: " << count ;



    return 0;
}