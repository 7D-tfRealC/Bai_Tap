#include <iostream>
#include <string>
using namespace std;
class Hinhchunhat{
	public:
		float chieu_dai;
		float chieu_rong;
	void input(){
		cout << "nhap chieu dai: ";
		cin >> chieu_dai;
		cout << "nhap chieu rong: ";
		cin >> chieu_rong;}
	float tinhchuvi(){
		float chuvi=(chieu_dai+chieu_rong)*2;
		return chuvi;
	} 
	float tinhdientich(){
		float dientich=chieu_dai*chieu_rong;
		return dientich;
	}
	void print(){
		cout << "chieu dai:" << chieu_dai << endl;
		cout << "chieurong:" << chieu_rong << endl;
		cout << "chu vi: " << tinhchuvi() << endl;;
		cout << "dien tich: " << tinhdientich() << endl;
	}
	
};


int main(){
	Hinhchunhat tinh;
	tinh.input();
	tinh.print();
	
    return 0;
}
