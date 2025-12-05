#include <stdio.h>
#include <stdlib.h>

typedef struct
    {
       int *v; 
       int n;
    } set;

set uniao (set s1, set s2){
    int *n3 = (int *) malloc (sizeof(int));
    *n3 = s1.n+s2.n;
    int *v3 = (int *) malloc((*n3)*sizeof(int));
    set s3 = {v3, *n3}

    //Recebendo valores dos vetores
    for (int i1 = 0; i1 < s1.n; i1++){
        v3[i1] = s1.v[i1];
    }
    for (int i2 = 0; i2 < s2.n; s2.n++){
        v3[s1.n-1+i2] = s2.v[i2];
    }

    //Retirando os repetidos
    for (int i = 0; i < (*n3); i++){
        for (int j = 1; j < (*n3); j++){
            if (v3[i] == v3[j]){
                for (int o = j+1; o < *n3; o++){
                    v3[o-1] = v3[o];
                }
            }
            n3--;
        }
    }
    v3 = (int*) realloc (v3, *n3*sizeof(int)); 
    return s3;
}


int main() {
    
    
    int v1[3] = {1, 2, 3};
    int v2[2] = {2,4};

    set s1 = {v1, 3};
    set s2 = {v2, 2};

    set s3 = uniao(s1, s2);

    for (int i = 0; i < s3.n; i++){
        printf("%d\n", s3.v[i]);
    }

    
    return 0;
}