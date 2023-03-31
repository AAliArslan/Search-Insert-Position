
    int searchInsert(vector<int>& nums, int target) {
        int size = nums.size();
        int searcher = size / 2;
        while (target != nums[searcher]) {
            if (target > nums[searcher]) {
                //std::cout<<"searcher:"<<searcher<<endl;
                if (searcher == size - 1) return size;
                if (target <= nums[searcher + 1]) return searcher + 1;
                searcher = (searcher + size) / 2;
                if (searcher > nums.size()) return size;
            }
            if (target < nums[searcher]) {
                //std::cout<<"searcher:"<<searcher<<endl;
                if (searcher == 0) return 0;
                if (target > nums[searcher - 1]) return searcher;
                if (target == nums[searcher - 1]) return searcher - 1;
                if (searcher == 1) {
                    searcher = 0;
                    continue;
                }
                size = searcher;
                searcher = (searcher / 2);
            }
        }
        return searcher;
    }
};