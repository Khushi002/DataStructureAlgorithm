int longestConsecutive(vector<int>& nums) {
         unordered_set<int> set;

    // Insert all numbers into the set
    for (int i = 0; i < nums.size(); i++) {
        set.insert(nums[i]);
    }

    int longestConsecutiveSequence = 0;

    // Traverse each number in the array
    for (int i = 0; i < nums.size(); i++) {
        if (set.find(nums[i] - 1) == set.end()) { // Start of a sequence
            int currentNumber = nums[i];
            int currentConsecutiveSequence = 1;

            // Continue finding consecutive numbers
            while (set.find(currentNumber + 1) != set.end()) {
                currentNumber++;
                currentConsecutiveSequence++;
            }

            // Update the longest sequence length
            longestConsecutiveSequence = max(longestConsecutiveSequence, currentConsecutiveSequence);
        }
    }

    return longestConsecutiveSequence;

    }
