class Solution {
	private:
		bool checkBipartite(int node,vector<int> &color,vector<vector<int>> graph){

			color[node] = 1;
			queue<int> q;

			q.push(node);

			while(!q.empty()){
				int node = q.front();
				q.pop();

				for(auto it : graph[node]){
					if(color[it] == -1){
						// changing the color 1 to 0 or 0 to 1
							color[it] = 1 - color[node];
							q.push(it);
					}else if(color[it] == color[node]) 
							return false;
				}
			}

			return true;
		}
public:
	bool isBipartite(vector<vector<int>>& graph) {

		int n = graph.size();

		vector<int> color(n,-1);

		for(int i = 0; i < n; i++){
			if(color[i] == -1){
				// if any of the Graph component is not Bipartite return false
				if(!checkBipartite(i,color,graph)) return false;
			}
		}

		return true;
	}
};