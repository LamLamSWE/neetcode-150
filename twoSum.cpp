#include <iostream>
using namespace std ;

int main (){
	int n , target;
	cout<<" nhap n : "; cin >>n;
	cout<<" nhap target : " ; cin >> target;
	int arr[n];
	
	
	for(int i = 0 ; i < n ; i++){
		cout<<" arr[ "<<i<<" ] : ";
		cin>>arr[i];
	}
	
	cout<<" hien thi mang \n";
	for( int i = 0 ; i < n ; i++ ){
		cout<<" "<<arr[i];
	}
	
	
	for( int i = 0 ; i < n ; i++){
		for( int j = i + 1 ; j < n ; j++){
			if(arr[i] + arr[j] == target){
			cout<<i<<" , "<<j;
			}
		}
	}
	return {};
	
	return 0;
}