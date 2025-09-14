import java.util.ArrayList;
import java.util.List;

class Stack {
    private List<Integer> items = new ArrayList<>();
    public void push(int item) { items.add(item); }
    public int pop() { return items.remove(items.size() - 1); }
    public int peek() { return items.get(items.size() - 1); }
    public int size() { return items.size(); }
}


