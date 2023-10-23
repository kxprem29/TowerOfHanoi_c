#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void TOH(int n, int src, int temp, int dest){
    if (n>0){
        TOH(n-1,src, dest, temp);
            printf("move disc %d from %c to %c\n",n,src,dest);
            TOH(n-1,temp,src,dest);
        
    }
}
int main(){
   int n;
   printf("\nenter no of discs");
   scanf("%d",&n);
   TOH(n, 'A','B','C');
   printf("total no of moves \n %d",(int)pow(2,n)-1);
   
}