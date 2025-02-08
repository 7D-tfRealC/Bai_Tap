#include <iostream>
#include <string>
using namespace std;
class Sinhvien{
	public:
		string hoten;
		float diemtoan;
		float diemvan;
	void input(){
		cout << "nhap ten: " ;
		cin.ignore();
		getline(cin,hoten);
		cout << "nhap diem toan: ";
		cin >> diemtoan;
		cout << "nhap diem van: ";
		cin >> diemvan;
	}
	float diemtrungbinh(){
		float DTB=(diemtoan+diemvan)/2;
		return DTB;
	}
	void xeploai(){
		if(diemtrungbinh()>=8.0){
			cout << "Gioi";
		}
		else if(diemtrungbinh()>=6.5 && diemtrungbinh()<8.0){
			cout << "Kha";
		}
		else if(diemtrungbinh()>=5.0 && diemtrungbinh()<6.5){
			cout <<"Yeu";
		}
		else{
			cout << "Kem";
		}
	}
	void print(){
		cout << "Ten: " << hoten << endl;
		cout << "Diem toan: " <<diemtoan << endl;
		cout << "Diem van: " << diemvan<< endl;
		cout <<"Diem trung binh: " <<diemtrungbinh()<<  endl;
		xeploai();
	}
		
};




int main(){
	Sinhvien bangdiem;
	bangdiem.input();
	bangdiem.print();


	
    return 0;
}
