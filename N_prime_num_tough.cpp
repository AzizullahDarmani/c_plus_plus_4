#include<iostream>
#include<cmath>
using namespace std;
int main(){
	// int a; 
	// cin>>a; 
	// bool is_prime;
	// for(int i=2; i<=a; i++){
		
	// 	is_prime=true; 
	// 	for(int j=2; j<i; j++){
			
	// 		if (i%j==0){
	// 			is_prime=false;
	// 		}
	// 	}
	// 	if(is_prime==true){
	// 		cout<< i << " is prime"<< endl; 
	// 	}
	
	
	// }



// 	int a; 
// 	cin>> a; 
// 	bool is_prime; 
// 	for(int i=2 ; i<=a; i++){
// 		is_prime = true; 
// 		for(int j=2; j<i; j++){
// 			if (i%j==0){
// 				is_prime= false; 
// 		}
// 	}
// 	if (is_prime == true){
// 		cout<< i << " is prime " << endl; 
// 	}



// }


int a; 
cin>> a; 
bool is_prime ;
for(int i=2; i<a; i++){
	is_prime= true ; 
	for(int j=2; j<i; j++){
		if (i%j==0){
		is_prime = false ; 
	}
}
if (is_prime==true){
	cout<< i << " the number is prime "<< endl ; 
}





}



}