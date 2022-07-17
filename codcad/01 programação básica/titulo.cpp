#include <iostream>
using namespace std;

string corrige_string(string s){
  if(s[0]<=122 and s[0]>=97)
    s[0] -= 32;

  for(int i=0;i<s.size();i++){

    if(s[i]==' ' and s[i+1]<=122 and s[i+1]>=97){
      s[i+1] -= 32;
    }else if(s[i] != ' ' and s[i+1]>=65 and s[i+1]<=90){
      s[i+1] +=32;
    }else continue;

  }

  return s;
}

int main(int argc, char const *argv[]) {
  string s;

  getline(cin, s);

  cout << corrige_string(s) << "\n";
  return 0;
}