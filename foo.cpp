//From class slide 23, page 28
int sum(int N, int A[]) {
    int accum = 0;
    for (int i = 0; i<N; i++) accum +=A[i];
    return accum;
}