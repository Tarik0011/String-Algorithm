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
vector<int>lps_compute(string s){
	int len=0,i=1,n=s.size();
	vector<int>lps(n,0);
	while(i<n){
		if(s[len]==s[i]){
			len++;
			lps[i]=len;
			i++;
		}else{
			if(len!=0)len=lps[len-1];
			else{
				lps[i]=0;
				i++;
			}
		}
	}
	return lps;
}
void kmp_search(string s,string pattern){
	 bool found=false;
    vector<int>lps=lps_compute(pattern);
    int j=0,i=0,n=s.size();
    while(i<n){
    	if(s[i]==pattern[j]){
    		i++,j++;
    	}else{
    		if(j!=0)j=lps[j-1];
    		else i++;
    	}
    	if(j==pattern.size()){
    		cout << "found match at : " << (i - pattern.length()) << endl;
    		return;
    	}
    }
    cout<<"NOT FOUND"<<endl;
}
void solve(){
	string s,t;
	cin>>s>>t;
	kmp_search(s,t);
}
signed main(){ 
    fastio; 
    int t=1;
   // cin>>t;
    while(t--){
       solve();
    }
}
