#include<iostream>
#include<cmath>
using namespace std;
int main(){
// 	int a, sum=0; 
// 	cin>> a; 
// 	int c[a][a]; 
	
// 	for(int i=0 ;i<a; i++){
// 		for(int j=0; j<a; j++){
// 			cin >> c[i][j]; 
// 			if (i+j==a-1)
// 			sum+=c[i][j]; 
// 		}
// 	}
// 	cout<< sum;


	int a; 
	cin>> a ;
	int sum =0; 
	int arr[a][a] ; 
	for(int i=0; i<a; i++){
		for(int j=0; j<a; j++){
			cin>> arr[i][j] ; 
		}
	}
	for(int i=0; i<a; i++){
		for(int j=0; j<a; j++){
			if (i+j==a-1)
			sum+= arr[i][j] ; 

		}
	}
	cout<<" the sum of the subsidory diagonal is: "<< sum << endl; 








}

