//------------------------------------------

#include <iostream>
#include <cmath>

using namespace std;

//------------------------------------------

int main(){

    double taxa[N], dias[N], lognb;
    int bacteria, N;

    cin>>N;

    lognb=-100000;

    for(int i=0;i<N;i++){
        
        cin>>dias[i]>>taxa[i];
        
        if(dias[i]*log(taxa[i])/200>lognb){
            bacteria=i;
            lognb=dias[i]*log(taxa[i])/200;
        }
    
    }

    cout<<bacteria<<endl;
    
    return 0;
}

//------------------------------------------
