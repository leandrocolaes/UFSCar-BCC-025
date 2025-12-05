#include <stdio.h>
#include <stdbool.h>

// Tamanho do labirinto (N x N)
#define N 3

// Função para imprimir a matriz de solução
void printSolution(int sol[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf(" %d ", sol[i][j]);
        }
        printf("\n");
    }
}

// Função para verificar se a célula (x, y) é um movimento válido
bool isSafe(int maze[N][N], int x, int y) {
    // Verifica se (x, y) está dentro dos limites do labirinto
    // e se a célula não está bloqueada
    if (x >= 0 && x < N && y >= 0 && y < N && maze[x][y] == 1) {
        return true;
    }
    return false;
}

// Função recursiva de backtracking para resolver o labirinto
bool solveMazeUtil(int maze[N][N], int x, int y, int sol[N][N]) {
    // Se (x, y) é a célula de destino, retorna true
    if (x == N - 1 && y == N - 1 && maze[x][y] == 1) {
        sol[x][y] = 1;
        return true;
    }

    // Verifica se a célula atual (x, y) é válida
    if (isSafe(maze, x, y) == true) {
        // Marca a célula como parte do caminho da solução
        sol[x][y] = 1;

        // Move para a frente na direção x (para baixo)
        if (solveMazeUtil(maze, x + 1, y, sol) == true) {
            return true;
        }

        // Se mover para baixo não levou a uma solução,
        // move para a frente na direção y (para a direita)
        if (solveMazeUtil(maze, x, y + 1, sol) == true) {
            return true;
        }

        // Se nenhum dos movimentos acima funcionar, faz o backtrack:
        // desmarca a célula (x, y) e retorna false
        sol[x][y] = 0;
        return false;
    }

    return false;
}

// Função principal para resolver o problema do Rato no Labirinto
bool solveMaze(int maze[N][N]) {
    int sol[N][N] = { {0, 0, 0},
                      {0, 0, 0},
                      {0, 0, 0} };

    if (solveMazeUtil(maze, 0, 0, sol) == false) {
        printf("Não existe solução\n");
        return false;
    }

    printf("Caminho da solução:\n");
    printSolution(sol);
    return true;
}

// Função main para testar o código
int main() {
    int maze[N][N] = { {1, 1, 1},
                       {1, 0, 1},
                       {0, 1, 1}, };

    solveMaze(maze);
    return 0;
}
