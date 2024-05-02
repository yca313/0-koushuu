#include <iostream>

int main(){
    for(int count = 1;count <=100;count++) {
        if (count%3==0 && count%5==0){printf("\n%dfizzbuzz",count);}
        else if(count%3==0){printf("\n%dfizz",count);}
        else if(count%5==0){printf("\n%dbuzz",count);}
        else {printf("\n%d",count);}}

    return(0);
}