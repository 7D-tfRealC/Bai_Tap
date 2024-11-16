//viet hoa chu cai dau 

#include <iostream>
#include <string>
using namespace std;
int main(){
	string str;
	getline(cin,str);
	for(int i=0;i<str.length();i++){
		str[i]= tolower(str[i]);
		
	}
	if(str[0] != ' '){
		str[0]=toupper(str[0]);
	}
	for(int i=0;i<str.length();i++)	{
		if(str[i] == ' ' && str[i+1] !=' '){
		str[i+1]=toupper(str[i+1]);
		}
	}
	cout << str;
	return 0;
}