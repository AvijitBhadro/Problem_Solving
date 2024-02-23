// https://parikh.club/parikh_arrays_5

#include <bits/stdc++.h> 
int firstMissing(int arr[], int n)
{
  int maxi = arr[0];

 vector<int> new_arr;


  int result=0;


 for(int i=0;i<n;i++)
 {
  if(arr[i] > 0)
  {
      new_arr.push_back(arr[i]);
  }
  if(maxi <arr[i])
    maxi = arr[i];
 }
if(maxi<0)
    return 1;
  vector<int> freq(maxi+1,0);

 int len = new_arr.size();
for(int i=0;i<len;i++)
{
  freq[new_arr[i]] += 1;
}


 for(int i =1;i<maxi+1;i++)
 {
if(freq[i] < 1)
   {
        result = i;
        break;
   }
//     cout<<"Frequency of "<<i<<": "<<freq[i]<<endl;
 }
if(result > 0)
 return result;
else return maxi + 1;
}