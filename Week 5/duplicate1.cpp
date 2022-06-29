#include<iostream>
using namespace std;
void counts(char arr[],int n){
    int count[26]={0};
    for(int i=0;i<n;i++){
        count[arr[i]-97]++;
    }
    int max=0;
    char temp='$';
    for(int i=0;i<26;i++){
        if(count[i]>max)
        {
            max=count[i];
            temp=i+97;
        }
    }
    if(max==1){
        cout<<"No duplicates found."<<endl;
    }
    else
    {
        cout<<temp<<"-"<<max<<endl;
    }
}
int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        char arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        counts(arr,n);
    }
}
