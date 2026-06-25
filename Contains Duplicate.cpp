#include <iostream>
using namespace std ;

int main (){
	int n ; 
	cout<<" nhap so phan tu n : "; cin >> n;
	int arr[n];
	
	for(int i = 0 ; i < n ; i++){
		cout<<"arr[ "<<i<<" ] : ";
		cin >>arr[i];
	}
	
	cout<<" hien thi toan bo mang :  "<<endl;
	for(int i = 0 ; i< n ; i++){
		cout<<" "<<arr[i];
	}
	
	for(int i = 0 ; i< n ; i++){
		for(int j = i+1 ; j < n ; j++){
			if(arr[i] == arr[j]){
				return true;
			}
		}
	}
	return true;
	
	return 0;
}