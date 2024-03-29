class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        stack<int>st;
        int n=h.size();
        vector<int>l(n);
        vector<int>r(n);
        for(int i=0;i<n;i++)
        {
            while(!st.empty() and h[st.top()]>=h[i])st.pop();
            if(st.empty()) l[i]=0;
            else l[i]=st.top()+1;
            st.push(i);
        }
        while(!st.empty()) st.pop();
        for(int i=n-1;i>=0;i--)
        {
             while(!st.empty() and h[st.top()]>=h[i])st.pop();
             if(st.empty()) r[i]=n-1;
            else r[i]=st.top()-1;
            st.push(i);
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
        int ar=(r[i]-l[i]+1)*h[i];
            ans=max(ans,ar);
        }
        return ans;
        
    }
};