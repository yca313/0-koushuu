#include <iostream>

float max(float a,float b,float c){ 
    if(a<=b&&a<=c){return(a);}
    else if(b<=c){return(b);}
    else {return(c);}
}

int main(){
    float result=max(1.9,1.5,0.8);
    printf("最小の数は%f",result);
    return(0);
}