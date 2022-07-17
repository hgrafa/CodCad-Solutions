#include <iostream>
using namespace std;
int main(){
int T1, T2, T3;
cin >> T1 >> T2 >> T3;
T1>=1 and T1<=1000;
T2>=1 and T2<=1000;
T3>=1 and T3<=1000;

if(T1>T2 and T1>T3){
	if(T2>T3){cout << "3" << endl << "2" << endl << "1";}
	if(T2<T3){cout << "2" << endl << "3" << endl << "1";}
}else if(T2>T1 and T2>T3){
	if(T1>T3){cout << "3" << endl << "1" << endl << "2";}
	if(T1<T3){cout << "1" << endl << "3" << endl << "2";}
}else if(T3>T1 and T3>T2){
	if(T2>T1){cout << "1" << endl << "2" << endl << "3";}
	if(T2<T1){cout << "2" << endl << "1" << endl << "3";}
}
}