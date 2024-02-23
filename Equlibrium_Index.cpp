// https://parikh.club/parikh_arrays_4

#include <bits/stdc++.h> 
int findEquilibriumIndex(vector<int> &arr) {
   int n = arr.size();
  int sum = 0,l_sum =0,r_sum;
  for(int i=0;i<n;i++)
    sum += arr[i];
  r_sum = sum;
  for(int i=0;i<n;i++)
  {

     if(i == 0)
       l_sum = 0;
    else
         l_sum = l_sum + arr[i-1];

    r_sum = r_sum - arr[i];


if(l_sum == r_sum) return i;
  }
  return -1;
}