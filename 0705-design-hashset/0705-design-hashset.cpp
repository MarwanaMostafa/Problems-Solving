class MyHashSet {
public:
    int data[1000001];
    MyHashSet() {
        for(int i=0;i<1000001;i++)
            data[i]=-1;
    }
    
    void add(int key) {
        data[key]=key;
    }
    
    void remove(int key) {
        data[key]=-1;
    }
    
    bool contains(int key) {
        return data[key]==-1?false:true;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */