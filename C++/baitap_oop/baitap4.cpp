//chuvi=2* pi * r
//dientich pi*r*2
#include <iostream>
#include <string>
using namespace std;
class Hinhtron{
	public:
		float bankinh;
	void input(){
		cout <<"nhap ban kinh: " ;
		cin.ignore();
		cin >>bankinh;
	}
	float tinhchuvi(){
		float pi=3.14;
		return 2*pi*bankinh;
	}
	float tinhdientich(){
		float pi=3.14;
		return pi*bankinh*bankinh;
	}	
	void print(){
		cout <<"chu vi: " << tinhchuvi()<<endl;
		cout << "dien tich: " <<tinhdientich()<< endl;
	}		
};

	

int main(){
	Hinhtron tinh;
	tinh.input();
	tinh.print();
	
    return 0;
}
