#include <iostream>
#include<unordered_map>
using namespace std;
//Codechef Construct String div-4 // 
int main() {
	// your code goes here //
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string a;
	    cin>>a;
	    string empty="";
	    for(int i=0;i<n;i++){
	           char ch = a[i];
	           int count;
	            count = 0;
	             count++;
	           for(int k=i+1;k<n;k++){
	               if(a[k] != ch){
	                   break;
	               }
	               else{
	                   count++;
	               }
	           }
	           if(count % 2 == 0 ){
	               
	               empty.push_back(ch);
	               empty.push_back(ch);
	               i = i + count - 1;
	           }
	           else if(count % 2 != 0 ){
	               empty.push_back(ch);
	               i = i + count -1;
	                
	           }
	           
	    }
	    cout<<empty<<endl;
	}
	return 0;
}
