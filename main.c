
#include <stdio.h>
#include <stdlib.h> //malloc関数を使うのに必要である。
#include <math.h>
double myRoot(double x) // 返り値をdouble型にすることで小数点以降の数値を表示させる。
{
    int y;
    if (!(x >= 0)) // xが0以上の時実施するため、x<0となる
    {
        printf("エラー：0以上の値ではありません in myRoot()\n");
    return y;
}

int main(void)
{
    int i;
    i = 0; // iに数値を設定しておかなければwhile文で挙動がおかしくなる可能性がある。
    double *x = (double *)malloc(sizeof(double) * 101);

    while (i <= 100)
    {
        x[i] = myRoot((double)i);
        i++;
    }

    // これ以降は確認用コードなので、修正しないこと
    printf("x[0]=%f\n", x[0]);
    printf("x[1]=%f\n", x[1]);
    printf("x[2]=%f\n", x[2]);
    printf("x[3]=%f\n", x[3]);
    printf("x[4]=%f\n", x[4]);
    printf("x[99]=%f\n", x[99]);
    printf("x[100]=%f\n", x[100]);
    // myRoot()の動作確認
    printf("myRoot(0.0 / 0.0)=%f\n", myRoot(0.0 / 0.0));

    free(x);
    return 0;
}
