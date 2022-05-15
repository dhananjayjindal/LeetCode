class PeekingIterator : public Iterator {
private:
  Iterator* it = nullptr;
  int peekaboo = 0;
public:
	PeekingIterator(const vector<int>& nums) : Iterator(nums) {
	    // Initialize any member here.
	    // **DO NOT** save a copy of nums and manipulate it directly.
	    // You should only use the Iterator interface methods.
	    it = new Iterator(*this);
      if(it->hasNext())
        peekaboo = it->next();
	    else 
        peekaboo = -1;
  }
	
    // Returns the next element in the iteration without advancing the iterator.
	int peek() {
        return peekaboo;
	}
	
	// hasNext() and next() should behave the same as in the Iterator interface.
	// Override them if needed.
	int next() {
      if(it->hasNext())
        peekaboo = it->next();
	    else 
        peekaboo = -1;
	    return Iterator::next();
	}
	
	bool hasNext() const {
	    return Iterator::hasNext();
	}
};