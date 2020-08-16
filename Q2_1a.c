//finding average dist btw 2 pts in staight line

#include<stdio.h>
#include<stdlib.h>

int main(){
    printf("straight line made up of 6 point\n");
    int n=6,p=0,d=0;
    float av;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            p=p+1;
            d=d+abs(i-j);
        }
    }
    
    av=(float)d/p;
    printf("average distance between two points is %f",av);
    return 0;
    //output: straight liine made up of 6 points
    //        average distanve between two points is 1.94444 
}