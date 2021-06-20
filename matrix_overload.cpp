#include<iostream>
using namespace std;
class Matrix
{       int rows,col;
        int a[10][10];
    public:
        void accept();
        void operator +(Matrix x);
        void operator -(Matrix x);
        void operator *(Matrix x);
};
void Matrix::accept()
{   cout<<"Enter the number of rows: ";
    cin>>rows;
    cout<<"Enter the number of columns: ";
    cin>>col;
    cout<<"Enter the elements of matrix: "<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<col; j++){
            cin>>a[i][j];
        }
    }
}
void Matrix::operator +(Matrix x)
{   int mat[rows][col];
    for(int i=0; i<rows; i++){
        for(int j=0; j<col; j++){
             mat[i][j]=a[i][j]+x.a[i][j];
            }
        }
    for(int i=0; i<rows; i++){
        for(int j=0; j<col; j++){
            cout<<mat[i][j];
            }
        cout<<"\n";
    }
}
void Matrix::operator -(Matrix x)
{   int mat[rows][col];
    for(int i=0; i<rows; i++){
        for(int j=0; j<col; j++){
            mat[i][j]=a[i][j]-x.a[i][j];
            }
        }
    for(int i=0; i<rows; i++){
        for(int j=0; j<col; j++){
            cout<<mat[i][j];
            }
        cout<<"\n";
    }
}
void Matrix::operator*(Matrix x){
    int mat[rows][col];
    int i, j, k;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < col; j++) {
            mat[i][j] = 0;
            for (k = 0; k < rows; k++)
                mat[i][j] += a[i][k] * x.a[k][j];
        }
    }
    for(int i=0; i<rows; i++){
        for(int j=0; j<col; j++){
            cout<<mat[i][j];
            }
        cout<<"\n";
    }
}
int main()
{
        Matrix m,n;
        int ch;
        do{
        cout<<"Enter your choice: ";
        cin>>ch;
        switch (ch)
        {
        case 1:
            m.accept();     
            n.accept();
            m+n;
            break;
        case 2:
            m.accept();     
            n.accept();
            m-n;
            break;
        case 3:
            m.accept();     
            n.accept();
            m*n;
            break;
        case 4:
            exit(0);
            break;
        default:
            exit(0);
            break;
        }
        }while(ch!=4);
        return 0;
}