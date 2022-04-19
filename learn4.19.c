#include<stdio.h>

/*int main()
{
    int n=0, m=0, i, j;
    int a[100] = { 0 }, b[100] = { 0 };
    scanf_s("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf_s("%d", &a[i]);
    }
   /* for (i = 0; i < n; i++)
    {
        printf("%d\n", a[i]);
    }
    scanf_s("%d", &m);
    for (j = 0; j < m; j++)
    {
        scanf_s("%d", &b[j]);
    }
    /*for (i = 0; i < m; i++)
    {
        printf("%d\n", b[i]);
    }
   
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (a[i] == b[j])
            {
                printf("%d#", a[i]);
            }

        }
    }
    return 0;
}*/
void quick_rank(int arr[], int left,int right)
{
    if (left >= right)
    {
        return;
    }
    int i=left,j=right,x=arr[left];
    while (i < j)
    {
        while (i < j && arr[j] > x)
        {
            j--;
        }
        arr[i] = arr[j];
        while (i > j && arr[j] < x)
        {
            i++;
        }
        arr[j] = arr[i];
    }
    arr[i] = x;
    quick_rank(arr, left, i - i);
    quick_rank(arr, i + 1, right);
}
typedef struct comp
{
    int num;
    int count;
}comp;
void rank(int arr[], int sz)
{
    int i, j;
    for (i = 0; i < sz - 1; i++)
    {
        int flag = 1;//每一趟开始时重新赋值 进行检索
        for (j = 0; j < sz - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int num = 0;
                num = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = num;
                flag = 0;
            }
        }
        if (flag == 1)//当检索到所有前一位数字比后一位数字大的时候跳出
            break;//节约运算时间
    }


}
int main()
{
    int arr1[20] = { 0 }, arr2[20] = { 0 };
    int sz1, sz2;
    int i, j=0,flag=0;
    //两个数组的输入
    scanf_s("%d", &sz1);
    for (i = 0; i < sz1; i++)
    {
        scanf_s("%d", &arr1[i]);
    }
    /*for (i = 0; i < sz1; i++)
    {
        printf("%d\n", arr1[i]);
    }*/
    scanf_s("%d", &sz2);
    for (i = 0; i < sz2; i++)
    {
        scanf_s("%d", &arr2[i]);
    }
    /*for (i = 0; i < sz2; i++)
    {
        printf("%d\n", arr2[i]);
    }*/
    if (sz1 != sz2)
    {
        printf("0\n");
    }
    rank(arr1,0, sz1);
    /*for (i = 0; i < sz1; i++)
    {
        printf("%d ", arr1[i]);
    }*/
    rank(arr2,0, sz2);
    /*for (i = 0; i < sz1; i++)
    {
        printf("%d ", arr1[i]);
    }*/
    comp list[100] = { 0 };
    for (i = 0; i < sz1; i++)
    {
        if (arr1[i] == arr2[i])
        {
            flag = 1;
            list[j].num = arr1[i];
            list[j].count++;
        }
        else
        {
            break;
        }
        if (arr1[i] == arr1[i + 1] && arr1[i + 1] == arr2[i + 1])
        {
            list[j].count++;
            i++;
            continue;
        }
        j++;
    }
   
    if (flag == 0)
    {
        printf("0\n");
    }
    else
    {
        printf("1\n");
        for (i = 0; i < j-1; i++)
        {
            printf("%d %d\n", list[i].num, list[i].count);
        }
    }
    return 0;
}