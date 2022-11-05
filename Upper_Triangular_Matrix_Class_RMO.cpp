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
 void SetValue(int i,int j,int x);
 void SetSize(int n);
 int GetValue(int i,int j);
 void Display();
 int GetDimension(){return n;}
};

void UpperTri::Create()
{
    printf("enter all elements");
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
    printf("\n\n");
}

void UpperTri::SetValue(int i,int j,int x)
{
    if(i>=j)
        A[((i-1)*n -(i-2)*(i-1)/2)+(j-i)]=x;
}

void UpperTri::SetSize(int n)
{
    this->n = n;
}

int UpperTri::GetValue(int i,int j)
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
 UpperTri m;
 int dim;

 printf("Enter Dimension");
 cin >> dim;
 m.SetSize(dim);
 m.Create(); 
 m.Display();


 return 0;
 }
 