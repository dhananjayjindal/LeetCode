#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        unordered_map<int,vector<int>> graph;
        for(auto &p:pairs) {
            graph[p[0]].push_back(p[1]);
            graph[p[1]].push_back(p[0]);
        }

        int n = s.length();
        string out(n, ' ');
        vector<bool> visited(n,0);
        queue<int> q;
        priority_queue<int> indices;
        priority_queue<char> str;
        for(int i = 0; i < n; i++) {
            if(visited[i]) continue;
            q.push(i);
            indices.push(i);
            str.push(s[i]);
            visited[i] = true;
            while(!q.empty()) {
                int fnode = q.front(); q.pop();
                for(int neighbor:graph[fnode]) {
                    if(!visited[neighbor]) {
                        q.push(neighbor);
                        str.push(s[neighbor]);
                        indices.push(neighbor);
                        visited[neighbor] = true;
                    }
                }
            }

            while(!indices.empty()) {
                out[indices.top()] = str.top();
                indices.pop(); str.pop();
            }
        }

        return out;
    }
};