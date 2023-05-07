#include <bits/stdc++.h>
using namespace std;

int a[16][2];
int oramBS(int key){
    int c;
    int d;
    int p;
    int m=20;
    d=m/2;
    if(key > (a[m/2][0])){
        c=0;
    }
    else{
        c=1;
    }
    p=((c)*(a[m/2][1]-a[m-1][1]))+a[m-1][1];
    
   for(int i=0;i<log(m);i++){
        d+=((1-(2*c))*(m/pow(2,i+2)));
        if(key > (a[d][0])){
            c=0;
        }
        else{
            c=1;
        }
        p=c*(a[d][1]-p)+p;
   }
   return p;
}
int main(){
    
    for(int i=0;i<16;i++){
        a[i][0]=i+1;
        a[i][1]=rand()%100;
    }
    cout<<"Actual database which is hidden from all"<<endl;
    cout<<"key"<<" "<<"value"<<endl;
     for(int i=0;i<16;i++){
        cout<<a[i][0]<<"  "<<a[i][1]<<endl;
    }
    cout<<"enter the key to get value";
    int key;
    cin>>key;
    cout<<oramBS(key)<<endl;
}
