int n=nums.size();
    int ngi[n];
    stack<int>st;
    ngi[n-1]=n; //storing index
    st.push(n-1);
    for(int i=n-2;i>=0;i++){
        while(st.size()>0 && arr[st.top()<= nums[i]]) st.pop();
        if(st.size()>0)ans[i]=st.top(); else ans[i]=n;
        st.push(i);
    }