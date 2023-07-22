#include<iostream>
using namespace std;
int main(){
	// int a; 
	// cin>>a; 
	// int c[a][a]; 
	// for(int i=0; i<a; i++){
	// 	for(int j=0; j<a; j++){
	// 		///i>=j means that first row and first column 0
	// 		/// second row and column 1
	// 		/// third and fourth 2
	// 		/// and on and on 
	// 		if (i>=j) 
	// 		cout<< "[*]" ;
	// 	}
	// 	cout<< endl; 
	// }

	int a; 
	cin>> a; 
	int arra[a][a] ;
	for(int i=0; i<a; i++){
		for(int j=0; j<a; j++){
			if (i<=j){
				cout<< "[*]" ; 
			}
		}
		cout<< endl; 
	}




}
