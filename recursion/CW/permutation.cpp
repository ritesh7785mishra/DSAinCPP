#include<iostream>
#include<cstring>
using namespace std;

//Arrays are passed by reference there for it is
// Backtracking can work  

void permutation(char str[], int pos){
	if(pos == strlen(str)){
		cout<<str<<endl;
		return;
	}
		for(int i=pos; i<strlen(str); i++){
			swap(str[pos], str[i]);
			permutation(str, pos+1);
			swap(str[i],str[pos]);
		}	
}
int main(){
	char str[] = "abc";
	permutation(str, 0);
}