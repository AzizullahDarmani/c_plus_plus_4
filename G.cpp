#include<iostream>
using namespace std;
int main(){
	///from left to right side
//	int a; 
//	cin>>a; 
//	for(int i=0; i<a; i++){
//		for(int j=0; j<a; j++){
//			if (i+j==a-1)
//			cout<< i+1; 
//			else 
//			cout<< "."; 
//		}
//		cout<< endl; 
//	}



////from rigth to left side
	// int a; 
	// cin>>a; 
	// int c[a][a]; 
	// for(int i=0; i<a; i++){
	// 	for(int j=0; j<a; j++){
	// 		if (i==j)
	// 		cout<< i+1; 
	// 		else 
	// 		cout<< "." ; 
	// 	}
	// 	cout<< endl; 
	// }


	int a ;
	cin>> a; 
	int arr[a][a] ; 
	for(int i=0; i<a; i++){
		for(int j=0; j<a; j++){
			if (i+j==a-1){
				cout<< i+1 ; 
			}else {
				cout<< "." ; 
			}

		}
		cout<< endl; 
	}



}
