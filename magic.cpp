int sumArrRow(int **matrix,int row, int n)
{
	int SumRow = 0;
	for(int i = 0; i < n; i++)
	{
		SumRow += matrix[row][i];
	}
	return SumRow;
}

int sumArrCol(int **matrix, int col, int n)
{
	int SumCol = 0;
	for(int i = 0; i < n; i++)
	{
		SumCol += matrix[i][col];
	}
	return SumCol;
}

int sumArrD(int **matrix, int n)
{
	int SumD = 0;
	for(int i = 0; i < n; i++)
	{
		SumD += matrix[i][i];
	}
	return SumD;
}

int sumArrDBack(int **matrix, int n)
{
	int SumDBack = 0;
	for(int i = 0; i < n; i++)
	{
		SumDBack += matrix[i][n-i];
	}
	return SumDBack;
}

bool magic_square(int **matrix, int n)
{
	for(int i = 0; i < n; i++)
	{
		if(sumArrCol(matrix, i, n) != sumArrRow(matrix, i, n) || sumArrD(matrix, n) != sumArrDBack(matrix, n) 
			|| sumArrCol(matrix, i, n) != sumArrD(matrix, n))
		{		
			return false;
		}
		else
			return true;
	}
}
