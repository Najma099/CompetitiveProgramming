import java.util.Stack;

public class areaOfReactangle {
    public int largestRectangleArea(int[] heights) {
        int n = heights.length;
        if (n == 0) return 0;

        int[] nse = new int[n];  // Next smaller element
        int[] pse = new int[n];  // Previous smaller element

        // Next smaller element
        Stack<Integer> st = new Stack<>();
        nse[n - 1] = n;
        st.push(n - 1);
        for (int i = n - 2; i >= 0; i--) {
            while (!st.isEmpty() && heights[st.peek()] >= heights[i]) {
                st.pop();
            }
            if (st.isEmpty()) nse[i] = n;
            else nse[i] = st.peek();
            st.push(i);
        }

        // Empty the stack
        st.clear();

        // Previous smaller element
        pse[0] = -1;
        st.push(0);
        for (int i = 1; i < n; i++) {
            while (!st.isEmpty() && heights[st.peek()] >= heights[i]) {
                st.pop();
            }
            if (st.isEmpty()) pse[i] = -1;
            else pse[i] = st.peek();
            st.push(i);
        }

        // Calculate the maximum area
        int maxArea = 0;
        for (int i = 0; i < n; i++) {
            int width = nse[i] - pse[i] - 1;
            int area = heights[i] * width;
            maxArea = Math.max(maxArea, area);
        }

        return maxArea;
    }
}
