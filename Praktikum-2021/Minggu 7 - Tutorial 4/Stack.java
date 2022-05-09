class Stack {
    private int size;
    private int capacity;
    private int[] data;

    public Stack(){
        this.capacity = 10;
        this.size = 0;
        this.data = new int[this.capacity];
    }

    public Stack(int cap){
        this.capacity = cap;
        this.size = 0;
        this.data = new int[this.capacity];
    }

    public Stack(Stack s){
        this.capacity = s.capacity;
        this.size = s.size;
        this.data = new int[s.capacity];
        for (int i = 0; i < this.capacity; i++){
            this.data[i] = s.data[i];
        }
    }

    public void push(int x){
        if (this.size < this.capacity){
            this.data[this.size] = x;
            this.size++;
        }
    }

    public void push(int x, int y){
        if (this.size < this.capacity){
            this.data[this.size] = x;
            this.size++;
        }
        if (this.size < this.capacity){
            this.data[this.size] = y;
            this.size++;
        }
    }

    public int pop(){
        int top = 0;
        if (this.size > 0){
            this.size--;
            top = this.data[this.size];
        }
        return top;
    }
}
