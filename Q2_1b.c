// Average dis btw pts in 2 dim grid

#include<stdio.h>
#include<stdlib.h>

int main(){
    printf("Calculating for a 6x6 grid \n");
    int n=6,p=0,d=0,i=1;
    float av;
    
    
    for(int i=0;i<6;i++){
        for(int j=1;j<=6;j++){
            for(int k=0;k<6;k++){
                for(int q=1;q<=6;q++){
                    p=p+1;
                    d=d+abs(i-k)+abs(j-q);
                 
                }
                
            }
            
        }
        
    }

    
    printf("%d \n",p);
    printf("%d \n",d);
    av=(float)d/p;
    printf("Average distance between two points %f",av);
    return 0;
// output: 1296
//         5040
//         Average distance between points is 3.888889
}