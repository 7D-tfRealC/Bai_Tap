// xoa ky tu dau va ky tu cuoi
#include <iostream>
#include <string>
using namespace std;
int main(){
    string str;
    cout << "nhap chuoi: ";
    getline(cin,str);
    while(str[0] == ' '){
        str.erase(0,1);
    }
    while(str[str.size() - 1] == ' '){
        str.erase(str.size() - 1,1);
    }
    cout << "ket qua: " << str; 
    return 0;
}