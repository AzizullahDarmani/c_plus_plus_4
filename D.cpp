#include<iostream>
using namespace std;
int main(){
	// int n; 
	// cin>> n; 
	// int c[n][n]; 
	// for(int i=0; i<n; i++){
	// 	for(int j=0; j<n; j++){
	// 		if (i ==0) 
	// 		cout<< j << " ";
	// 		else if (j==0)
	// 		cout<< i << " "; 
	// 		else cout<< i*j<< " "; 
			
	// 	}
	// 	cout << endl; 
	// }


	int a ;
	cin>> a; 
	for(int i=0; i<a; i++){
		for(int j=0; j<a; j++){
			if (i==0){
				cout<< j << " " ; 
			} else if (j==0){
				cout<< i << " "; 
 			} else {
				cout<< i*j << " " ; 
			}
		}
		cout<< endl ; 
	}
	




}
