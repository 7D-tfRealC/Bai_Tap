/*Viết chương trình sử dụng vòng lặp for để in ra các số từ 1 đến 10.*/
#include <iostream>
using namespace std;
int main(){
    int numbers[10]={1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<10;i++){
        cout << numbers[i] << " ";
    }
    return 0;

}