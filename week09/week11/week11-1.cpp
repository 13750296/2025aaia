#include <stdio.h>
int addnum(int a,int b)
{
    printf("在函式addnum()裡,得到參數a:%d b:%d\n",a,b);
    int ans=a+b;
    return ans;
}
int main()
{
    printf("在main()呼叫使用addnum()\n");
    int ans=addnum(2,3);
    printf("得到的答案:%d\n",ans);
}
