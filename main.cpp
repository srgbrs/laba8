#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int n,z=0,max=-1,s=0; cin>>n;
    int a[n][n];

    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            a[i][j]=rand()%8+1;
    
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++)
            cout<<a[i][j]<<" ";
        
        cout<<endl;
    }
    
    cout<<endl;
    
    for (int i=0; i<(n/2); i++)
    {
        for (int j=(n/2)-z; j<= (n/2)+z; j++)
        {
            cout<<a[i][j]<<" ";
            if (a[i][j] > max)
                max = a[i][j];
            s=s+a[i][j];
        }
        cout<<endl;
        z++;
    }
    
    cout<<endl;
    z=0;
    
    for (int i=(n-1); i>=(n/2); i--)
    {
        for (int j=(n/2)-z; j<= (n/2)+z; j++)
        {
            cout<<a[i][j]<<" ";
            if (a[i][j] > max)
                max = a[i][j];
            s=s+a[i][j];
        }
        cout<<endl;
        z++;
    }
    
    cout<<endl; cout<<"max "<<max<<endl<<"sum "<<s<<endl;
    
    return 0;
}
