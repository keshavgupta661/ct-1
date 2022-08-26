// Name: Keshav Gupta
// Roll no.: 2010990379
// Set no.: Test 04
// Question no.: 2

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }
    int min = INT_MAX , max = INT_MIN ;
  for(int i = 0 ; i < N; i++)
  {
    if(arr[i] > max)
      max = arr[i];
    if(arr[i] < min)
      min = arr[i];
  }
  if(max-min+1==N)  
  {
    bool conse[N]={0};
    
    for(int i=0;i<N;i ++)
      {
        if(conse[arr[i] -  min] == 1)  
          {
           cout << " Not all consecutive elements \n" ;
           return 0;  
          }  
        else
          conse[arr[i] - min] = 1;
      }
    cout << "Consecutive element set\n";
    return 0;
  }
  
  cout << " Not all consecutive elements \n" ;
  
  return 0;
}
