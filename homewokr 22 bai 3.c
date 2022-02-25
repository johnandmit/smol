#include <stdio.h>
void copy(int *a,int *b){
    *b=*a;
}
int main(){
    int n,A[500],B[500],C[500],b=0,c=0;
    printf("enter n: ");
    scanf("%i",&n);
    for(int i=0;i<n;i++){
        int x;
        printf("enter x: ");
        scanf("%i",&x);
        A[i]=x;
    }
    for(int i=0;i<n;i++){
        if(A[i]>0){
            copy(&A[i],&B[b]);
            b++;
        }
        else{
            copy(&A[i],&C[c]);
            c++;
        }
    }
    for(int i=0;i<c;i++){
        printf("C[%i] = %i\n",i,C[i]);
        }
    for(int i=0;i<b;i++){
        printf("B[%i] = %i\n",i,B[i]);
        }
}
