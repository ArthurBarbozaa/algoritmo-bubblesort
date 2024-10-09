#include <iostream>
using namespace std;

void bubblesort(int v[], int tam){
    int temp = 0;

    for (int i = 0; i < tam; i++){
        for(int j = 0; j < tam - 1 - i; j++){
            if(v[j] > v[j+1]){
                temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }

}

int main(){

    int v[] = {2,3,1,4,7,9,10,6,5,8};
    int tam = sizeof(v) / sizeof(int);
    
    bubblesort(v, tam);

   for (int i: v){
    cout << i << " ";
   }


    
    return 0;
}