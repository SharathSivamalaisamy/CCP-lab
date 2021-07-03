#include <stdio.h>
int main(){
    int num,i,arr[100],searching,first,last,mid;

    printf("Enter number of elements");
    scanf("%d", &num);

    printf("Enter %d integers", num);
    for (i=0; i<num; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter value to be searched ");
    scanf("%d", &searching);

    first = 0;
    last = num - 1;
    mid = ((first+last)/2);

    while(first<last)
    {
        if(arr[mid]<searching)
        {
            first=mid+1;
        } 
        else if(arr[mid]==searching)
        {
            printf("The element is found at position %d", mid);
            return 0;
        }
        else if (arr[mid]>searching)
        {
            last=mid-1;
        }
        mid=((first+last)/2);
        if (first > last){
            printf("Not found! %d isn't present in the list.\n", searching);
        }
         return 0;
    }
}
