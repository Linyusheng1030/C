#include <stdio.h>
int main(void)
{
    int a, b,c; //�ŧi�ݭn�Ψ쪺�ܼ�
    char opt;
     
    printf("�o�ӵ{���|�̲Ÿ��p���Ӿ�ƪ��M�B�t�B�n�B��....\n");
    printf("�п�J�p�⦡�A�p 2+2�G "); //���ܨϥΪ̿�J����r
    scanf("%d %c %d", &a, &opt, &b);
     
    //�H�U�|�̹B��l�p��æL�X���G
    printf("���G�p�U�G \n");
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
            printf("��J���~�I\n");
            break;
    }
     
    return 0;
}
