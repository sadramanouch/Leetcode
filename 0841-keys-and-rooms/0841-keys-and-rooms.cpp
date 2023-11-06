class Solution {
public:
    void dfs(int s, vector<vector<int>>& rooms, vector<bool>&vis){
        vis[s]=true;
        for(int i=0; i<rooms[s].size(); i++){
            if(!vis[rooms[s][i]]){
                dfs(rooms[s][i], rooms, vis);
            }
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int i=0;
        int n = rooms.size();
        vector<bool> vis(n, false);
        dfs(0, rooms, vis);
        for(i=0; i<n; i++){
            if(!vis[i]){
                return false;
            }
        }
        return true;
    }
};