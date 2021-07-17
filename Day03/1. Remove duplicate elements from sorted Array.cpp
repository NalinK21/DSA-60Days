#include <cstdlib>
#include<iostream>
#include <bits/stdc++.h>

using namespace std;

class Remove{
    public:
        int removeDuplicates(int a[], int n)
        {
            int i,j,k;
            for(i=0;i<n;i++)
            {
                for(j=i+1;j<n;j++)
                    if(a[i]==a[j])              //Checking for Duplicates
                    {
                        for(k=j+1;k<n;k++)      //Shifting the array
                               a[k-1]=a[k];
                            n--;  
                            j--;    //Decreasing the size of array by 1
                    }
            }
            return n;
        }
};

int main() {

    int n;
    std::cout<<"Enter the Number of Terms : ";
    std::cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        std::cin>>a[i];
    Remove ob;
    n=ob.removeDuplicates(a,n);
    
    for(int i=0;i<n;i++)
        std::cout<<a[i]<<" ";
    
    return 0; 
}
