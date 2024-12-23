#include <iostream>
#include <queue>
#include <vector>
using namespace std;

// Hàm ki?m tra m?t ô có h?p l? d? di hay không
bool is_valid(int x, int y, int n, int m, vector<vector<int>>& maze, vector<vector<bool>>& visited) {
    return (x >= 0 && x < n && y >= 0 && y < m && maze[x][y] == 0 && !visited[x][y]);
}

// Hàm tìm du?ng di ng?n nh?t b?ng BFS
int bfs(vector<vector<int>>& maze, pair<int, int> start, pair<int, int> end, int n, int m) {
    // Các hu?ng di chuy?n: trái, ph?i, lên, xu?ng
    vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    
    // T?o hàng d?i d? th?c hi?n BFS
    queue<pair<pair<int, int>, int>> q; // ((x, y), steps)
    q.push({start, 0});
    
    // M?ng dánh d?u các ô dã du?c tham
    vector<vector<bool>> visited(n, vector<bool>(m, false));
    visited[start.first][start.second] = true;
    
    // Th?c hi?n BFS
    while (!q.empty()) {
        auto current = q.front();
        q.pop();
        int x = current.first.first;
        int y = current.first.second;
        int steps = current.second;
        
        // N?u tìm th?y chu?t
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
    
    // N?u không tìm du?c du?ng di
    return -1;
}

int main() {
    // Ð?c kích thu?c c?a mê cung
    int n, m;
    cin >> n >> m;
    
    // Ð?c mê cung
    vector<vector<int>> maze(n, vector<int>(m));
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> maze[i][j];
        }
    }
    
    // Ð?c v? trí c?a mèo và chu?t
    int start_x, start_y, end_x, end_y;
    cin >> start_x >> start_y >> end_x >> end_y;
    
    // Ki?m tra n?u v? trí c?a mèo là v?t c?n
    if (maze[start_x][start_y] == 1) {
        cout << -1 << endl;
    } else {
        // Tìm du?ng di ng?n nh?t
        int result = bfs(maze, {start_x, start_y}, {end_x, end_y}, n, m);
        cout << result << endl;
    }
    
    return 0;
}

