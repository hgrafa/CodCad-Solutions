#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int n, m;

int tipo(int x, int y){
	// se tiver na lateral esquerda

	if(y == 0){
		// se tiver na quina de cima

		if(x == 0) return 1;

		// quina de baixo

		if(x == m-1) return 2;

		// só na lateral

		return 3;
	}

	// se tiver na lateral direita
	if(y == n-1){

		// se tiver na quina de cima

		if(x == 0) return 4;

		// se tiver na quina de baixo
		if(x == m-1) return 5;

		return 6;
	}

	// se tiver em cima tirando as quinas de cima

	if(x == 0) return 7;

	if(x == m-1) return 8;

	return 9;
}

int main(void){

	ios_base::sync_with_stdio(false);

	int costa = 0;;

	cin >> n >> m;

	string local[m];
	//  cada uma contém n caracteres


	for(int i=0; i<n; i++) cin >> local[i];


	for(int i=0; i<m; i++){
		for(int j=0; j<n; i++){
			int mrc;

			if(local[i][j] == '#'){
				mrc = tipo(i, j);

				if(mrc == 9){
					if(local[i-1][j] == '.' or local[i+1][j] == '.'){
						// se tiver água por cima ou por baixo
						costa++;
					}else if(local[i][j-1] == '.' or local[i][j+1] == '.'){
						//se tiver água pelos lados
						costa++;
					}
				}else if(mrc == 8){
					if(local[i+1][j] == '.'){
						// se tiver água por cima ou por baixo
						costa++;
					}else if(local[i][j-1] == '.' or local[i][j+1] == '.'){
						//se tiver água pelos lados
						costa++;
					}
				}else if( mrc == 7){
					if(local[i-1][j] == '.'){
						// se tiver água por cima ou por baixo
						costa++;
					}else if(local[i][j-1] == '.' or local[i][j+1] == '.'){
						//se tiver água pelos lados
						costa++;
					}
				}else if(mrc == 6){
					if(local[i-1][j] == '.' or local[i+1][j] == '.'){
						// se tiver água por cima ou por baixo
						costa++;
					}else if(local[i][j-1] == '.'){
						//se tiver água pelos lados
						costa++;
					}
				}else if(mrc == 5){
					if(local[i-1][j] == '.'){
						// se tiver água por cima ou por baixo
						costa++;
					}else if(local[i][j-1] == '.'){
						//se tiver água pelos lados
						costa++;
					}
				}else if(mrc == 4){
					if(local[i+1][j] == '.'){
						// se tiver água por cima ou por baixo
						costa++;
					}else if(local[i][j-1] == '.'){
						//se tiver água pelos lados
						costa++;
					}
				}else if(mrc == 3){
					if(local[i-1][j] == '.' or local[i+1][j] == '.'){
						// se tiver água por cima ou por baixo
						costa++;
					}else if(local[i][j+1] == '.'){
						//se tiver água pelos lados
						costa++;
					}
				}else if(mrc == 2){
					if(local[i-1][j] == '.'){
						// se tiver água por cima ou por baixo
						costa++;
					}else if(local[i][j+1] == '.'){
						//se tiver água pelos lados
						costa++;
					}
				}else if(mrc == 1){
					if(local[i+1][j] == '.'){
						// se tiver água por cima ou por baixo
						costa++;
					}else if(local[i][j+1] == '.'){
						//se tiver água pelos lados
						costa++;
					}
				}
			}
		}
	}

	cout << costa << "\n";

	return 0;
}
