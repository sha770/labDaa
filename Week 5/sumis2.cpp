#include <iostream>
using namespace std;
void Merge(int *a, int low, int high, int mid)
{
	int i, j, k, temp[high-low+1];
	i = low;
	k = 0;
	j = mid + 1;
	while (i <= mid && j <= high)
	{
		if (a[i] < a[j])
		{
			temp[k] = a[i];
			k++;
			i++;
		}
		else
		{
			temp[k] = a[j];
			k++;
			j++;
		}
	}
	while (i <= mid)
	{
		temp[k] = a[i];
		k++;
		i++;
	}
	while (j <= high)
	{
		temp[k] = a[j];
		k++;
		j++;
	}
	for (i = low; i <= high; i++)
	{
		a[i] = temp[i-low];
	}
}
void MergeSort(int a[], int low, int high)
{
	int mid;
	if (low < high)
	{
		mid=(low+high)/2;
		MergeSort(a, low, mid);
		MergeSort(a, mid+1, high);
		Merge(a, low, high, mid);
	}
}
void find(int arr[],int n,int k){
    int temp=0;
    int i=0,j=n-1;
    while(i<j){
        if((arr[i]+arr[j])==k)
        {
            temp=1;
            cout<<arr[i]<<" "<<arr[j]<<endl;
            i++;j--;
        }
        else if((arr[i]+arr[j])>k){
            j--;
        }
        else{
            i--;
        }
    }
    if(temp==0){
        cout<<"No pair addition leads to such result."<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int x;
    cin>>x;
    MergeSort(arr,0,n-1);
    find(arr,n,x);
}
