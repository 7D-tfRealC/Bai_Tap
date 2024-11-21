//bubble sort
#include <iostream>
using namespace std;
int main(){
	int n;
	cout << "nhap n: ";
	cin >> n;
	cout << "nhap mang: ";
	int arr[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
	}
	for(int i=n-1;i>0;i++){
		for(int j=0;j<i;i++){
			if(arr[j] > arr[j+1]){
				int tmp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=tmp;
			}
			
		}
	}
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	}
	return 0;
}
