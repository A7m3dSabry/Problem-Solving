void miniMaxSum(int arr_count, int* arr) {
    
    long long sum = 0;
    long long max = 0;
    long long min = arr[0];
    int i;
    for (i = 0; i < arr_count; i++) {
        sum += arr[i];
        if (arr[i] > max) max = arr[i];
        if (arr[i] < min) min = arr[i];
    }
    printf("%lld %lld", sum-max, sum-min);
   
}