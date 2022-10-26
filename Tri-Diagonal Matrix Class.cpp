#include <iostream>

using namespace std;
class TriDiagonal
{
private:
    int *A;
    int n;
public:
 TriDiagonal()
 {
    n=2;
    A=new int[2];
 }
 TriDiagonal(int n)
 {
    this->n=n;
    A=new int[n];
 }
 ~TriDiagonal()
 {
    delete []A;
 }
 void Create();
 void Set(int i,int j,int x);
 int Get(int i,int j);
 void Display();
 int GetDimension(){return n;}
};

void TriDiagonal::Create()
{
    printf("In lower,main, upper diagonal order provide Tri-Diagonal elements.");
    int x,y,z;
    for(i=1;i<=n; i++)
    {
        if(i<n)
        printf("Give position# %d element of lower,main,upper diagonals.\n All 3 inputs in that respective order, (l,m,u).", i);
            cin >> x,y,z;
            if(i-j == 1)
                A[i-1]=x;
            if (i-j == 0)
                A[n-1+i-1]=y; 
            if (i-j == -1)
                A[2*n-1 + i-1]=z;
        else
            printf("Give final element of main diagonal!");
            cin >> x;
            A[n-1+i-1]=x; 
    }

}

void TriDiagonal::Set(int i,int j,int x)
{
    if(i-j == 1)
        A[i-1]=x;
    if (i-j == 0)
        A[n-1+i-1]=x; 
    if (i-j == -1)
        A[2*n-1 + i-1]=x;
}
int TriDiagonal::Get(int i,int j)
{
    if(i-j == 1)
        return A[i-1];
    if (i-j == 0)
        return A[n-1+i-1]; 
    if (i-j == -1)
        return A[2*n-1 + i-1];
 return 0;
}
void TriDiagonal::Display()
{
 for(int i=1;i<=n;i++)
 {
    for(int j=1;j<=n;j++)
    {
        if(i-j == 1)
            cout<<A[i-1]<<“ ";
        else if(i-j == 0)
            cout<<A[n-1+i-1]<<“ ";
        else if(i-j == 1)
            cout<<A[2*n-1 + i-1]<<“ ";
        else
            cout<<"0 ";
    }
    cout<<endl;
 }
}
int main()
{
 int d;
 cout<<"Enter Square Matrix Dimension Size";
 cin>>d;

 TriDiagonal dm(d);

 dm.Create();
 dm.Display();
 
 return 0;
 }
 