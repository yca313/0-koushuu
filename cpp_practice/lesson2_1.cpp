#include <iostream>

int main(){
    // 変数を宣言する
    int hoge, piyo;
    float fuga;
    
    // 変数に代入する
    hoge = 5;
    fuga = 3.14;
    piyo = hoge;
    
    // 変数の値を表示する
    printf("変数hogeの値は%dです\n", hoge); // printf()関数でhogeの中身を出力する．
    printf("変数fugaの値は%fです\n", fuga); // printf()関数でfugaの中身を出力する．
    printf("変数piyoの値は%dです\n", piyo); // printf()関数でpiyoの中身を出力する．
    
    return(0);
}