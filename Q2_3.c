//MxA and MxN
#include<stdio.h>
#include<stdlib.h>

int main(){
    int M[3][3];
    int N[3][3];
    int c;
    int d;
    int D[3][3];
    int C[3][1];
    int A[3][1]={1,2,3};
    //M=1 2 3         N=2 1 0
    //  4 5 6           5 4 6
    //  5 -5 0          7 8 -5

    FILE *fhandle=fopen("M","r");
    FILE *ghandle=fopen("N","r");
    if(fhandle==NULL){
        printf("File M not found");
        exit(1);
    }

    if(ghandle==NULL){
        printf("File N not found");
        exit(1);
    }

    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
          fscanf(fhandle,"%d",&c); 
          M[i][j]=c; 
          
        }
    }

    
    for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
          fscanf(ghandle,"%d",&d); 
          N[i][j]=d; 
          
        }
    }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
          D[i][j]=0;
          for(int k=0;k<3;k++){
            D[i][j]=D[i][j]+M[i][k]*N[k][j];
          
          }
            
        }
    }    
    printf("MxN: \n");
     for (int i=0;i<3;i++){
        for(int j=0;j<3;j++){
           
          printf(" %d",D[i][j]);
         
        } printf("\n"); 
    }
  for(int i=0;i<3;i++){
        for(int j=0;j<1;j++){
          C[i][j]=0;
          for(int k=0;k<3;k++){
            C[i][j]=C[i][j]+M[i][k]*A[k][j];
          
          }
            
        }
    }    
  printf("MxA:\n");
    for (int i=0;i<3;i++){
        for(int j=0;j<1;j++){
           
          printf(" %d",C[i][j]);
         
        } printf("\n"); 
    }

    fclose(fhandle);

    return 0;
//Output:MxN:
//        33 33 -3
//        75 72 0
//        -15 -15 -30
//      MxA:
//          14
//          32
//          -5
}
