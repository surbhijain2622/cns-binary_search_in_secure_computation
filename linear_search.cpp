#include <bits/stdc++.h>
using namespace std;

int a[20][2];
int compBS(int key){
    int c[20];
    int m=20;
    for(int i=0;i<m;i++){
        
        if(key > (a[i][0])){
            c[i]=0;
        }
        else{
            c[i]=1;
        }
    }
    int d[20];
    d[0]=c[0];
    for(int i=1;i<(m-1);i++){
        d[i]=c[i]*(1-c[i-1]);
    }
    d[m-1]=1-c[m-2];
    int z=0;
    for(int i=0;i<m;i++){
        z+=((a[i][1])*d[i]);        
    }
    return z;
}
int main(){
    
    for(int i=0;i<20;i++){
        a[i][0]=i+1;
        a[i][1]=rand()%100;
    }
    cout<<"Actual database which is hidden from all"<<endl;
    cout<<"key"<<" "<<"value"<<endl;
     for(int i=0;i<20;i++){
        cout<<a[i][0]<<"  "<<a[i][1]<<endl;
    }
    cout<<"enter the key to get value";
    int key;
    cin>>key;
    cout<<compBS(key)<<endl;
}
