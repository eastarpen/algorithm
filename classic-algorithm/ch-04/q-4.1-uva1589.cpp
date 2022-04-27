/**
 * https://vjudge.net/problem/UVA-1589
 */ 

#include<iostream>
#include<utility>

using namespace std;

#define x first
#define y second
#define PII pair<int, int>

const int MAXN = 15;

const int G = 1;  // general
const int R = 2;  // chariot
const int C = 3;  // cannon
const int H = 4;  // horse

int n, x, y;
int board[MAXN][MAXN];
PII a[10];
bool vis[MAXN][MAXN];

bool read() {
    scanf("%d %d %d\n", &n, &x, &y);
    if(!n && !x && !y) return false;
    char op; int i, j, f;
    for (int i = 1; i <= n; ++i) {
        scanf("%c %d %d\n", &op, &i, &j);
        switch(op) {
            case 'G': f = G; break;
            case 'R': f = R; break;
            case 'C': f = C; break;
            case 'H': f = H; break;
        }
        board[i][j] = f; a[i] = {i, j};
    }
    return true;
}

void chariot(int x, int y) {
    for(int i = 1; i <= 10; ++i) vis[i][y] = true;
    for(int i = 1; i <= 9; ++i) vis[x][i] = true;
}

void horse(int x, int y) {
}

int main(void) {
    return 0;
}
