#include<bits/stdc++.h>
 
 
using namespace std;
 
int main(){
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
 vector< pair <int,int> > vect;
long long n,q,c=0;
cin>>n>>q;
long long x[q],a[q];
for(int i=0;i<q;++i){
    cin>>x[i]>>a[i];   
}
 
for(int j=0;j<q;++j){
 vect.push_back( make_pair(x[j],a[j]) );
    }
     sort(vect.begin(), vect.end());
    for(int i=0;i<q;++i){
    if(n>vect[i].first){
        n+=vect[i].second;
        
        c++;
    }  
}
if(c==q){
    
    cout<<"YES";
}
 else
 cout<<"NO";
}
