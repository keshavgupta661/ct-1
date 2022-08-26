// Name: Keshav Gupta
// Roll no.: 2010990379
// Set no. : Test 04
// Question no.: Q1
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int min=-1;
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) {
    	cin>>arr[i];
	}
	
	set<int> s;
	for(int i=n-1;i>=0;i--){
        if(s.find(arr[i])!=s.end()){
            min=i;
        }
        else{
            s.insert(arr[i]);
        }
    }
	
	if(min!=-1)
    cout<<"The minimum index of the repeating element is "<<min;
  else
    cout<<"Invalid Input";
    
    return 0;
}

    
    
