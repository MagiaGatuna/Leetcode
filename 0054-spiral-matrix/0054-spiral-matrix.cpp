class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        int inicioFila = 0, finFila = matrix.size() - 1;
        int inicioColumna = 0, finColumna = matrix[0].size() - 1;

        while (inicioFila <= finFila && inicioColumna <= finColumna) {
            // Recorrer de izquierda a derecha
            for (int j = inicioColumna; j <= finColumna; j++) {
                result.push_back(matrix[inicioFila][j]);
            }
            inicioFila++;

            // Recorrer de arriba hacia abajo
            for (int i = inicioFila; i <= finFila; i++) {
                result.push_back(matrix[i][finColumna]);
            }
            finColumna--;

            if (inicioFila <= finFila) {
                // Recorrer de derecha a izquierda
                for (int j = finColumna; j >= inicioColumna; j--) {
                    result.push_back(matrix[finFila][j]);
                }
                finFila--;
            }

            if (inicioColumna <= finColumna) {
                // Recorrer de abajo hacia arriba
                for (int i = finFila; i >= inicioFila; i--) {
                    result.push_back(matrix[i][inicioColumna]);
                }
                inicioColumna++;
            }
        }
        return result;
    }
};