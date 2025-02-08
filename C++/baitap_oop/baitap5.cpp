#include <iostream>
using namespace std;
class Person{
    private:
        string name;
        int age;
    public:
    void input(){
        cout << "Nhap ten: " << endl;
        getline(cin,name);
        cout << "Nhap tuoi" << endl;
        cin >> age;
        cin.ignore();

    }
        void print(){
            cout << "Ten: " << name << endl;
            cout << "Tuoi: " << age << endl;
        }
};
class Student : public Person{
    private:
        string ID;
        float DTB;
    public: 
        void input1(){
            Person::input();
            cout << "Nhap ID: " << endl;
            getline(cin,ID);
            cout << "Nhap DTB: " << endl;
            cin >> DTB;
        }
        void print(){
            Person::print();
            cout << "ID: " << ID << endl;
            cout << "DTB: " << DTB << endl;
        }
        void tinhDTB(){
            if(DTB >=5){
                cout << "Len lop " ;
            }
            else{
                cout << "Hoc lai ";
            }
        }
};

int main(){
    Student student1{};
    student1.input1();
    student1.print();
    student1.tinhDTB();
    return 0;

}
