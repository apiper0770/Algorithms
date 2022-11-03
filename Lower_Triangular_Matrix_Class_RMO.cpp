#include <iostream>

using namespace std;
class LowerTri
{
private:
    int *A;
    int n;
public:
 LowerTri()
 {
    n=2;
    A=new int[2];
 }
 LowerTri(int n)
 {
    this->n=n;
    A=new int[n];
 }
 ~LowerTri()
 {
    delete []A;
 }
 void Create();
 void Set(int i,int j,int x);
 int Get(int i,int j);
 void Display();
 int GetDimension(){return n;}
};

void LowerTri::Create()
{
    printf("In row major order provide lower triangular elements.");
    int x;
    for(i=1;i<=n; i++)
    {
        for(j=1;j<=i; j++)
        {
            printf("Give element for row %d, column %d of triangular matrix", i,j);
            cin >> x;
            A[i*(i-1)/2+j-1]=x;
        }

    }
}
void LowerTri::Set(int i,int j,int x)
{
    if(i>=j)
        A[i*(i-1)/2+j-1]=x;
}
int LowerTri::Get(int i,int j)
{
 if(i>=j)
    return A[i*(i-1)/2+j-1];
 else
    return 0;
}
void LowerTri::Display()
{
 for(int i=1;i<=n;i++)
 {
    for(int j=1;j<=n;j++)
    {
        if(i>=j)
            cout<<A[i*(i-1)/2+j-1]<<“ ";
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

 LowerTri dm(d);

 dm.Create();
 dm.Display();
 
 dm.~LowerTri();

 return 0;
 }
 