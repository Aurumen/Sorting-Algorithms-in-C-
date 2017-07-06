// Bubble sort
#include<bits/stdc++.h>
using namespace std;
#define mx 10000
void swap(int *a,int *b)
{
    int temp = *a;
    *a=*b;
    *b=temp;
}
void Bubble_Sort(int A[],int N)
{
    for(int i=1;i<=N;i++)
    {
        bool swaped = false;
        for(int j=1;j<=N-i;j++)
        {
            if(A[j]>A[j+1])
            {
                swap(&A[j],&A[j+1]);
                swaped=true;
            }
        }
        if(!swaped) break;
    }
}
int main()
{
    int N,A[mx+10]; // N is the number of elements
    scanf("%d",&N);
    for(int i=1;i<=N;i++) scanf("%d",&A[i]);
    Bubble_Sort(A,N);
    for(int i=1;i<=N;i++) printf("%d ",A[i]);
    return 0;
}
// About:
// Best Case O(N)
// Worst Case O(N^2)
// Average Case O(N^2)
// Memory O(1)
// Stable : YES
// N -> Number of elements
