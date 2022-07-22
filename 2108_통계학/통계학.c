#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int static compare (const void* first, const void* second);
int getfrq(int n, int* arr);
int* arr;

int main(void) {
    int n;
    int avg;
    int mid, frq, rng, sum=0;
    int temp;
    scanf("%d", &n);
    arr = (int*)malloc(sizeof(int) * n);
    
    for(int i=0; i<n; i++) {
        scanf("%d", (arr+i));
        sum += *(arr+i);
    }
    qsort(arr, n, sizeof(int), compare);

    avg = floor((double)sum/n + 0.5);
    mid = *(arr+n/2);
    frq = getfrq(n, arr);
    rng = *(arr+n-1) - *(arr+0);
    printf("%d\n", avg);
    printf("%d\n", mid);
    printf("%d\n", frq);
    printf("%d\n", rng);
    
    return 0;
}
int getfrq(int n, int* arr)
{
    int max_n=0, cnt=0, temp;
    int s=0, s_max=0;
    while(1) {

        if(s==(n-1)) { break; }
        
        if(s!=0 && *(arr+s)==*(arr+s-1)) { continue; }

        temp = *(arr+s);
        for(int i=s; i<n; i++) {
            if(*(arr+i) == temp) {
                cnt++;
            } else { break; }
        }
        if(cnt==max_n && max_n !=0) {
            return *(arr+s);
        }
        if(cnt>max_n) {
            max_n = cnt;
            s_max = s;
        }
        s++;
        cnt=0;
    }
    return *(arr+s_max);
    
}
int static compare (const void* first, const void* second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
        return -1;
    else
        return 0;
}