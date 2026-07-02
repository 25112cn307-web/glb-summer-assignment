/*#include<iostream>
using namespace std;
int main(){
    int rows,cols;
    cout<<"enter number of rows and columnmn:";
    cin>>rows>>cols;

    int matrix[100][100];
     cout<<"enter matrix elements:\n";
     for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>matrix[i][j];
        }
     }
     cout<<"\ncolumn-wise Sum:\n";
     for(int j=0;j<cols;j++){
        int sum=0;
        for(int i=0;i<rows;i++){
            sum+=matrix[i][j];
        }
        cout<<"sum of column"<<j+1<<"="<<sum<<endl;
     }
     return 0;
    }
    */








/*
    #include<iostream>
using namespace std;
int main(){
    int rows,cols;
    cout<<"enter number of rows and columnmn:";
    cin>>rows>>cols;

    int matrix[100][100];
     cout<<"enter matrix elements:\n";
     for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cin>>matrix[i][j];
        }
     }
     cout<<"\nrow-wise Sum:\n";
     for(int i=0;i<rows;i++){
        int sum=0;
        for(int j=0;j<cols;j++){
            sum+=matrix[i][j];
        }
        cout<<"sum of rows"<<i+1<<"="<<sum<<endl;
     }
     return 0;
    }
    */





/*

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the order of square matrix:";
    cin>>n;

    int matrix[100][100];
     cout<<"enter matrix elements:\n";
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
     }
     bool symmetric=true;
     
     for(int j=0;j<n;j++){
        
        for(int i=0;i<n;i++){
            if(matrix[i][j]!=matrix[j][i]){
                symmetric=false;
                break;
            }
        }
    }

     if(symmetric)
     cout<<"the matrix is symmetric:";
     else
     cout<<"the matrix is not symmetric:";

     return 0;
    }
     */








     #include<iostream>
using namespace std;
int main(){
    int r1,c1,r2,c2;
    cout<<"enter  rows and columnmn of first matrix:";
    cin>>r1>>c1;
    cout<<"enter rows and colulmn of second matrix:";
    cin>>r2>>c2;
    if (c1!=r2){
    cout<<"enter elements of first mattrix:\n";
    return 0;
}

    int A[100][100],B[100][100],C[100][100],D[100][100];
    
     cout<<"enter  elements of first matrix:\n";
     for(int i=0;i<r1;i++){
        for(int j=0;j<c1;j++){
            cin>>A[i][j];
        }
     }
     cout<<"enter elements of second matrix:\n";
     for(int i=0;i<r2;i++){
        for(int j=0;j<c2;j++){
            cin>>B[i][j];
        }
}
     for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            C[i][j]=0;
        }
}
         for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            for(int k=0;k<c1;k++){
            C[i][j]+=A[i][k]*B[k][j];
            }
        }
}
    
        cout<<"\nResultant matrix:\n";
        for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
            cout<<C[i][j]<<"";
        }
}cout<<endl;
     }
    
