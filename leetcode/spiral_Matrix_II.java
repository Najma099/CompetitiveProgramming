package leetcode;

public class spiral_Matrix_II {
    public int[][] generateMatrix(int n) {
        int[][] matrix = new int[n][n];
        int num = 1;
        int topRow = 0, bottomRow = n - 1;
        int leftCol = 0, rightCol = n - 1;

        while (topRow <= bottomRow && leftCol <= rightCol) {
            // Fill top row
            for (int i = leftCol; i <= rightCol; i++) {
                matrix[topRow][i] = num++;
            }
            topRow++;

            // Fill right column
            for (int i = topRow; i <= bottomRow; i++) {
                matrix[i][rightCol] = num++;
            }
            rightCol--;

            // Fill bottom row
            if (topRow <= bottomRow) {
                for (int i = rightCol; i >= leftCol; i--) {
                    matrix[bottomRow][i] = num++;
                }
                bottomRow--;
            }

            // Fill left column
            if (leftCol <= rightCol) {
                for (int i = bottomRow; i >= topRow; i--) {
                    matrix[i][leftCol] = num++;
                }
                leftCol++;
            }
        }

        return matrix;
    }
}
