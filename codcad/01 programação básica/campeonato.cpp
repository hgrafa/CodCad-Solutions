#include <iostream>
using namespace std;
int main(){
	int Cv, Ce, Cs, Fv, Fe, Fs, Mc, Mf;
	cin >> Cv >> Ce >> Cs >> Fv >> Fe >> Fs;
	Mc = 3*Cv + Ce; Mf = 3*Fv + Fe;
	if(Mc > Mf or Mf > Mc){
		if(Mc > Mf){cout << "C";}
		if(Mf > Mc){cout << "F";}	
	}else if( Cs > Fs or Fs > Cs){
		if(Cs > Fs){cout << "C";}	
		if(Fs > Cs){cout << "F";}
	}else{
		cout << "=";}}