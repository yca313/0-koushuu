#include <iostream>

void yakusuu(int a){
      printf("\n%d:",a);
    for(int count_y=1;count_y<=a;count_y++) {
        if (a%count_y==0){
            printf("%d,",count_y);}
    }
} 

int main(){
    for(int count=1;count<=1000;count++){
       printf("\n%d:",count);
        yakusuu(count);
    }

    return(0);
}