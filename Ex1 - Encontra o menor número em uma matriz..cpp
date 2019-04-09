#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

int main() {
    int matriz[20][20];
    int L=0, C=0;
    int numL, numC;
    int linha=1;
    int result=1000;
    result = matriz[0][0];
    cout << "Por favor, informe a quantidade de Linhas e Colunas para a matriz: ";
    cin >> numL >> numC;

    for(L=1; L<=numL; L++){
        for(C=1; C<=numC; C++){
            cout << "Escreva a sua matriz: ";
            cin >> matriz[L][C];
        }
    }

    for(L=1; L<=numL; L++){
        for(C=1; C<=numC; C++){

            cout << matriz[L][C] << " ";
        }
        cout << "\n";
    }

     for(L=1; L<=numL; L++){
        for(C=1; C<=numC; C++){

            if(matriz[L][C] < result)
            {
                result = matriz[L][C];
                //linha = L++;

            }

        }

    }

cout << result << " ";
	return 0;
}
