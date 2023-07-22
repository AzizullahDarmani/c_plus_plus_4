#include<iostream>
using namespace std;
int main(){
	// int a; 
	// int max= -1e9; 
	// cin>> a; 
	// int c[a][a];
	// for(int i=0; i<a; i++){
	// 	for(int j=0; j<a; j++){
	// 		cin>> c[i][j]; 
	// 		if (c[i][j]>max)
	// 		max = c[i][j]; 
		  
	// 	}
	// }
	// for (int i=0; i<a; i++){
	// 	for (int j=0; j<a; j++){
	// 		 if (c[i][j]==max){
	// 		 	cout<< i+1<< " "<< j+1; 
	// 		 	return 0; 
	// 		 }
	// 	}
	// }




	int a; 
	cin>> a ;
	int max = -1e9 ; 
	int arr[a][a] ; 
	for(int i=0; i<a; i++){
		for(int j=0; j<a ; j++){
			cin>> arr[i][j] ; 
			if (arr[i][j]>max)
			max = arr[i][j] ; 
		}
	}
	for(int i=0; i<a; i++){
		for(int j=0; j<a; j++){
			if (arr[i][j]==max)
			cout<< i+1 << " " << j+1 ; 

		}
	}

	return 0; 


}
