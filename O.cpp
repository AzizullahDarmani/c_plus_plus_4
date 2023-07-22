#include<iostream>
#include<cmath>
using namespace std;
int main(){
	// int a; 
	// cin>> a; 
	// int c[a][a]; 
	// for(int i=0; i<a; i++){
	// 	for(int j=0; j<a; j++){
	// 		cin>> c[i][j]; 
	// 	}
	// }
	// int max=-1e9-1; 
	// int box_i, box_j; 
	// for(int i=0; i<a; i++){
	// 	for(int j=0; j<a; j++){
	// 		if (i==j){
	// 			if (c[i][j]>max){
	// 				max= c[i][j]; 
	// 				box_i=i; 
	// 				box_j=j; 
	// 			}
	// 		}
	// 	}
	// }
	// cout<< "Maximum element is: "<< max << " with coordinates: "<< box_i+1<<";"<<box_j+1<< endl;
	// return 0; 



	int a ;
	cin>> a; 
	int max= -1e9; 
	int arr[a][a]; 
	for(int i=0; i<a ;i++){
		for(int j=0; j<a; j++){
			cin>> arr[i][j]  ;
		}
	}
	for(int i=0; i<a; i++){
		for(int j=0; j<a; j++){
			if (i==j){
				if (arr[i][j]>max)
				max = arr[i][j] ; 
			}
		}
		
	}

	cout<< "maximum element is : " << max << endl ;
	for(int i=0; i<a; i++){
		for(int j=0; j<a; j++){
			if (arr[i][j]==max)
			cout<< i+1 << " : "<< j+1 << endl ; 
		}
	}
	








}
