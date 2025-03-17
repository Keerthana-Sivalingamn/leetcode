class Solution {
    public int[] maxSlidingWindow(int[] nums, int k) {
    Deque<Integer> dq = new ArrayDeque<>();
    int[] ans = new int[nums.length - k + 1];
    int j = 0;

    for (int i = 0; i < nums.length; i++) {
        // Remove elements out of window
        if (!dq.isEmpty() && dq.peekFirst() == i - k) {
            dq.pollFirst();
        }

        // Remove smaller elements from the deque
        while (!dq.isEmpty() && nums[dq.peekLast()] < nums[i]) {
            dq.pollLast();
        }

        // Add current element at the back
        dq.offerLast(i);

        // Store the max value of the window
        if (i >= k - 1) {
            ans[j++] = nums[dq.peekFirst()];
        }
    }
    return ans;
}

}