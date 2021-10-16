int furthestBuilding(vector<int>& H, int bricks, int ladders) {
	    multiset<int> s;
        int n = size(H), i = 0, jumpHeight = 0;
        for(; i < n - 1; i++) {
            jumpHeight = H[i + 1] - H[i];
            if(jumpHeight <= 0) continue;
            s.insert(jumpHeight);
            if(size(s) > ladders)
                bricks -= *begin(s), s.erase(begin(s));
            if(bricks < 0) return i;
        }
        return i;
    }
