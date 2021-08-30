#include<bits/stdc++.h>
using namespace std;
int main(){
	  string s="sandeeeppp sandeep";
    map<char,int>mp;
for(int i=0;i<s.length();i++){
	if(s[i]==' '){
    	mp.clear();
    	cout<<" ";
	}else if(mp.find(s[i])==mp.end()){
		cout<<s[i];
		mp[s[i]]++;
	}
	else{
		char ch=toupper(s[i]);
		cout<<ch;
	}
}
return 0;
}

