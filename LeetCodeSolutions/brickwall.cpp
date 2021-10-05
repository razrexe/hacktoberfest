class Solution {
public:
int leastBricks(vector<vector<int>>& wall) {
	int rows = size(wall), maxEdges = 0;
	unordered_map<int, int> edgeFreq;
	for(auto& row : wall)
		for(int i = 0, idx = 0; i < size(row) - 1; i++)
		    idx += row[i], edgeFreq[idx]++, maxEdges = max(maxEdges, edgeFreq[idx]);
	return rows - maxEdges;
}

};
