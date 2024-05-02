#include <iostream>

int number=8;

int main(){
    if(number>5){
        printf("%d is bigger than 5",number);
    }else if(number<5){
        printf("%d is smaller than 5",number);
    }else if(number==5){
        printf("%d is 5",number);
    }
    return(0);
}