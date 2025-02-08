#include <iostream>
#include <string>
using namespace std;
class Sinhvien{
	public:
		string hoten;
		int tuoi;
		string lop;
	void input(){
		cout << "Nhap ten: ";
		getline(cin,hoten);
		cout << "tuoi: " ;
		cin >> tuoi;
		
		cout << "nhap lop: ";
		cin.ignore();
		getline(cin,lop);
		
		
	}
	void print(){
		cout << hoten << tuoi << lop;
	}
};

int main(){
	Sinhvien sv1;
	sv1.input();
	sv1.print();
	
	
    return 0;
}
