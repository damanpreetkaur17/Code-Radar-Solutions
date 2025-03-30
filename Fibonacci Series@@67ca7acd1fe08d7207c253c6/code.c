// Your code here...
int fibonacciSeries(int n){
    for(int i=0; i<n; i++){
        if (n==0)
        return 0;
        else if(n==1)
        return 1;
        else
        return fibonacciSeries(n-1)+fibonacciSeries(n-2);
        printf("%d ", fibonacciSeries(i));
    }
}