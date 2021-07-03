#include <stdio.h>

int main(){
    int num,i,arr[200],location;

    printf("Enter number of elements");
    scanf("%d", &num);

    printf("Enter the elements in array");
    for (i=0; i<num; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the location to be deleted");
    scanf("%d", &location);
    num--;
    for(int i=num;i<location;i++)
    {
        arr[i]=arr[i+1];
    }
      for(int i=0;i<num;i++){
          printf("%d ",arr[i]);
      }
      return 0;
}
