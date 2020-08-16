//vectors A+B and A.B

#include<stdio.h>
#include<conio.h>

int main(){
    int A[3]={1,2,3};
    int B[3]={4,5,6};
    int C[3];
    int d; int s=0;
    for(int i=0;i<3;i++){
        C[i]=A[i]+B[i];
    }
    
    //sum

    printf("Sum is:");
    for(int j=0;j<3;j++){
        printf("%d ",C[j]);
    }
    printf("\n");
    
    //dot product

    for(int k=0;k<3;k++){
        d=A[k]*B[k];
        s=s+d;
    }
    printf("A.B is: %d",s);
    return 0;
    //Output: Sum is: 5 7 9
    //        A.B is:32

}