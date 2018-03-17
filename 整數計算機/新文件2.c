#include <stdio.h>
int main(void)
{
    int a, b,c; //宣告需要用到的變數
    char opt;
     
    printf("這個程式會依符號計算兩個整數的和、差、積、商....\n");
    printf("請輸入計算式，如 2+2： "); //提示使用者輸入的文字
    scanf("%d %c %d", &a, &opt, &b);
     
    //以下會依運算子計算並印出結果
    printf("結果如下： \n");
    switch (opt) { 
        case '+':
		(c=a+b);
            printf("%d",c);
            break;
 
        case '-':
            (c=a-b);
            	printf("%d",c);
					break;
 
        case '*':
            (c=a*b);
            	printf("%d",c);
						break;
 
        case '/':
 			(c=a/b);
            	printf("%d",c);
           			break;
 
        default:
            printf("輸入錯誤！\n");
            break;
    }
     
    return 0;
}
