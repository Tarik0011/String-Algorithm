/*
*   -------------- ?*?*? --------------
* |         In The Name of *Allah*     |
* |             Author : Tarik         |
* |                                    |
*  -------------- ?*?*? ---------------
*/
 
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
using namespace std;
#define  pb        push_back
#define  all(v)    v.begin(),v.end()
#define  endl       '\n'  
#define  uint       long long
#define  int        long long
#define  fastio    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL) 
typedef tree<int,null_type,less_equal<int>,rb_tree_tag,tree_order_statistics_node_update>ordered_set; 

const int mxn=1e6+123;
int a[mxn],b[mxn];
vector<int>z_function(string s){
	int n=(int)s.size();
	vector<int>z(n,0);
	for(int i=1,l=0,r=0;i<n;i++){
		if(i<=r){
			z[i]=min(r-i+1,z[i-l]);
		}
		while(i+z[i]<n and s[z[i]]==s[i+z[i]]){
			z[i]++;
		}
		if(i+z[i]-1>r)l=i,r=i+z[i]-1;
	}
	return z;
}
void solve(){
	
	string s;
	cin>>s;
	vector<int>z=z_function(s);
	for(int i=0;i<s.size();i++)cout<<z[i]<<" ";
	cout<<endl;



	// for(int i=0;i<s.size();i++){
	// 	if(i+z[i]==s.size()){
	// 		cout<<i<<endl;
	// 		cout<<s.substr(i,z[i])<<endl;
	// 		return ;
	// 	}
	// }
}
signed main(){ 
    fastio; 
    int t=1;
   // cin>>t;
    while(t--){
       solve();
    }
}
