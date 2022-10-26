#include <iostream>

using namespace std;
class UpperTri
{
private:
    int *A;
    int n;
public:
 UpperTri()
 {
    n=2;
    A=new int[2];
 }
 UpperTri(int n)
 {
    this->n=n;
    A=new int[n];
 }
 ~UpperTri()
 {
    delete []A;
 }
 void Create();
 void Set(int i,int j,int x);
 int Get(int i,int j);
 void Display();
 int GetDimension(){return n;}
};

void UpperTri::Create()
{
    printf("In row major order provide lower triangular elements.");
    int x;
    for(i=1;i<=n; i++)
    {
        for(j=i;j<=n; j++)
        {
            printf("Give element for row %d, column %d of triangular matrix", i,j);
            cin >> x;
            A[((i-1)*n -(i-2)*(i-1)/2)+(j-i)]=x;
        }

    }
}

void UpperTri::Set(int i,int j,int x)
{
    if(i>=j)
        A[((i-1)*n -(i-2)*(i-1)/2)+(j-i)]=x;
}
int UpperTri::Get(int i,int j)
{
 if(i==j)
    return A[((i-1)*n -(i-2)*(i-1)/2)+(j-i)];
 return 0;
}
void UpperTri::Display()
{
 for(int i=1;i<=n;i++)
 {
    for(int j=1;j<=n;j++)
    {
        if(i>=j)
            cout<<A[((i-1)*n -(i-2)*(i-1)/2)+(j-i)]<<“ ";
        else
            cout<<"0 ";
    }
    cout<<endl;
 }
}

int main()
{
 struct Matrix m;
 int i,j,x;

 printf("Enter Dimension");
 scanf("%d",&m.n);
 m.A=(int *)malloc(m.n*(m.n+1)/2*sizeof(int));
 printf("enter all elements");
 for(i=1;i<=m.n;i++)
 {
    for(j=1;j<=m.n;j++)
    {
        scanf("%d",&x);
        Set(&m,i,j,x);
    }
}
 printf("\n\n");
 Display(m);


 return 0;
 }
 