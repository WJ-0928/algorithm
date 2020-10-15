//#include <iostream>
//#include <fstream>
//#include <queue>
//#include <cmath>
//#include <cstdlib>
//using namespace std;
//
//class Node
//{
//public:
//    int box_x;
//    int box_y;
//    int people_x;
//    int people_y;
//    int step;
//
//    Node() {}
//    bool operator < (const Node& node) const
//    {
//        return step > node.step;
//    }
//};
//
//const int MAX = 20;
//priority_queue<Node> q;
//int box_x, box_y;
//int people_x, people_y;
//int end_x, end_y;
//char board[MAX][MAX];
//int dx[] = { 0, 0,  1, -1 };
//int dy[] = { 1, -1, 0,  0 };
//int n, m;            
//bool flag = false;  
//bool flag1 = false;  
//int visit[MAX][MAX][MAX][MAX];  
//int visit2[MAX][MAX];
//int best; 
//
//bool dfs(int to_x, int to_y, int box_x, int box_y, int people_x, int people_y)
//{
//    visit2[people_x][people_y] = 1;
//    if (to_x == people_x && to_y == people_y)
//    {
//        flag1 = true;
//        return true;
//    }
//    if (!flag1)
//    {
//        for (int i = 0; i < 4; i++)
//        {
//            int xx = people_x + dx[i];
//            int yy = people_y + dy[i];
//            if (xx<1 || yy<1 || xx>n || yy>m || (xx == box_x && yy == box_y) || board[xx][yy] == 'S' || visit2[xx][yy])
//                continue;
//            dfs(to_x, to_y, box_x, box_y, xx, yy);
//            if (flag1)
//                return true;
//        }
//    }
//    return false;
//}
//
//void bfs()
//{
//    while (!q.empty())
//    {
//        Node cur = q.top();
//        q.pop();
//        if (cur.box_x == end_x && cur.box_y == end_y)
//        {
//            best = cur.step;
//            flag = true;
//            break;
//        }
//
//        else
//            for (int i = 0; i < 4; i++)
//            {
//                flag1 = false;
//                memset(visit2, 0, sizeof(visit2));
//                int x = cur.box_x + dx[i];
//                int y = cur.box_y + dy[i];
//                if (x<1 || y<1 || x>n || y>m || board[x][y] == 'S')
//                    continue;
//                Node next;
//                next.box_x = x;
//                next.box_y = y;
//                next.people_x = cur.box_x;
//                next.people_y = cur.box_y;
//                next.step = cur.step + 1;
//                if (i == 0)
//                    if (cur.box_y - 1 > 0) 
//                        if (board[cur.box_x][cur.box_y - 1] != 'S' && dfs(cur.box_x, cur.box_y - 1, cur.box_x, cur.box_y, cur.people_x, cur.people_y) && !visit[x][y][cur.box_x][cur.box_y - 1])
//                        {
//                            visit[x][y][cur.box_x][cur.box_y - 1] = 1;
//                            q.push(next);
//                        }
//
//                if (i == 1)
//                    if (cur.box_y + 1 <= m)
//                        if (board[cur.box_x][cur.box_y + 1] != 'S' && dfs(cur.box_x, cur.box_y + 1, cur.box_x, cur.box_y, cur.people_x, cur.people_y) && !visit[x][y][cur.box_x][cur.box_y + 1])
//                        {
//                            visit[x][y][cur.box_x][cur.box_y + 1] = 1;
//                            q.push(next);
//                        }
//
//                if (i == 2)
//                    if (cur.box_x - 1 > 0)
//                        if (board[cur.box_x - 1][cur.box_y] != 'S' && dfs(cur.box_x - 1, cur.box_y, cur.box_x, cur.box_y, cur.people_x, cur.people_y) && !visit[x][y][cur.box_x - 1][cur.box_y])
//                        {
//                            visit[x][y][cur.box_x - 1][cur.box_y] = 1;
//                            q.push(next);
//                        }
//                if (i == 3)
//                    if (cur.box_x + 1 <= n)
//                        if (board[cur.box_x + 1][cur.box_y] != 'S' && dfs(cur.box_x + 1, cur.box_y, cur.box_x, cur.box_y, cur.people_x, cur.people_y) && !visit[x][y][cur.box_x + 1][cur.box_y])
//                        {
//                            visit[x][y][cur.box_x + 1][cur.box_y] = 1;
//                            q.push(next);
//                        }
//            }
//    }
//}
//
//int main()
//{
//    ifstream fin("ÍÆÏä×Ó.txt");
//    fin >> n;  cin>>n;
//    fin >> m;  cin >> m;
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = 1; j <= m; j++)
//        {
//            fin >> board[i][j];
//            cin >> board[i][j];
//            if (board[i][j] == 'P')
//            {
//                box_x = i;
//                box_y = j;
//            }
//            if (board[i][j] == 'M')
//            {
//                people_x = i;
//                people_y = j;
//            }
//            if (board[i][j] == 'K')
//            {
//                end_x = i;
//                end_y = j;
//            }
//        }
//        cout << endl;
//    }
//    Node cur;
//    cur.box_x = box_x;
//    cur.box_y = box_y;
//    cur.people_x = people_x;
//    cur.people_y = people_y;
//    cur.step = 0;
//    q.push(cur);
//    memset(visit2, 0, sizeof(visit2));
//    memset(visit, 0, sizeof(visit));
//
//    bfs();
//    if (flag)
//        cout << best << endl;
//    else
//        cout << "No Solution!";
//
//    cout << endl << endl;
//    fin.close();
//    return 0;
//}

