#include <iostream>
using namespace std;
int main(){
	string n, p;
	getline(cin, n);
	for(int i=0;i<n.size();i++){
		if(n[i]=='A' or n[i]=='B' or n[i]=='C'){
			n[i] = '2';
		}else if(n[i]=='D' or n[i]=='E' or n[i]=='F'){
			n[i] = '3';
		}else if(n[i]=='G' or n[i]=='H' or n[i]=='I'){
			n[i] = '4';
		}else if(n[i]=='J' or n[i]=='K' or n[i]=='L'){
			n[i] = '5';
		}else if(n[i]=='M' or n[i]=='N' or n[i]=='O'){
			n[i] = '6';
		}else if(n[i]=='P' or n[i]=='Q' or n[i]=='R' or n[i]=='S'){
			n[i] = '7';
		}else if(n[i]=='T' or n[i]=='U' or n[i]=='V'){
			n[i] = '8';
		}else if(n[i]=='W' or n[i]=='X' or n[i]=='Y' or n[i]=='Z'){
			n[i] = '9';
        }else{ continue;}
	}
	cout << n;
}