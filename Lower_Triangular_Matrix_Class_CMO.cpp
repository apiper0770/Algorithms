#include <iostream>

using namespace std;
class LowerTri_Col
{
private:
    int *A;
    int n;
public:
 LowerTri_Col()
 {
    n=2;
    A=new int[2];
 }
 LowerTri_Col(int n)
 {
    this->n=n;
    A=new int[n];
 }
 ~LowerTri_Col()
 {
    delete []A;
 }
 void Create();
 void Set(int i,int j,int x);
 int Get(int i,int j);
 void Display();
 int GetDimension(){return n;}
};

void LowerTri_Col::Create()
{
    printf("In column major order provide lower triangular elements.");
    int x;
    for(j=1;j<=n; j++)
    {
        for(i=j;i<=n; i++)
        {
            printf("Give element for row %d, column %d of triangular matrix", i,j);
            cin >> x;
            A[n*(j-1)-(j-2)*(j-1)/2+i-j]=x;
        }

    }
}

void LowerTri_Col::Set(int i,int j,int x)
{
    if(i>=j)
        A[n*(j-1)-(j-2)*(j-1)/2+i-j]=x;
}
int LowerTri_Col::Get(int i,int j)
{
 if(i>=j)
    return A[n*(j-1)-(j-2)*(j-1)/2+i-j];
 return 0;
}
void LowerTri_Col::Display()
{
 for(int i=1;i<=n;i++)
 {
    for(int j=1;j<=n;j++)
    {
        if(i>=j)
            cout<<A[n*(j-1)-(j-2)*(j-1)/2+i-j]<<“ ";
        else
            cout<<"0 ";
    }
    cout<<endl;
 }
}

int main()
{
 int d;
 cout<<"Enter Dimensions";
 cin>>d;

 LowerTri_Col dm(d);

 dm.Create();
 dm.Display();

 dm.~LowerTri_Col();

 return 0;
 }
 