#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAX 1001

int metrix[MAX][MAX];
int visited[MAX * MAX];

void DFS(int v, int N) {
	printf("%d ", v);// 정점 출력

	visited[v] = 1;// 방문 표시

	for (int d = 1; d <= N; d++) {// 인접 정점 체크
		if (!visited[d] && metrix[v][d]) {//방문 안했고 && 이동 가능하면
			DFS(d, N);
		}
	}
}

int queue[MAX * MAX] = { 0 };

void BFS(int v, int N) {
	int front = -1, rear = -1;

	rear++;// 첫번재 추가
	queue[rear] = v;

	visited[v] = 1;// 방문 표시

	printf("%d ", v);

	while (front < rear) {// 너비 우선 탐색
		front++;// 큐에서 꺼내기
		int nextV = queue[front];

		for (int d = 1; d <= N; d++) {//인접 정점 체크
			if (!visited[d] && metrix[nextV][d]) {// 방문 안했고 && 이동 가능하면
				rear++;
				visited[d] = 1;
				queue[rear] = d;

				printf("%d ", d);
			}
		}
	}
}

void init(int N) {
	printf("\n");
	for (int i = 1; i <= N; i++) {
		visited[i] = 0;
	}
}


int main() {
	
	int N=0, M=0, V=0;

	scanf("%d %d %d", &N, &M, &V);

	for (int i = 0; i < M; i++) {
		int s = 0;
		int d = 0;
		
		scanf("%d %d", &s, &d);

		metrix[s][d] = 1;
		metrix[d][s] = 1;
	}

	DFS(V, N);

	init(N);

	BFS(V, N);

	return 0;
}

