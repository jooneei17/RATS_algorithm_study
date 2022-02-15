#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 1001

int N, M;
int map[SIZE][SIZE];
int visited[SIZE] = { 0 };
int count = 0;

void DFS(int v) {
	visited[v] = 1;
	for (int k = 1; k <= N; k++) {
		if (visited[k] == 0 && map[v][k] == 1) {
			DFS(k);
		}
	}
}

void solution() {
	for (int i = 1; i <= N; i++) {
		if (visited[i] == 0) {
			count++;
			DFS(i);
		}
	}
}


int main() {
	scanf("%d %d", &N, &M);
	int u, v;
	for (int i = 1; i <= M; i++) {
		scanf("%d %d", &u, &v);
		map[u][v] = 1;
		map[v][u] = 1;
	}

	solution();

	printf("%d", count);

	return 0;
}
