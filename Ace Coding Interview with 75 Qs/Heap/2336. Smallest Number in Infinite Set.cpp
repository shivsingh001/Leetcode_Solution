class SmallestInfiniteSet {
public:
    priority_queue<int, vector<int>, greater<int> >pq;
    unordered_set<int>st;
    SmallestInfiniteSet() {
        int i=1;
        while(i<=1000){
            pq.push(i);
            st.insert(i);
            i++;
        }
    }
    
    int popSmallest() {
        int t=pq.top();
        pq.pop();
        st.erase(t);
        return t;
    }
    
    void addBack(int num) {
        if(st.find(num)==st.end()){
            pq.push(num);
            st.insert(num);
        }
        return;
    }
};