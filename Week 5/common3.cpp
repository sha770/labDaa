#include <iostream>
using namespace std;
int main()
{
    int m,n,i=0,j=0;
    cin>>m;
    int arr1[m];
    for(int k=0;k<m;k++)
      cin>>arr1[k];
    cin>>n;
    int arr2[n];
    for(int k=0;k<n;k++){
        cin>>arr2[k];
    }
    while(i<m && j<n)
    {
        if(arr1[i]==arr2[j])
        {
            cout<<arr1[i]<<"\t";
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j])
        {
            i++;
        }
        else{
            j++;
        }
    }
    return 0;
}
