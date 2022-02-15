#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int dx[8] = { 0,0,1,-1,1,1,-1,-1 };
int dy[8] = { -1,1,0,0,1,-1,-1,1 };

int w, h;
int map[51][51];

void DFS(int x, int y) {
    map[x][y] = 0;
    for (int i = 0; i < 8; i++) {
        int tmp_x = x + dx[i];
        int tmp_y = y + dy[i];

        if (tmp_x < 0 || tmp_x >= w || tmp_y < 0 || tmp_y >= h) {
            continue;
        }
        if (map[tmp_x][tmp_y]) {
            DFS(tmp_x, tmp_y);
        }
    }
}

int main() {
    while (1) {
        int count = 0;
        scanf("%d %d", &h, &w);

        if (!w && !h) break; //0->false !false == true /// ! false == ! 0

        for (int i = 0; i < w; i++) {
            for (int j = 0; j < h; j++) {
                scanf("%d", &map[i][j]);
            }
        }

        for (int i = 0; i < w; i++) {
            for (int j = 0; j < h; j++) {
                if (map[i][j]) {
                    DFS(i, j);
                    count++;
                }
            }
        }

        printf("%d\n", count);
    }
}





/*
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int map[50][50];
int visited[50][50];
int land_cnt;

int x[8] = { 1, -1, 0, 0, 1, 1, -1, -1 };// 가로세로대각선 한칸씩 이동하는 것 나타내기
int y[8] = { 0, 0, 1, -1, 1, -1, 1, -1 };

struct Node {
    int x;
    int y;
    struct Node* next;

};

void bfs(struct Node* head, int w, int h);

int main(void) {
    int w, h;
    struct Node* head, * new;

    while (1)
    {
        scanf("%d %d", &w, &h);

        if (w == 0 && h == 0)
            break;

        land_cnt = 0;

        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                scanf("%d", &map[i][j]);
                visited[i][j] = 0;
            }
        }

        for (int i = 0; i < h; i++) {
            for (int j = 0; j < w; j++) {
                if (visited[i][j] == 1 || map[i][j] == 0)
                    continue;
                visited[i][j] = 1;
                head = (struct Node*)malloc(sizeof(struct Node));
                new = (struct Node*)malloc(sizeof(struct Node));
                new->x = i;
                new->y = j;
                new->next = NULL;
                head->next = new;

                bfs(head, w, h);
            }
        }

        printf("%d\n", land_cnt);

    }
}

void bfs(struct Node* head, int w, int h) {
    struct Node* temp, * new, * use;
    int X, Y;

    use = head->next;

    while (head->next != NULL) {
        temp = head->next;

        for (int i = 0; i < 8; i++) {
            X = temp->x + x[i];
            Y = temp->y + y[i];

            if (X < 0 || X >= h || Y < 0 || Y >= w) {
                continue;
            }
            if (visited[X][Y] == 1 || map[X][Y] == 0) {
                continue;
            }

            visited[X][Y] = 1;
            new = (struct Node*)malloc(sizeof(struct Node));
            new->x = X;
            new->y = Y;
            new->next = NULL;
            use->next = new;
            use = use->next;
        }

        head->next = temp->next;
        free(temp);
    }
    land_cnt++;
}

*/


 
