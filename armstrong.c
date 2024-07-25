#include<stdio.h>
int main(){
    int arr[10],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
    }
    int result_count=0;
    int result= isArmstrong(arr,n,result_count);
    printf("%d",result);
    return 0;
}
int isArmstrong(int arr[],int n,int result_count){
    int result=0;
    for(int i=0;i<n;i++)
    {
        int num=arr[i];
        while(num!=0){
            int digit=num%10;
            result=result+digit*digit*digit;
            num=num/10;
        }
        if(result==arr[i]){
            printf("It is an Armstrong number\n");
            result_count++;
        }
        else{
            printf("It is not an Armstrong number\n");
        }
    }
    return result_count;
}


