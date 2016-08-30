#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	vector<int>cantidad;
	while(a.size()>0){
		cantidad.push_back(a.size());
		sort(a.begin(),a.end());
		int min=a[0];
		
		//restamos
		for(int i=0;i<a.size();i++){
			a[i]=a[i]-min;
		}
		//borramos si es cero
		for(int i=0;i<a.size();i++){
    		if(a[i]==0){
    			a.erase(a.begin()+i);
    			i--;
    		}	
    	}
    	
		
	}
	
	for(int i=0;i<cantidad.size();i++){
    	cout<<cantidad[i]<<endl;
    }
	
	return 0;
}
