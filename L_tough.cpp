#include<iostream> 
using namespace std;
int main(){
	// int a,b,min=1e9, sum=0; 
	// cin>>a >>b; 
	// int c[a][b], d[b]; 
	// for(int i=0; i<a; i++){
	// 	for(int j=0; j<b; j++){
	// 		cin>> c[i][j]; 
		
	// 	}
	// }
	// cout<< "coordinates of min elements:"<< endl; 
	// for(int i=0; i<b; i++){
	// 	min=1e9; 
	// 	for(int j=0; j<a; j++){
	// 		if (c[j][i]<min)
	// 			min= c[j][i];	
	// 	}
	// 	sum+=min;
	// 	d[i]= min; 
	// }
	// for(int i=0; i<b; i++){
	// 	for(int j=0; j<a; j++){
	// 		if (c[j][i]==d[i]){
	// 		cout<< j+1 <<";"<<i+1<<endl;
	// 		break;
	// 		}
	// 	}
	// }
	// cout<< "Their sum:\n"<<sum; 



	// int a,b; 
	// cin>> a >> b; 
	// int min = 1e9; 
	// int sum =0; 
	// int arr[a][b] , d[b]; 
	// for(int i=0; i<a; i++){
	// 	for(int j=0; j<b; j++){
	// 		cin>> arr[i][j] ; 
	// 	}
	// }
	// cout<< "the coordinates of min elements are: "<< endl; 
	// for(int i=0; i<b; i++){
	// 	min = 1e9; 
	// 	for(int j=0; j<a; j++){
	// 		if (arr[j][i]<min)
	// 		min = arr[j][i] ; 
	// 	}
	// 	sum+= min; 
	// 	d[i] = min; 

	// }
	// for(int i=0; i<b; i++){
	// 	for(int j=0; j<a; j++){
	// 		if (arr[j][i]==d[i]){ 
	// 		cout<< j+1 << " ; "<< i+1 << endl; 
	// 		break;
	// 		}
	// 	}
	// }
	// cout<< "their sum is: \n" << sum << endl; 




	int a, b; 
	int sum = 0; 
	int min= 1e9; 
	cin>> a >> b; 
	int arr[a][b], d[b]  ; 
	for(int i=0; i<a; i++){
		for(int j=0; j<b; j++){
			cin>> arr[i][j] ; 
		}
	}
	cout<< "coordinates of min elements: "<< endl; 
	for(int i=0; i<b ;i++){
		min = 1e9; 
		for(int j=0; j<a; j++){
			if (arr[j][i]<min)
			min = arr[j][i]; 
		}
		sum+= min; 
		d[i] = min; 
	}
	for(int i=0; i<b; i++){
		min = 1e9 ; 
		for(int j=0; j<a; j++){
			if (arr[j][i]==d[i]) {
			cout<< j+1 << " ; "<< i+1 << endl ; 
			break;
			}
		}
	}
	cout<< "the sume of min elements are: \n "<< sum << endl;  







}
