int min(int* nums, int size){
    int mi;
    for(int i = 0;i < size;i++){
        for(int j = 0;j < size;j++)
            if((int)nums[i] < (int)nums[j]){
                mi = nums[i];
            }
    }
    return mi;
}

int minimumOperations(int* nums, int numsSize){
    int k = 0;
     for(int i = 0;i < numsSize;i++)
        if((int)nums[i]!=0){
          nums[i] - min(&nums,numsSize);
          k++;
        }
    return (printf("%d",k));
}

int main(){
    int arr[5];
    for(int i = 0; i < 5;i++)
        scanf("%d",arr[i]);
    minimumOperations(&arr, 5);
    return 0;
}