#include <iostream>

using namespace std;
class Symm
{
private:
    int *A;
    int n;
public:
 Symm()
 {
    n=2;
    A=new int[2];
 }
 Symm(int n)
 {
    this->n=n;
    A=new int[n];
 }
 ~Symm()
 {
    delete []A;
 }
 void Create();
 void Set(int i,int j,int x);
 int Get(int i,int j);
 void Display();
 int GetDimension(){return n;}
};

void Symm::Create()
{
    printf("In row major order provide lower triangular elements only for symmetric matrix.");
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

void Symm::Set(int i,int j,int x)
{
    if(i>=j)
        A[i*(i-1)/2+j-1]=x;
}
int Symm::Get(int i,int j)
{
    if(i>=j)
        return A[i*(i-1)/2+j-1];
    else
        return 0;
}
void Symm::Display()
{
 for(int i=1;i<=n;i++)
 {
    for(int j=1;j<=n;j++)
    {
        if(i>=j)
            cout << A[i*(i-1)/2+j-1] <<“ ";
        else
            cout << A[j*(j-1)/2+i-1] <<“ ";
    }
    cout<<endl;
 }
}

int main()
{
 int d;
 cout<<"Enter Square Matrix Dimension Size";
 cin>>d;

 Symm dm(d);

 dm.Create();
 dm.Display();

 dm.~Symm();
 
 return 0;
}
 