#include <iostream>
#include <queue>
#include <vector>
#include <string.h>
using namespace std;

int dx[6] = {0, 0, -1, 1, 0, 0};
int dy[6] = {-1, 1, 0, 0, 0, 0};
int dz[6] = {0, 0, 0, 0, -1, 1};

struct Point {
    int x, y, z;
};

int bfs(Point start, Point end, vector<vector<vector<char>>> &box) {
    int A = box.size(), B = box[0].size(), C = box[0][0].size();
    vector<vector<vector<int>>> dist(A, vector<vector<int>>(B, vector<int>(C, -1)));
    queue<Point> q;

    dist[start.x][start.y][start.z] = 0;
    q.push(start);

    while (!q.empty()) {
        Point u = q.front(); q.pop();
        for (int i = 0; i < 6; i++) {
            Point v = {u.x + dx[i], u.y + dy[i], u.z + dz[i]};
            if (v.x >= 0 && v.x < A && v.y >= 0 && v.y < B && v.z >= 0 && v.z < C && box[v.x][v.y][v.z] != '#' && dist[v.x][v.y][v.z] == -1) {
                dist[v.x][v.y][v.z] = dist[u.x][u.y][u.z] + 1;
                q.push(v);
            }
        }
    }

    return dist[end.x][end.y][end.z];
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int A, B, C;
        cin >> A >> B >> C;
        vector<vector<vector<char>>> box(A, vector<vector<char>>(B, vector<char>(C)));
        Point start, end;
        for (int i = 0; i < A; i++) {
            for (int j = 0; j < B; j++) {
                for (int k = 0; k < C; k++) {
                    cin >> box[i][j][k];
                    if (box[i][j][k] == 'S') start = {i, j, k};
                    if (box[i][j][k] == 'E') end = {i, j, k};
                }
            }
        }
        int result = bfs(start, end, box);
        cout << (result == -1 ? -1 : result) << endl;
    }
    return 0;
}