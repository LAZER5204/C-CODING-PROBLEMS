//INSERTION SORT
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    int i;
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int j,key;
    for(i=0;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j-=1;
        }
        arr[j+1]=key;
    }
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }

    return 0;
}
