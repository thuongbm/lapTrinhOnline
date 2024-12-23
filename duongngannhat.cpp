#include <iostream>
#include <queue>
#include <vector>
using namespace std;

// H�m ki?m tra m?t � c� h?p l? d? di hay kh�ng
bool is_valid(int x, int y, int n, int m, vector<vector<int>>& maze, vector<vector<bool>>& visited) {
    return (x >= 0 && x < n && y >= 0 && y < m && maze[x][y] == 0 && !visited[x][y]);
}

// H�m t�m du?ng di ng?n nh?t b?ng BFS
int bfs(vector<vector<int>>& maze, pair<int, int> start, pair<int, int> end, int n, int m) {
    // C�c hu?ng di chuy?n: tr�i, ph?i, l�n, xu?ng
    vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    
    // T?o h�ng d?i d? th?c hi?n BFS
    queue<pair<pair<int, int>, int>> q; // ((x, y), steps)
    q.push({start, 0});
    
    // M?ng d�nh d?u c�c � d� du?c tham
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    visited[start.first][start.second] = true;
    
    // Th?c hi?n BFS
    while (!q.empty()) {
        auto current = q.front();
        q.pop();
        int x = current.first.first;
        int y = current.first.second;
        int steps = current.second;
        
        // N?u t�m th?y chu?t
        if (x == end.first && y == end.second) {
            return steps;
        }
        
        // Ki?m tra 4 hu?ng
        for (int i = 0; i < 4; i++) {
            int dx = directions[i].first;
            int dy = directions[i].second;
            int new_x = x + dx;
            int new_y = y + dy;
            if (is_valid(new_x, new_y, n, m, maze, visited)) {
                visited[new_x][new_y] = true;
                q.push({{new_x, new_y}, steps + 1});
            }
        }
    }
    
    // N?u kh�ng t�m du?c du?ng di
    return -1;
}

int main() {
    // �?c k�ch thu?c c?a m� cung
    int n, m;
    cin >> n >> m;
    
    // �?c m� cung
    vector<vector<int>> maze(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> maze[i][j];
        }
    }
    
    // �?c v? tr� c?a m�o v� chu?t
    int start_x, start_y, end_x, end_y;
    cin >> start_x >> start_y >> end_x >> end_y;
    
    // Ki?m tra n?u v? tr� c?a m�o l� v?t c?n
    if (maze[start_x][start_y] == 1) {
        cout << -1 << endl;
    } else {
        // T�m du?ng di ng?n nh?t
        int result = bfs(maze, {start_x, start_y}, {end_x, end_y}, n, m);
        cout << result << endl;
    }
    
    return 0;
}

