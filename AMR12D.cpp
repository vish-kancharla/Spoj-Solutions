#include<bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		bool check = true;
		int n = s.size();
		for(int i = 0 ; i < n ; ++i){
			if(s[i] != s[n-i-1]){
				check = false;
				break;

			}
		}
		if(check)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
}