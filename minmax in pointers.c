#include<stdio.h>
int main()
{
    int min,max;
    int arr[]={2,4,5};
    minmax(arr,3,&min,&max);
    printf("%d and %d",min,max);


}
void minmax(int* arr,int* size,int* min,int* max)
{
    *min=arr[0];
    *max=arr[0];
    for(int i=0;i<size;i++)

{
    if(arr[i]>*max)
    {
        *max=arr[i];
    }
    if(arr[i]<*min)
    {
        *min=arr[i];
    }
}


}
