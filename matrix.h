#include<iostream>

using namespace std;

class my_matrix {

	public: int matrix[100][100];
	//matrix to store result
	public: int rmatrix[100][100];
	//number of rows and columns of matrices

	public: int row, col;
	int i, j; //counters
	
	
	public: my_matrix(int r, int c) {
		row = r;
		col = c;
		cout << "Enter the Elements for matrix\n";

		 for(i=0;i<row;i++) {
        		for(j=0;j<col;j++) {
            			cin>>matrix[i][j];
        		}
        		cout<<"\n";
    		}

		 
    		cout<<"\n\nMatrix :\n\n";
 
    		for(i=0;i<row;i++) {
        		for(j=0;j<col;j++) {
            			cout<<"\t"<<matrix[i][j];
        		}
        		cout<<"\n\n";
    		}
 
    		cout<<"\n-----------------------------------------------------------\n";
	
	}

	public: my_matrix(int a, int b, int c, int d) {
		row = 2;
		col = 2;
	
		matrix [0][0] = a;
		matrix [0][1] = b;
		matrix [1][0] = c;
		matrix [1][1] = d;


	}
		public: void add(my_matrix B){

			cout << "Add operation\n";

			if(row == B.row && col == B.col) {
				
				for(i =0; i<row; i++){
					for(j =0; j<col;j++){
						rmatrix[i][j] = matrix[i][j] + B.matrix[i][j];
					}
				}

				cout<<"\n\nResult Matrix :\n\n";
 
    				for(i=0;i<row;i++) {
        				for(j=0;j<col;j++) {
            					cout<<"\t"<<rmatrix[i][j];
        				}
        				cout<<"\n\n";
    				}

				cout<<"\n-----------------------------------------------------------\n";

			}
			else 
				cout << "Addition not possible\n\n";
		}




	public: void multiply(my_matrix B) {

	cout << "Multiply operation\n";
	
	if(col==B.row) {
 
        for(i=0;i<row;i++)
        {
            for(j=0;j<B.col;j++)
            {
                rmatrix[i][j]=0;
                for(int k=0;k<B.row;k++)
                {
                    rmatrix[i][j]=rmatrix[i][j]+matrix[i][k]*B.matrix[k][j];
                }
            }
        }
 
        cout<<"\n-----------------------------------------------------------\n";
 
        cout<<"\n\nMultiplication of Matrix A and Matrix B :\n\n";
 
        for(i=0;i<row;i++)
        {
            for(j=0;j<B.col;j++)
            {
                cout<<"\t"<<rmatrix[i][j];
            }
            cout<<"\n\n";
        }
    }
    else
    {
        cout<<"\n\nMultiplication is not possible";
    }


}

	
};



