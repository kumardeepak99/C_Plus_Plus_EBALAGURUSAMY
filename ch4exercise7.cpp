
#include <bits/stdc++.h>
using namespace std;

double Power(double m,int n=2){
    if(n==2){
        return m*m;
    }else{
        double ans=1;
        while(n>0){
            ans=ans*m;
            n--;
        }
        return ans;
    }
}

int main()
{
    int n=2;
    double m,ans;
    cout<<"Enter base m for power := ";
    cin>>m;
    cout<<"do you want to enter power default value = 2\n please enter Y for yes or N for no := ";
    char powerchar;
    cin>>powerchar;
    if(powerchar=='Y'){
            cout<<"Enter base n for power := ";
            cin>>n;
           ans= Power(m,n);
    }
    if(powerchar=='N'){
        ans= Power(m);
    }
    cout<<m <<" raised to power "<<n<<" is := "<<ans<<endl;
    return 0;
}
