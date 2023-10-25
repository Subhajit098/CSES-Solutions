#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

// ACCEPTED SOLUTION

void tripleSum(vector<pair<ll,int>>&vec,int target,int n){
    // sorted 
    sort(vec.begin(),vec.end());

    for(int i=0;i<n;i++){

        ll sum=target-vec[i].first;

        for(int j=i+1,k=n-1;j<k;j++){


            while(vec[j].first+vec[k].first>sum) k--;

            if(j<k && vec[j].first+vec[k].first==sum){
                cout<<vec[i].second<<" "<<vec[j].second<<" "<<vec[k].second;

                return;
            }

        }
    }
    cout<<"IMPOSSIBLE"<<endl;
    return;
}

int main()
{
    int n,x;
    cin>>n>>x;
    vector<pair<ll,int>>vec(n);
    for(int i=0;i<n;i++){
        cin>>vec[i].first;
        vec[i].second=i+1;
    }
   
   tripleSum(vec,x,n);

return 0;
}