#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int prime(int n){
    if(n<2){
        return false;
    }
    for(int i=2;i<(n/2);i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n,a,k,x;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a);
        for(int j=(a);j>1;j--){
            if(prime(j)){
               k=j;
               break;
            }
        }
        for(int j=a+1;j<a*a;j++){
            if(prime(j)){
               x=j;
               break;
            }
        }
        if(abs(k-a)>abs(x-a)){
            printf("%d
",x);
        }
        else{
            printf("%d
",k);
        }
    }
}