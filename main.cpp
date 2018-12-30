#include <iostream>
using namespace std;

void MatrixShow(int** a, int n);
void MatrixCalc(int** a, int n);


int main(int argc, const char * argv[]) {
    int n; cin>>n;
    
    int** a = new int*[n];
    
    for (int i=0; i<n; i++) {
        a[i] = new int[n];
        for (int j=0; j<n; j++) {
            a[i][j]=1+rand()%9;
        }
    }

    MatrixShow(a, n);
    MatrixCalc(a, n);
    
    for (int i=0; i<n; i++) delete[] a[i];
    delete[] a;
    
    return 0;
}

void MatrixShow(int** a, int n)
{
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++)
            cout<<a[i][j]<<" ";
        
        cout<<endl;
    }
    
    cout<<endl;
}

void MatrixCalc(int** a, int n)
{
    int z=0,max=-1,s=0;
    
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
}
