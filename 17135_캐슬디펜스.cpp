#include <iostream>
#include <queue>

using namespace std;

int N, M, D;
int board[20][20];
queue<pair<int, int> > Q;

// 하는 탐색할 필요 X
// 좌 -> 상 -> 우 순서로 탐색
int dy[3] = {0, 1, 0};
int dx[3] = {-1, 0, 1};

// 궁수 배치 완료 시점 (a, b, c)
// 해당 경우, 제거할 수 있는 적의 최대 수
int bfs(int a, int b, int c) {
    int result = 0;



}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    cin >> N >> M >> D;

    for (int y = 0; y < N; y++)
        for (int x = 0; x < M; x++)
            cin >> board[y][x];

    // 궁수 배치 : (N, a), (N, b), (N, c)
    for (int a = 0; a < M; a++) {
        for (int b = a + 1; b < M; b++) {
            for (int c = b + 1; c < M; c++) {
                bfs(a, b, c);
            }
        }
    }

//    for (int y = 0; y < N; y++) {
//        cout << endl;
//        for (int x = 0; x < M; x++) {
//            cout << (int) board[y][x];
//        }
//    }
}