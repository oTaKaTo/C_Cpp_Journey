//โปรแกรมสร้างพีระมิดตามจำนวนแถวที่ป้อน

//แสดงผลโดย * แสดงผลโดยยึดแกนกลางแล้วขยายไปทั้งทางซ้ายและทางขวาจนครบทุกแถว ที่เหลือให้พิมพ์ช่องว่าง

#include <stdio.h>

int main()
{
    int n ,left=0 , right = 0;
    printf("Enter rows of pyramid : ");
    scanf("%d",&n);

    for (int row = 1 ; row <= n ; row++,right++ , left--) 
    {
        for (int i = -n ; i <= n ; i++)
            if(i >= left && i <= right )
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            printf("\n");
    }
    
    return 0;
}