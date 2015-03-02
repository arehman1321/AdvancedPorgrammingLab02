#include <limits.h>
#include "matrix.h"
#include "gtest/gtest.h"



TEST(AddTest1, Matrix) {

	my_matrix A(1, 1, 1, 1);
	my_matrix B(1, 1, 1, 1);
	A.add(B);
	int exp_matrix[2][2] = {{2,2}, {2,2}};
	int i,j;
	for(i=0; i<2;i++){
		for(j=0; j<2; j++)
			EXPECT_EQ( A.rmatrix[i][j], exp_matrix[i][j] );

	}
	
  	
}

TEST( MultiplyTest, Matrix) {

	my_matrix C(1,1,1,1);
	my_matrix D(1,1,1,1);
	C.multiply(D);
	int exp_matrix[2][2] = { {2,2}, {2,2}};
	int i, j;

	for(i=0; i<2;i++){
		for(j=0; j<2; j++)
			EXPECT_EQ( C.rmatrix[i][j], exp_matrix[i][j] );

	}
}

TEST( CombinedTest, Matrix) {

	my_matrix E(1,1,1,1);
	my_matrix F(1,1,1,1);
	my_matrix G(1,1,1,1);
	E.multiply(F);

	my_matrix R(E.rmatrix[0][0], E.rmatrix[0][1],E.rmatrix[1][0],E.rmatrix[1][1]);
	G.add(R);
	int exp_matrix[2][2] = { {3,3}, {3,3}};
	int i, j;

	for(i=0; i<2;i++){
		for(j=0; j<2; j++)
			EXPECT_EQ( G.rmatrix[i][j], exp_matrix[i][j] );

	}



}


