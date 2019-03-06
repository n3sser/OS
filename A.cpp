#include <iostream>

using namespace std;

int main()
{
    int a,b,t,ans;
    char ch;
    cin>>t;
    
    while(t--){
        cin>>a>>b;
        ans=0;
        for(int i=a; i<=b; i++) ans+=i;
        cout<<ans<<endl;
        
    }
    
    
    
    
    
    
    

    return 0;
}