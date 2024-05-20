#include<bits/stdc++.h>
using namespace std;


int main()
{
     int t;
    cin>>t;
   for(int i=0;i<t;i++){
   	    cin.ignore();
        string s;
        getline(cin,s);
        stringstream ss(s);
        string tmp;
        stack<char>st;
        while(ss>>tmp){
            for(char c:tmp){
                st.push(c);
            }
            while(!st.empty()){
                cout<<st.top();
                st.pop();
            }
           cout<<" ";
        }
        cout<<"\n";
    }
}