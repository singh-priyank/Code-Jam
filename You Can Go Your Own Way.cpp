#include<iostream>
using namespace std;
int main(){
    int t,n,k=0;
    cin>>t;                // input for number of test cases
    while(t--){
        string s,s1;
        cin>>n>>s;         //  input for length of path and path(string)
        s1=s;
        /*  for every movement in east direction we move in south direction and vice versa  */
        for(int i=0;s[i]!='\0';i++){     
            if(s[i]=='E') s1[i]='S';
            else s1[i]='E';
        }
        k++;
        //  Output
        cout<<"Case #"<<k<<": "<<s1<<"\n";
    }
    return 0;
}