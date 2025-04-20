//
// Copyright (C) 2025, E. Wes Bethel, All Rights Reserved.
// For educational use only.
// 
#include <iostream>

int 
sum_array(int N, int A[])
{
   // Put your code here, return the correct result
   return 0;
}


int main(int ac, char*av[])
{
   int N=(1<<10);
   int A[N];

   // initialize A
   for (int i=0;i<N;i++)
      A[i] = i;

   int total = sum_array(N, A);

   std::cout << "Sum of all " << N << " items in A[] is: " << total << std::endl;
}
