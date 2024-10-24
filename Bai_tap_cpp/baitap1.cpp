#include <iostream>
using namespace std;

int main() {
   int n;
   cout << "nhap n : " ;
   cin >> n;
   cout << "nhap mang : ";
   int arr[n];
   for(int i=0;i<n;i++){
   		cin >> arr[i];
   		
	
   }
   int min=arr[0];
   int max=arr[0];
   for (int i=1 ; i<n ;i++){
   	if(arr[i]<min){
   		min=arr[i];
	   }
	if(arr[i]>max){
		max=arr[i];
	}
	
   	
   	
   	
   }
   cout << "gia tri nho nhat : " << min << endl;
   cout << "gia tri lon nhat : " << max;
    
    return 0;
}
