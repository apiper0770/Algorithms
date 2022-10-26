#include <iostream>

using namespace std;
class UpperTri_Col
{
private:
    int *A;
    int n;
public:
 UpperTri_Col()
 {
    n=2;
    A=new int[2];
 }
 UpperTri_Col(int n)
 {
    this->n=n;
    A=new int[n];
 }
 ~UpperTri_Col()
 {
    delete []A;
 }
 void Create();
 void Set(int i,int j,int x);
 int Get(int i,int j);
 void Display();
 int GetDimension(){return n;}
};

void UpperTri_Col::Create()
{
    printf("In column major order provide lower triangular elements.");
    int x;
    for(j=1;j<=n; j++)
    {
        for(i=1;i<=j; i++)
        {
            printf("Give element for row %d, column %d of triangular matrix", i,j);
            cin >> x;
            A[(j*(j-1)/2)+ (i-1)]=x;
        }

    }

}

void UpperTri_Col::Set(int i,int j,int x)
{
    if(i>=j)
        A[(j*(j-1)/2)+ (i-1)]=x;
}
int UpperTri_Col::Get(int i,int j)
{
 if(i==j)
    return A[(j*(j-1)/2)+ (i-1)];
 return 0;
}
void UpperTri_Col::Display()
{
 for(int i=1;i<=n;i++)
 {
    for(int j=1;j<=n;j++)
    {
        if(i>=j)
            cout<<A[(j*(j-1)/2)+ (i-1)]<<“ ";
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

 UpperTri_Col dm(d);

 dm.Create();
 dm.Display();
 
 return 0;
 }
 